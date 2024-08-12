using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.InputSystem;  // For general Input System functionality
using EnhancedTouch = UnityEngine.InputSystem.EnhancedTouch;  // Alias for clarity

[RequireComponent(typeof(ARRaycastManager), typeof(ARPlaneManager))]
public class PlaceObject : MonoBehaviour
{
    [SerializeField]
    private GameObject prefab;  // The GameObject Prefab to instantiate when the raycast hits the plane.

    private ARRaycastManager aRRaycastManager;
    private ARPlaneManager aRPlaneManager;
    private GameObject spawnedObject;  // Reference to the instantiated object
    private List<ARRaycastHit> hits = new List<ARRaycastHit>();

    private void Awake()
    {
        aRRaycastManager = GetComponent<ARRaycastManager>();
        aRPlaneManager = GetComponent<ARPlaneManager>();
        EnhancedTouch.EnhancedTouchSupport.Enable();  // Enable Enhanced Touch support
    }

    private void OnEnable()
    {
        EnhancedTouch.Touch.onFingerDown += FingerDown;
    }

    private void OnDisable()
    {
        EnhancedTouch.Touch.onFingerDown -= FingerDown;
    }

    private void FingerDown(EnhancedTouch.Finger finger)
    {
        if (finger.index != 0) return;  // Only react to the first (primary) touch

        if (aRRaycastManager.Raycast(finger.screenPosition, hits, TrackableType.PlaneWithinPolygon))
        {
            Pose pose = hits[0].pose;

            if (spawnedObject == null)
            {
                spawnedObject = Instantiate(prefab, pose.position, pose.rotation);
                // Find DemoController and set the instantiated object for control
                Demo demoController = FindObjectOfType<Demo>();  // Ensure only one DemoController in the scene
                if (demoController != null)
                    demoController.SetControlledObject(spawnedObject);  // Pass reference
            }
            else
            {
                spawnedObject.transform.position = pose.position;
                spawnedObject.transform.rotation = pose.rotation;
            }

            // Adjust rotation to face the camera if the plane is horizontal
            if (aRPlaneManager.GetPlane(hits[0].trackableId).alignment == PlaneAlignment.HorizontalUp)
            {
                Vector3 cameraPosition = Camera.main.transform.position;
                Vector3 direction = cameraPosition - spawnedObject.transform.position;
                spawnedObject.transform.rotation = Quaternion.LookRotation(direction);
            }
        }
    }
}
