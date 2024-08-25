using UnityEngine;
using UnityEngine.UI;
using TMPro;  // 引入TextMeshPro命名空间
using System.Collections.Generic;

public class FontSizeManager : MonoBehaviour
{
    public List<TextMeshProUGUI> textsToChange;  // 使用TextMeshProUGUI替代Text
    public Toggle normalToggle;
    public Toggle bigToggle;

    private int normalSize = 40; // 定义正常大小
    private int bigSizeIncrement = 10; // 大字模式增加的大小

    void Start()
    {
        normalToggle.onValueChanged.AddListener(delegate { AdjustFontSize(normalSize); });
        bigToggle.onValueChanged.AddListener(delegate { AdjustFontSize(normalSize + bigSizeIncrement); });

        // 初始化时根据保存的偏好设置字体大小
        int currentSize = PlayerPrefs.GetInt("FontSize", normalSize);
        AdjustFontSize(currentSize);
        normalToggle.isOn = (currentSize == normalSize);
        bigToggle.isOn = (currentSize == normalSize + bigSizeIncrement);
    }

    void AdjustFontSize(int size)
    {
        foreach (TextMeshProUGUI text in textsToChange)
        {
            text.fontSize = size;
        }
        PlayerPrefs.SetInt("FontSize", size); // 保存用户偏好
    }
}
