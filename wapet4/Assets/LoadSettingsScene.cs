using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadSettingsScene : MonoBehaviour
{
    // Method to load the settings scene
    public void LoadSettings()
    {
        SceneManager.LoadScene("Setting page");
    }
}
