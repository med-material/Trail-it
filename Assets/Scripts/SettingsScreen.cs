using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;
using Object = UnityEngine.Object;
using UnityEngine.UI;

public class SettingsScreen : MonoBehaviour
{
    [SerializeField]
    private InputField passwordInput;
    private const string password = "hello";
    [SerializeField]
    private Sprite fra;
    [SerializeField]
    private Sprite til;

	[SerializeField]
	private GameObject settingsPanel;

	[SerializeField]
	private GameObject passwordPanel;

	[SerializeField]
	private GameObject wrongPassword;

	[SerializeField]
	private ProfileManager profileManager;

    [SerializeField]
    private Image landingsbaneToggle;
    private UnityEngine.UI.Button landingsbaneButton;
    [SerializeField]
    private Image pulseToggle;
    private UnityEngine.UI.Button pulseButton;
    [SerializeField]
    private Image stemmeToggle;
    private UnityEngine.UI.Button stemmeButton;
	[SerializeField]
	private Image introToggle;
	private UnityEngine.UI.Button introButton;

	[SerializeField]
	private Text trainingMinutes;
	[SerializeField]
	private UnityEngine.UI.Slider trainingSlider;
	[SerializeField]
	private Text circleAmountNumber;
	[SerializeField]
	private UnityEngine.UI.Slider circleAmountSlider;

	[SerializeField]
	private Image gameAButton;
	[SerializeField]
	private Image gameBButton;

	[SerializeField]
	private Sprite selectedButtonSprite;

	[SerializeField]
	private Sprite regularButtonSprite;

    private bool landingsbane;
    private new bool pulse;
    private bool stemme;
	private bool intro;
	private int trainingTime = 8;
	private int difficultyLevel = 3;
	private int minimumLevel = 7;
	private int maximumLevel = 13;
	private int circleAmountMin = 1;
	private int circleAmountMax = 2;
	private string circleAmountNumberTemplate;
	private string trainingMinutesTemplate;
	private string gameType;

    private void Awake()
    {
		landingsbaneButton = landingsbaneToggle.GetComponent<UnityEngine.UI.Button>();
		pulseButton = pulseToggle.GetComponent<UnityEngine.UI.Button>();
		stemmeButton = stemmeToggle.GetComponent<UnityEngine.UI.Button>();
    }

    private void OnEnable()
    {

        LoadSettings();
        landingsbaneToggle.sprite = landingsbane ? til : fra;
        pulseToggle.sprite = pulse ? til : fra;
        stemmeToggle.sprite = stemme ? til : fra;
		trainingSlider.value = (float) trainingTime;
		circleAmountSlider.value = (float) difficultyLevel;
		Debug.Log ("Setting slider text");
		if (trainingMinutesTemplate == null) {
			
			trainingMinutesTemplate = trainingMinutes.text;
		}
		if (circleAmountNumberTemplate == null) {
			circleAmountNumberTemplate = circleAmountNumber.text;
		}
		trainingMinutes.text = string.Format (trainingMinutesTemplate, trainingTime.ToString());
		circleAmountNumber.text = string.Format (circleAmountNumberTemplate, circleAmountMin.ToString(),circleAmountMax.ToString());
    }

	private void DetermineAmountOfCircles () {
		Debug.Log ("Determining amount of cirlces");
		switch(difficultyLevel) {
		case 1:
			circleAmountMin = 10;
			circleAmountMax = 15;
			break;
		case 2:
			circleAmountMin = 20;
			circleAmountMax = 30;
			break;
		case 3:
			circleAmountMin = 35;
			circleAmountMax = 40;
			break;
		default:
			circleAmountMin = 1;
			circleAmountMax = 2;
			break;
		}			
	}

	private void DetermineMinMaxLevel () {
		switch(difficultyLevel) {
		case 1:
			minimumLevel = 1;
			maximumLevel = 4;
			break;
		case 2:
			minimumLevel = 7;
			maximumLevel = 13;
			break;
		case 3:
			minimumLevel = 18;
			minimumLevel = 27;
			break;
		default:
			minimumLevel = 1;
			minimumLevel = 2;
			break;
		}		
	}

    public void Landingsbane_Click()
    {
        landingsbane = !landingsbane;
        landingsbaneToggle.sprite = landingsbane ? til : fra;
        SaveSettings();
    }

    public void Animation_Click()
    {
        pulse = !pulse;
        pulseToggle.sprite = pulse ? til : fra;
        SaveSettings();
    }

