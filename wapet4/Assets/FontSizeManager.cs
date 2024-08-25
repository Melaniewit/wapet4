using UnityEngine;
using UnityEngine.UI;
using TMPro; // Include the TMP namespace
using System.Collections.Generic;

public class FontSizeManager : MonoBehaviour
{
    public List<TMP_Text> textsToChange; // Use TMP_Text instead of Text
    public Toggle normalToggle;
    public Toggle bigToggle;

    private int normalSize = 40; // Define normal size
    private int bigSizeIncrement = 10; // Define increment for big size

    void Start()
    {
        normalToggle.onValueChanged.AddListener(delegate { OnToggleChanged(normalToggle, normalSize); });
        bigToggle.onValueChanged.AddListener(delegate { OnToggleChanged(bigToggle, normalSize + bigSizeIncrement); });

        // Force an initial toggle state based on saved preference
        int savedSize = PlayerPrefs.GetInt("FontSize", normalSize);
        if (savedSize == normalSize + bigSizeIncrement)
        {
            bigToggle.isOn = true;
            AdjustFontSize(normalSize + bigSizeIncrement);
        }
        else
        {
            normalToggle.isOn = true;
            AdjustFontSize(normalSize);
        }
    }

    private void OnToggleChanged(Toggle changedToggle, int size)
    {
        if (changedToggle.isOn)
        {
            AdjustFontSize(size);
        }
    }

    void AdjustFontSize(int size)
    {
        if (GlobalFontSizeManager.Instance != null)
        {
            // Update global font size across all scenes
            GlobalFontSizeManager.Instance.UpdateFontSize(size);
        }
        else
        {
            // Fallback to adjust only locally scoped text elements
            foreach (TMP_Text text in textsToChange)
            {
                text.fontSize = size;
            }
        }
        PlayerPrefs.SetInt("FontSize", size); // Save the preference
    }
}
