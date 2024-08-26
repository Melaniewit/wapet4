using UnityEngine;
using UnityEngine.UI;

public class BrightnessManager : MonoBehaviour
{
    public static BrightnessManager Instance;
    public Canvas[] allCanvases; // Assign all canvases in the scene manually or dynamically

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject); // Keep the instance persistent across scenes
        }
        else
        {
            Destroy(gameObject);
        }
        ApplyBrightness();
    }

    public void ApplyBrightness()
    {
        float brightness = PlayerPrefs.GetFloat("Brightness", 1.0f); // Default to normal brightness
        foreach (Canvas canvas in allCanvases)
        {
            AdjustCanvasBrightness(canvas, brightness);
        }
    }

    public void SetBrightness(float value)
    {
        PlayerPrefs.SetFloat("Brightness", value);
        ApplyBrightness();
    }

    private void AdjustCanvasBrightness(Canvas canvas, float brightness)
    {
        Graphic[] graphics = canvas.GetComponentsInChildren<Graphic>();
        foreach (Graphic graphic in graphics)
        {
            Color color = graphic.color;
            color.r = Mathf.Clamp(color.r * brightness, 0, 1);
            color.g = Mathf.Clamp(color.g * brightness, 0, 1);
            color.b = Mathf.Clamp(color.b * brightness, 0, 1);
            graphic.color = color;
        }
    }
}
