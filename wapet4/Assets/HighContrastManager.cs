using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class HighContrastManager : MonoBehaviour
{
    public Toggle highContrastToggle;  // Reference to the toggle button
    public Image[] uiImages;           // Array to hold UI Image elements

    private Color[] originalImageColors;  // Array to store original Image colors

    void Start()
    {
        // Save the original colors when the scene loads
        SaveOriginalColors();

        // Load the saved preference from PlayerPrefs (default is 0, meaning off)
        bool isHighContrast = PlayerPrefs.GetInt("HighContrastEnabled", 0) == 1;
        highContrastToggle.isOn = isHighContrast;  // Set toggle state based on saved preference
        ToggleHighContrast(isHighContrast);        // Apply the contrast setting

        // Add listener to toggle, so that changing the toggle calls ToggleHighContrast
        highContrastToggle.onValueChanged.AddListener(delegate {
            ToggleHighContrast(highContrastToggle.isOn);
        });
    }

    void SaveOriginalColors()
    {
        // Initialize arrays to store the original colors
        originalImageColors = new Color[uiImages.Length];

        // Save the original color of each UI Image element
        for (int i = 0; i < uiImages.Length; i++)
        {
            originalImageColors[i] = uiImages[i].color;
        }
    }

    void ToggleHighContrast(bool isEnabled)
    {
        if (isEnabled)
        {
            ApplyHighContrast();
        }
        else
        {
            RestoreOriginalColors();
        }

        // Save the current setting to PlayerPrefs
        PlayerPrefs.SetInt("HighContrastEnabled", isEnabled ? 1 : 0);
    }

    void ApplyHighContrast()
    {
        // Adjust the color contrast for each UI Image element
        for (int i = 0; i < uiImages.Length; i++)
        {
            uiImages[i].color = AdjustColorContrast(originalImageColors[i]);
        }
    }

    Color AdjustColorContrast(Color originalColor)
    {
        // Drastically increase contrast by pushing colors towards black or white:
        float brightness = (originalColor.r + originalColor.g + originalColor.b) / 3.0f;
        return brightness < 0.5f ? Color.black : Color.white;
    }

    void RestoreOriginalColors()
    {
        // Restore the original color for each UI Image element
        for (int i = 0; i < uiImages.Length; i++)
        {
            uiImages[i].color = originalImageColors[i];
        }
    }
}
