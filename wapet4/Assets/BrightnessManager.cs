using UnityEngine;
using UnityEngine.UI;

public class BrightnessManager : MonoBehaviour
{
    public static BrightnessManager Instance;
    public Canvas[] allCanvases; // 手动分配或动态获取所有Canvas
    private float brightness = 1.0f;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject); // 保持在场景切换时不销毁
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void Start()
    {
        // 从PlayerPrefs加载亮度设置（默认值为1.0）
        brightness = PlayerPrefs.GetFloat("Brightness", 1.0f);
        ApplyBrightness();
    }

    public void SetBrightness(float value)
    {
        // 将滑块值保存到PlayerPrefs
        brightness = Mathf.Clamp(value, 0.5f, 2.0f); // 限制亮度值的范围
        PlayerPrefs.SetFloat("Brightness", brightness);
        ApplyBrightness();
    }

    private void ApplyBrightness()
    {
        // 调整每个Canvas中UI元素的亮度
        foreach (Canvas canvas in allCanvases)
        {
            AdjustCanvasBrightness(canvas, brightness);
        }
    }

    private void AdjustCanvasBrightness(Canvas canvas, float brightness)
    {
        // 获取Canvas中所有的Graphic组件
        Graphic[] graphics = canvas.GetComponentsInChildren<Graphic>();
        foreach (Graphic graphic in graphics)
        {
            if (graphic != null)
            {
                Color originalColor = graphic.color;
                // 调整颜色的亮度
                float adjustedR = Mathf.Clamp01(originalColor.r * brightness);
                float adjustedG = Mathf.Clamp01(originalColor.g * brightness);
                float adjustedB = Mathf.Clamp01(originalColor.b * brightness);

                // 应用调整后的颜色
                graphic.color = new Color(adjustedR, adjustedG, adjustedB, originalColor.a);
            }
        }
    }
}