    public void Stemme_Click()
    {
        stemme = !stemme;
        stemmeToggle.sprite = stemme ? til : fra;
        SaveSettings();
    }

	public void Intro_Click()
	{
		intro = !intro;
		introToggle.sprite = intro ? til : fra;
		SaveSettings();
	}

	public void TrainingTimeSlider_OnValueChanged()
	{
		int val = (int) trainingSlider.value;
		if (val != null && trainingMinutesTemplate != null) {
			trainingTime = val;
			trainingMinutes.text = string.Format (trainingMinutesTemplate, val.ToString ());
			SaveSettings ();
		}
	}

	public void CircleSlider_OnValueChanged()
	{
		int val = (int) circleAmountSlider.value;
		if (val != null && circleAmountNumberTemplate != null) {
			difficultyLevel = val;
			DetermineAmountOfCircles ();
			circleAmountNumber.text = string.Format (circleAmountNumberTemplate, circleAmountMin.ToString (), circleAmountMax.ToString ());
			DetermineMinMaxLevel ();
			SaveSettings ();
		}
	}

	public void switchToGameA() {
		gameAButton.sprite = selectedButtonSprite;
		gameBButton.sprite = regularButtonSprite;
		gameType = "gameA";
		SaveSettings ();
	}

	public void switchToGameB() {
		gameBButton.sprite = selectedButtonSprite;
		gameAButton.sprite = regularButtonSprite;
		gameType = "gameB";
		SaveSettings ();
	}

    /// <summary>
    /// Load the settings from PlayerPrefs
    /// </summary>
    public void LoadSettings()
    {
		string currentProfileID = profileManager.GetCurrentProfileID();
		Debug.Log ("Loading Settings for id " + currentProfileID);

        landingsbane = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Landingsbane", 0) == 1;
        pulse = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Pulse", 0) == 1;
        stemme = PlayerPrefs.GetInt("Settings:"+ currentProfileID + ":Stemme", 0) == 1;
		intro = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Intro", 0) == 1;
		trainingTime = PlayerPrefs.GetInt("Settings:"+ currentProfileID +":Time", 5);
		gameType = PlayerPrefs.GetString ("Settings:" + currentProfileID + ":GameType", "gameA");
		difficultyLevel = PlayerPrefs.GetInt("Settings:"+ currentProfileID + ":DifficultyLevel", 1);
		DetermineMinMaxLevel();
		DetermineAmountOfCircles ();
		Debug.Log ("AmountOfCircles: " + circleAmountMin + "-" + circleAmountMax);
    }

    /// <summary>
    /// Save the current settings to PlayerPrefs
    /// </summary>
    public void SaveSettings()
    {
		string currentProfileID = profileManager.GetCurrentProfileID();
		Debug.Log ("Saving Settings for id " + currentProfileID);

        PlayerPrefs.SetInt("Settings:"+currentProfileID +":Landingsbane", landingsbane ? 1 : 0);
		PlayerPrefs.SetInt("Settings:"+currentProfileID +":Pulse", pulse ? 1 : 0);
		PlayerPrefs.SetInt("Settings:"+currentProfileID +":Stemme", stemme ? 1 : 0);
		PlayerPrefs.SetInt("Settings:"+currentProfileID +":Intro", intro ? 1 : 0);
		PlayerPrefs.SetInt ("Settings:"+currentProfileID +":Time", trainingTime);
		PlayerPrefs.SetInt ("Settings:"+currentProfileID +":DifficultyLevel", difficultyLevel);
		PlayerPrefs.SetInt ("Settings:"+currentProfileID +":MinLevel", minimumLevel);
		PlayerPrefs.SetInt ("Settings:"+currentProfileID +":MaxLevel", maximumLevel);
		PlayerPrefs.SetString ("Settings:" + currentProfileID + ":GameType", gameType);
    }

	public void CheckPassword() {
		if (!profileManager.GetProtectSettings () || passwordInput.text == password) {
			settingsPanel.SetActive (true);
			passwordPanel.SetActive (false);
			passwordInput.text = "";
		} else if (passwordInput.text != "") {
			wrongPassword.SetActive (true);
			passwordPanel.SetActive (true);
			settingsPanel.SetActive (false);
		} else {
			passwordPanel.SetActive (true);
			settingsPanel.SetActive (false);
		}

	}
}
