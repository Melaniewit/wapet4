using UnityEngine;
using UnityEngine.UI;

public class HighContrastManager : MonoBehaviour
{
    public Toggle highContrastToggle;  // Reference to the toggle button
    public Image[] uiImages;           // Array to hold UI Image elements

    public Sprite[] normalSprites;     // Array to hold normal sprites (one per UI image)
    public Sprite[] highContrastSprites; // Array to hold high contrast sprites (one per UI image)

    void Start()
    {
        // Load the saved preference from PlayerPrefs (default is 0, meaning off)
        bool isHighContrast = PlayerPrefs.GetInt("HighContrastEnabled", 0) == 1;
        highContrastToggle.isOn = isHighContrast;  // Set toggle state based on saved preference
        ToggleHighContrast(isHighContrast);        // Apply the contrast setting

        // Add listener to toggle, so that changing the toggle calls ToggleHighContrast
        highContrastToggle.onValueChanged.AddListener(delegate {
            ToggleHighContrast(highContrastToggle.isOn);
        });
    }

    void ToggleHighContrast(bool isEnabled)
    {
        for (int i = 0; i < uiImages.Length; i++)
        {
            if (isEnabled)
            {
                uiImages[i].sprite = highContrastSprites[i];
            }
            else
            {
                uiImages[i].sprite = normalSprites[i];
            }
        }

        // Save the current setting to PlayerPrefs
        PlayerPrefs.SetInt("HighContrastEnabled", isEnabled ? 1 : 0);
    }
}
