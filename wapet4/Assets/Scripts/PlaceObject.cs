using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.InputSystem;

public class PlaceObject : MonoBehaviour
{
    [SerializeField]
    private GameObject prefab; // Assign   prefab here

    private ARRaycastManager raycastManager;
    private Camera arCamera; // Reference to the AR camera
    private GameObject instantiatedObject; // Store the instantiated object

    void Start()
    {
        raycastManager = FindObjectOfType<ARRaycastManager>();
        arCamera = Camera.main; // Ensure   AR camera is tagged as "MainCamera"
    }

    void Update()
    {
        if (Touchscreen.current.primaryTouch.press.isPressed)
        {
            Vector2 touchPosition = Touchscreen.current.primaryTouch.position.ReadValue();
            List<ARRaycastHit> hits = new List<ARRaycastHit>();
            if (raycastManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon))
            {
                Pose hitPose = hits[0].pose;
                PlaceOrMovePrefab(hitPose);
            }
        }
    }

    void PlaceOrMovePrefab(Pose pose)
    {
        if (instantiatedObject == null)
        {
            // Instantiate the object for the first time
            instantiatedObject = Instantiate(prefab, pose.position, Quaternion.identity);
        }
        else
        {
            // Move the existing object to the new position
            instantiatedObject.transform.position = pose.position;
        }

        // Update rotation to face the camera
        Vector3 lookDirection = arCamera.transform.position - instantiatedObject.transform.position;
        lookDirection.y = 0; // Ignore y component to avoid tilting the prefab
        Quaternion rotation = Quaternion.LookRotation(lookDirection);
        instantiatedObject.transform.rotation = rotation;
    }
}
