using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadSettingScene : MonoBehaviour
{
    public void OnClickLoadSetting()
    {
        SceneManager.LoadScene("SettingPage");
    }
}
