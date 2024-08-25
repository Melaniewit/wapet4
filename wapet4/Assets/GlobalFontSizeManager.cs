using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine.SceneManagement;

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
            DontDestroyOnLoad(gameObject);
            SceneManager.sceneLoaded += OnSceneLoaded;  // 注册场景加载事件
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

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        InitializeFontSizes();  // 重新初始化字体大小以应对新场景
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
        UpdateFontSize(PlayerPrefs.GetInt("FontSizeIncrease", 0) == 1);  // 应用当前字体大小设置
    }

    private void SetUpToggles()
    {
        normalToggle.onValueChanged.AddListener(delegate { UpdateFontSize(false); });
        bigToggle.onValueChanged.AddListener(delegate { UpdateFontSize(true); });

        bool increaseSize = PlayerPrefs.GetInt("FontSizeIncrease", 0) == 1;
        bigToggle.isOn = increaseSize;
        normalToggle.isOn = !increaseSize;
    }

    public void UpdateFontSize(bool increaseSize)
    {
        if (!initialized) return;  // 确保初始化完成

        foreach (var entry in originalFontSizes)
        {
            if (entry.Key is TMP_Text tmpText)
            {
                tmpText.fontSize = increaseSize ? entry.Value + bigSizeIncrement : entry.Value;
            }
            else if (entry.Key is Text uiText)
            {
                uiText.fontSize = (int)(increaseSize ? entry.Value + bigSizeIncrement : entry.Value);
            }
        }

        PlayerPrefs.SetInt("FontSizeIncrease", increaseSize ? 1 : 0);  // 保存字体大小设置
    }
}
