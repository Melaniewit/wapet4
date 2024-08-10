using System.Collections.Generic; // This line is necessary for using List<>
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.InputSystem;

public class PlaceObject : MonoBehaviour
{
    [SerializeField]
    private GameObject prefab; // Assign your prefab here

    private ARRaycastManager raycastManager;
    private Camera arCamera; // Reference to the AR camera

    void Start()
    {
        raycastManager = FindObjectOfType<ARRaycastManager>();
        arCamera = Camera.main; // Ensure your AR camera is tagged as "MainCamera"
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
                InstantiatePrefab(hitPose);
            }
        }
    }

    void InstantiatePrefab(Pose pose)
    {
        GameObject spawnedObject = Instantiate(prefab, pose.position, Quaternion.identity);
        Vector3 lookDirection = arCamera.transform.position - spawnedObject.transform.position;
        lookDirection.y = 0; // Ignore y component to avoid tilting the prefab
        Quaternion rotation = Quaternion.LookRotation(lookDirection);
        spawnedObject.transform.rotation = rotation;
    }
}
