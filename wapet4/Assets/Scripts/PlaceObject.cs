using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using EnhancedTouch = UnityEngine.InputSystem.EnhancedTouch;
using UnityEngine.SceneManagement;


[RequireComponent(typeof(ARRaycastManager), typeof(ARPlaneManager))]
public class PlaceObject : MonoBehaviour
{
    [SerializeField]
    private GameObject prefab;  // The GameObject Prefab we want to instantiate when the raycast hits the plane.

    private ARRaycastManager aRRaycastManager;
    private ARPlaneManager aRPlaneManager;
    private GameObject spawnedObject;  // Reference to the instantiated object
    private List<ARRaycastHit> hits = new List<ARRaycastHit>();
    public void FixModelAndChangeScene()
    {
        // Optional: Disable further raycasting to fix the model's position
        this.enabled = false;

        // Load the demo scene
        SceneManager.LoadScene("DemoScene");  // 
    }
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

            if (spawnedObject == null)
            {
                // Instantiate only if there's no object spawned yet
                spawnedObject = Instantiate(prefab, pose.position, pose.rotation);
            }
            else
            {
                // Move the existing object instead of instantiating a new one
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
