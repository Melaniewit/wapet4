using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadChatbotSceneScript : MonoBehaviour
{
    public void LoadChatbotScene()
    {
        SceneManager.LoadScene("ChatbotScene");
    }
}
