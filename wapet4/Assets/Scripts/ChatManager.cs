using IBM.Watson.Assistant.V2;
using IBM.Watson.Assistant.V2.Model;
using IBM.Cloud.SDK.Authentication.Iam;
using IBM.Cloud.SDK;
using UnityEngine;
using UnityEngine.UI;

public class ChatManager : MonoBehaviour
{
    public GameObject chatPanel;
    public GameObject chatBubbleUserPrefab;
    public GameObject chatBubbleBotPrefab;
    public InputField userInputField;
    public Button sendButton;

    private AssistantService assistantService;
    private string assistantVersionDate = "2021-06-14";
    private string assistantId = "ef566071-a42f-4be2-88fa-37a279a4425a";
    private string sessionId;

    void Start()
    {
        // Initialize Watson Assistant Service
        IamAuthenticator authenticator = new IamAuthenticator(apikey: "Xnu8f5boyUYqJjMOrL7DOKNrKlW-RiQe2kHg33bEQxwh");

        // Check if authenticator is correctly initialized
        if (authenticator.CanAuthenticate())
        {
            assistantService = new AssistantService(assistantVersionDate, authenticator);
            assistantService.SetServiceUrl("https://api.eu-gb.assistant.watson.cloud.ibm.com/instances/06fa2fec-0d3e-4093-9840-fb1a430b6c99");

            // Create a session
            assistantService.CreateSession(OnSessionCreated, assistantId);
        }
        else
        {
            Debug.LogError("Failed to authenticate using the provided API key.");
        }

        // Set up the send button
        sendButton.onClick.AddListener(OnSendButtonClicked);
    }


    void OnSessionCreated(DetailedResponse<SessionResponse> response, IBMError error)
    {
        if (error == null)
        {
            sessionId = response.Result.SessionId;
            Debug.Log("Session created successfully!");
        }
        else
        {
            Debug.LogError("Failed to create session: " + error.ErrorMessage);
        }
    }

    void OnSendButtonClicked()
    {
        string userInput = userInputField.text;

        if (!string.IsNullOrEmpty(userInput))
        {
            CreateChatBubbleUser(userInput);
            SendMessageToWatson(userInput);
            userInputField.text = "";  // Clear the input field
        }
    }

    void CreateChatBubbleUser(string text)
    {
        GameObject newUserBubble = Instantiate(chatBubbleUserPrefab, chatPanel.transform);
        newUserBubble.GetComponentInChildren<Text>().text = text;
    }

    void SendMessageToWatson(string text)
    {
        var messageInput = new MessageInput()
        {
            Text = text
        };

        assistantService.Message(OnWatsonResponse, assistantId, sessionId, messageInput);
    }

    void OnWatsonResponse(DetailedResponse<MessageResponse> response, IBMError error)
    {
        if (error == null)
        {
            string botResponseText = response.Result.Output.Generic[0].Text;
            CreateChatBubbleBot(botResponseText);
        }
        else
        {
            Debug.LogError("Failed to get response from Watson: " + error.ErrorMessage);
        }
    }

    void CreateChatBubbleBot(string text)
    {
        GameObject newBotBubble = Instantiate(chatBubbleBotPrefab, chatPanel.transform);
        newBotBubble.GetComponentInChildren<Text>().text = text;
    }
}
