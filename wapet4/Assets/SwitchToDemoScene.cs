using System.Collections;  // Necessary for IEnumerator
using UnityEngine;
using UnityEngine.SceneManagement;
public class SwitchToDemoScene : MonoBehaviour
{
    [SerializeField]
    private PlaceObject placeObjectScript;  // Reference to the script that manages the spawned object

    public void LoadDemoScene()
    {
        // Access the spawned object from the PlaceObject script
        // if (placeObjectScript.spawnedObject != null)
        // {
        //     GameObject spawnedObject = placeObjectScript.spawnedObject;

        //     PlayerPrefs.SetFloat("AnimalPositionX", spawnedObject.transform.position.x);
        //     PlayerPrefs.SetFloat("AnimalPositionY", spawnedObject.transform.position.y);
        //     PlayerPrefs.SetFloat("AnimalPositionZ", spawnedObject.transform.position.z);
        //     PlayerPrefs.SetFloat("AnimalRotationY", spawnedObject.transform.rotation.eulerAngles.y);
        // }

        // Load the demo scene asynchronously
        SceneManager.LoadSceneAsync("Demo_Pets");

    }
}