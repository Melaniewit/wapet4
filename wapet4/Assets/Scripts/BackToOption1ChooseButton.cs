using UnityEngine;
using UnityEngine.SceneManagement;

public class BackToOption1ChooseButton : MonoBehaviour
{
    // This function is called when the button is clicked
    public void OnBackToMenuButtonClicked()
    {
        // Load the scene named "Menu"
        SceneManager.LoadScene("PlaneAR");
    }
}
