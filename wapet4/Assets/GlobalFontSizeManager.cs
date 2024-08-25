using UnityEngine;
using TMPro; // Namespace for TextMeshPro
using UnityEngine.UI; // Namespace for standard UI Text

public class GlobalFontSizeManager : MonoBehaviour
{
    public static GlobalFontSizeManager Instance;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject); // Ensures this object is not destroyed when loading a new scene.
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public void UpdateFontSize(int newSize)
    {
        // Update TextMeshPro texts
        TMP_Text[] tmpTexts = FindObjectsOfType<TMP_Text>();
        foreach (var text in tmpTexts)
        {
            text.fontSize = newSize;
        }

        // Update standard UI Texts
        Text[] uiTexts = FindObjectsOfType<Text>();
        foreach (var text in uiTexts)
        {
            text.fontSize = newSize;
        }

        PlayerPrefs.SetInt("FontSize", newSize); // Save the font size to PlayerPrefs
    }
}
