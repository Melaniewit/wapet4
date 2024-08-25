using UnityEngine;
using UnityEngine.UI;
using Unity.Services.Authentication;

public class LogoutController : MonoBehaviour
{
    [SerializeField] private Button signOutButton;
    [SerializeField] private GameObject logOutPanel;  // LogOutPanel 引用
    [SerializeField] private GameObject loginPanel;   // LoginPanel 引用

    private void Start()
    {
        // 绑定按钮点击事件
        signOutButton.onClick.AddListener(SignOutAndSwitchPanels);
    }

    private void SignOutAndSwitchPanels()
    {
        Debug.Log("SignOut button clicked.");  // 确认按钮点击

        // 检查玩家是否已登录
        Debug.Log("Is player signed in: " + AuthenticationService.Instance.IsSignedIn);

        if (AuthenticationService.Instance.IsSignedIn)
        {
            // 执行登出操作
            AuthenticationService.Instance.SignOut();
            Debug.Log("Player has been signed out.");

            // 切换面板显示
            logOutPanel.SetActive(false);  // 隐藏 LogOutPanel
            loginPanel.SetActive(true);    // 显示 LoginPanel
        }
        else
        {
            Debug.Log("Player is not signed in.");
        }
    }

    private void OnDestroy()
    {
        // 清理事件绑定
        signOutButton.onClick.RemoveListener(SignOutAndSwitchPanels);
    }
}
