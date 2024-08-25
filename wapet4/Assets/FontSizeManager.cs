using UnityEngine;
using UnityEngine.UI;
using TMPro; // Include the TMP namespace
using System.Collections.Generic;

public class FontSizeManager : MonoBehaviour
{
    public List<TMP_Text> textsToChange; // Use TMP_Text instead of Text
    public Toggle normalToggle;
    public Toggle bigToggle;

    private Dictionary<TMP_Text, float> originalFontSizes = new Dictionary<TMP_Text, float>();
    private float bigSizeIncrement = 10f; // Define increment for big size

    void Start()
    {
        // Store the original font sizes and set up listeners
        foreach (TMP_Text text in textsToChange)
        {
            originalFontSizes[text] = text.fontSize; // Capture the current font size as the "normal" size
        }

        normalToggle.onValueChanged.AddListener(delegate { ApplyNormalSize(); });
        bigToggle.onValueChanged.AddListener(delegate { ApplyBigSize(); });

        // Set initial state based on saved preference
        ApplyInitialFontSize();
    }

    private void ApplyNormalSize()
    {
        if (normalToggle.isOn)
        {
            foreach (var text in textsToChange)
            {
                text.fontSize = originalFontSizes[text]; // Restore original size
            }
            SaveFontSizePreference(originalFontSizes[textsToChange[0]]);
        }
    }

    private void ApplyBigSize()
    {
        if (bigToggle.isOn)
        {
            foreach (var text in textsToChange)
            {
                text.fontSize = originalFontSizes[text] + bigSizeIncrement; // Increase by the defined increment
            }
            SaveFontSizePreference(originalFontSizes[textsToChange[0]] + bigSizeIncrement);
        }
    }

    private void ApplyInitialFontSize()
    {
        float savedSize = PlayerPrefs.GetFloat("FontSize", originalFontSizes[textsToChange[0]]);
        if (Mathf.Approximately(savedSize, originalFontSizes[textsToChange[0]] + bigSizeIncrement))
        {
            bigToggle.isOn = true;
            ApplyBigSize();
        }
        else
        {
            normalToggle.isOn = true;
            ApplyNormalSize();
        }
    }

    private void SaveFontSizePreference(float size)
    {
        PlayerPrefs.SetFloat("FontSize", size); // Save the preference as a float
    }
}
