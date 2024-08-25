using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Unity.Services.Authentication;

public class UILogin : MonoBehaviour
{
    [SerializeField] private Button loginButton;
    [SerializeField] private TMP_Text userIdText;
    [SerializeField] private Transform loginPanel, userPanel;
    [SerializeField] private LoginController loginController;

    private PlayerInfo playerInfo;

    private void OnEnable()
    {
        loginButton.onClick.AddListener(LoginButtonPressed);
        loginController.OnSignedIn += LoginController_OnSignedIn;
    }

    private void OnDisable()
    {
        loginButton.onClick.RemoveListener(LoginButtonPressed);
        loginController.OnSignedIn -= LoginController_OnSignedIn;
    }

    private async void LoginButtonPressed()
    {
        await loginController.InitSignIn();
    }

    private void LoginController_OnSignedIn(PlayerInfo info)
    {
        playerInfo = info;
        loginPanel.gameObject.SetActive(false);
        userPanel.gameObject.SetActive(true);

        userIdText.text = $"id_{playerInfo.Id}";
    }
}
