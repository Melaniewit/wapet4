
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadDemoScene : MonoBehaviour
{
    // Method to load the settings scene
    public void LoadDemo()
    {
        SceneManager.LoadScene("Demo_Pets");
    }
}
