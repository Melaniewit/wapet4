using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using EnhancedTouch = UnityEngine.InputSystem.EnhancedTouch;

[RequireComponent(typeof(ARRaycastManager), typeof(ARPlaneManager))]
public class PlaceObject : MonoBehaviour
{
    [SerializeField]
    private GameObject prefab;  // The GameObject Prefab we want to instantiate when the raycast hits the plane.

    private ARRaycastManager aRRaycastManager;
    private ARPlaneManager aRPlaneManager;
    private GameObject spawnedObject;  // Reference to the instantiated object
    private List<ARRaycastHit> hits = new List<ARRaycastHit>();

    private void Awake()
    {
        aRRaycastManager = GetComponent<ARRaycastManager>();
        aRPlaneManager = GetComponent<ARPlaneManager>();
    }

    private void OnEnable()
    {
        EnhancedTouch.TouchSimulation.Enable();
        EnhancedTouch.EnhancedTouchSupport.Enable();
        EnhancedTouch.Touch.onFingerDown += FingerDown;
    }

    private void OnDisable()
    {
        EnhancedTouch.TouchSimulation.Disable();
        EnhancedTouch.EnhancedTouchSupport.Disable();
        EnhancedTouch.Touch.onFingerDown -= FingerDown;
    }
    private void FingerDown(EnhancedTouch.Finger finger)
    {
        if (finger.index != 0) return;

        if (aRRaycastManager.Raycast(finger.currentTouch.screenPosition, hits, TrackableType.PlaneWithinPolygon))
        {
            Pose pose = hits[0].pose;

            Debug.Log("Raycast hit at position: " + pose.position);

            if (spawnedObject == null)
            {
                spawnedObject = Instantiate(prefab, pose.position, pose.rotation);
                Debug.Log("Instantiated new object at: " + pose.position);

                Demo demoScript = FindObjectOfType<Demo>();
                if (demoScript != null)
                {
                    demoScript.UpdateModelReference(spawnedObject);
                    Debug.Log("Updated Demo reference to new model");
                }
            }
            else
            {
                spawnedObject.transform.position = pose.position;
                spawnedObject.transform.rotation = pose.rotation;
                Debug.Log("Moved existing object to: " + pose.position);

                Demo demoScript = FindObjectOfType<Demo>();
                if (demoScript != null)
                {
                    demoScript.UpdateModelReference(spawnedObject);
                    Debug.Log("Updated Demo reference to moved model");
                }
            }

            if (aRPlaneManager.GetPlane(hits[0].trackableId).alignment == PlaneAlignment.HorizontalUp)
            {
                Vector3 cameraPosition = Camera.main.transform.position;
                Vector3 direction = cameraPosition - spawnedObject.transform.position;
                spawnedObject.transform.rotation = Quaternion.LookRotation(direction);
                Debug.Log("Adjusted object orientation to face the camera");
            }
        }
    }



}
