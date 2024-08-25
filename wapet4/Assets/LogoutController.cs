using UnityEngine;
using UnityEngine.UI;
using Unity.Services.Authentication;
using UnityEngine.SceneManagement;

public class LogoutController : MonoBehaviour
{
    [SerializeField] private Button signOutButton;

    private void Start()
    {
        // 绑定按钮点击事件
        signOutButton.onClick.AddListener(SignOutAndReturnToLogin);
    }

    public void SignOutAndReturnToLogin()
    {
        Debug.Log("SignOut button clicked.");  // 确认按钮点击

        // 检查玩家是否已登录
        Debug.Log("Is player signed in: " + AuthenticationService.Instance.IsSignedIn);

        if (AuthenticationService.Instance.IsSignedIn)
        {
            // 执行登出操作
            AuthenticationService.Instance.SignOut();
            Debug.Log("Player has been signed out.");

            // 跳转回登录页面
            SceneManager.LoadScene("Login page");
        }
        else
        {
            Debug.Log("Player is not signed in.");
        }
    }

    private void OnDestroy()
    {
        // 清理事件绑定
        signOutButton.onClick.RemoveListener(SignOutAndReturnToLogin);
    }
}
