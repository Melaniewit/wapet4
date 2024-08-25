using UnityEngine;
using UnityEngine.UI; // 确保引入了这个命名空间
using UnityEngine.SceneManagement;
using Unity.Services.Authentication;

public class LogoutController : MonoBehaviour
{
    [SerializeField] private Button signOutButton;

    private void Start()
    {
        // 绑定按钮点击事件
        signOutButton.onClick.AddListener(SignOutAndReturnToLogin);
    }

    private void SignOutAndReturnToLogin()
    {
        // 检查玩家是否已登录
        if (AuthenticationService.Instance.IsSignedIn)
        {
            // 执行登出操作
            AuthenticationService.Instance.SignOut();
            Debug.Log("Player has been signed out.");

            // 返回登录场景
            SceneManager.LoadScene("Login page"); // 确保使用正确的场景名称
        }
    }

    private void OnDestroy()
    {
        // 清理事件绑定
        signOutButton.onClick.RemoveListener(SignOutAndReturnToLogin);
    }
}
