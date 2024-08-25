using UnityEngine;
using TMPro;  // Namespace for TextMeshPro
using UnityEngine.UI;  // Namespace for standard UI Text
using System.Collections.Generic;

public class GlobalFontSizeManager : MonoBehaviour
{
    public static GlobalFontSizeManager Instance;

    public Toggle normalToggle;
    public Toggle bigToggle;

    private Dictionary<Object, float> originalFontSizes = new Dictionary<Object, float>();
    private float bigSizeIncrement = 10f;
    private bool initialized = false;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);  // Ensures this object is not destroyed when loading a new scene.
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void Start()
    {
        InitializeFontSizes();
        SetUpToggles();
    }

    private void InitializeFontSizes()
    {
        TMP_Text[] tmpTexts = FindObjectsOfType<TMP_Text>();
        foreach (TMP_Text text in tmpTexts)
        {
            if (!originalFontSizes.ContainsKey(text))
                originalFontSizes[text] = text.fontSize;
        }

        Text[] uiTexts = FindObjectsOfType<Text>();
        foreach (Text text in uiTexts)
        {
            if (!originalFontSizes.ContainsKey(text))
                originalFontSizes[text] = text.fontSize;
        }

        initialized = true;
    }

    private void SetUpToggles()
    {
        normalToggle.onValueChanged.AddListener(delegate { UpdateFontSize(false); });
        bigToggle.onValueChanged.AddListener(delegate { UpdateFontSize(true); });

        // Set initial toggle state based on saved preference
        bool increaseSize = PlayerPrefs.GetInt("FontSizeIncrease", 0) == 1;
        if (increaseSize)
        {
            bigToggle.isOn = true;
        }
        else
        {
            normalToggle.isOn = true;
        }
    }

    public void UpdateFontSize(bool increaseSize)
    {
        // Ensure original sizes are captured
        if (!initialized)
            InitializeFontSizes();

        // Update TextMeshPro texts
        TMP_Text[] tmpTexts = FindObjectsOfType<TMP_Text>();
        foreach (var text in tmpTexts)
        {
            if (originalFontSizes.TryGetValue(text, out float originalSize))
                text.fontSize = increaseSize ? originalSize + bigSizeIncrement : originalSize;
        }

        // Update standard UI Texts
        Text[] uiTexts = FindObjectsOfType<Text>();
        foreach (var text in uiTexts)
        {
            if (originalFontSizes.TryGetValue(text, out float originalSize))
                text.fontSize = (int)(increaseSize ? originalSize + bigSizeIncrement : originalSize);

        }

        // Optionally save the font size preference
        PlayerPrefs.SetInt("FontSizeIncrease", increaseSize ? 1 : 0); // Save the preference as an increase state rather than a size
    }
}
