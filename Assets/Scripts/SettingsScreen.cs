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
    private Text passwordInput;
    private const string password = "hello";
    [SerializeField]
    private Sprite fra;
    [SerializeField]
    private Sprite til;

	[SerializeField]
	private ProfileScreen profileScreen;

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
	private Text trainingMinutes;
	[SerializeField]
	private UnityEngine.UI.Slider trainingSlider;
	[SerializeField]
	private Text circleAmountNumber;
	[SerializeField]
	private UnityEngine.UI.Slider circleAmountSlider;


    private bool landingsbane;
    private new bool pulse;
    private bool stemme;
	private int trainingTime = 8;
	private int difficultyLevel = 3;
	private int minimumLevel = 7;
	private int maximumLevel = 13;
	private int circleAmountMin = 1;
	private int circleAmountMax = 2;
	private string circleAmountNumberTemplate;
	private string trainingMinutesTemplate;

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

	private void Start()
	{

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
        if (passwordInput.text == password)
        {
            landingsbane = !landingsbane;
            landingsbaneToggle.sprite = landingsbane ? til : fra;
            SaveSettings();
        }
    }

    public void Animation_Click()
    {
        if (passwordInput.text == password)
        {
            pulse = !pulse;
            pulseToggle.sprite = pulse ? til : fra;
            SaveSettings();
        }
    }

    public void Stemme_Click()
    {
        if (passwordInput.text == password)
        {
            stemme = !stemme;
            stemmeToggle.sprite = stemme ? til : fra;
            SaveSettings();
        }
    }

	public void TrainingTimeSlider_OnValueChanged()
	{
		if (passwordInput.text == password) {
			int val = (int) trainingSlider.value;
			trainingTime = val;
			trainingMinutes.text = string.Format (trainingMinutesTemplate, val.ToString());
			SaveSettings ();
		} else {
			trainingSlider.value = (float) trainingTime;
		}
	}

	public void CircleSlider_OnValueChanged()
	{
		if (passwordInput.text == password) {
			int val = (int) circleAmountSlider.value;
			difficultyLevel = val;
			DetermineAmountOfCircles ();
			circleAmountNumber.text = string.Format (circleAmountNumberTemplate, circleAmountMin.ToString(),circleAmountMax.ToString());
			DetermineMinMaxLevel();
			SaveSettings ();
		} else {
			circleAmountSlider.value = (float) difficultyLevel;
		}
	}

    /// <summary>
    /// Load the settings from PlayerPrefs
    /// </summary>
    public void LoadSettings()
    {
		int currentPlayerID = PlayerPrefs.GetInt("Settings:CurrentProfileID", -1);
		Debug.Log ("Loading Settings for id " + currentPlayerID);

        landingsbane = PlayerPrefs.GetInt("Settings:" + currentPlayerID + ":Landingsbane", 0) == 1;
        pulse = PlayerPrefs.GetInt("Settings:" + currentPlayerID + ":Pulse", 0) == 1;
        stemme = PlayerPrefs.GetInt("Settings:"+ currentPlayerID + ":Stemme", 0) == 1;
		trainingTime = PlayerPrefs.GetInt("Settings:"+ currentPlayerID +":Time", 5);
		difficultyLevel = PlayerPrefs.GetInt("Settings:"+ currentPlayerID + ":DifficultyLevel", 1);
		DetermineMinMaxLevel();
		DetermineAmountOfCircles ();
		Debug.Log ("AmountOfCircles: " + circleAmountMin + "-" + circleAmountMax);
    }

    /// <summary>
    /// Save the current settings to PlayerPrefs
    /// </summary>
    public void SaveSettings()
    {
		int currentPlayerID = PlayerPrefs.GetInt("Settings:CurrentProfileID", -1);
		if (currentPlayerID == -1) {
			profileScreen.AddNewProfile ("Gæst");
			currentPlayerID++;
			Debug.Log ("No profiles created, creating a guest profile with id " + currentPlayerID);
		}
		Debug.Log ("Saving Settings for id " + currentPlayerID);

        PlayerPrefs.SetInt("Settings:"+currentPlayerID +":Landingsbane", landingsbane ? 1 : 0);
		PlayerPrefs.SetInt("Settings:"+currentPlayerID +":Pulse", pulse ? 1 : 0);
		PlayerPrefs.SetInt("Settings:"+currentPlayerID +":Stemme", stemme ? 1 : 0);
		PlayerPrefs.SetInt ("Settings:"+currentPlayerID +":Time", trainingTime);
		PlayerPrefs.SetInt ("Settings:"+currentPlayerID +":DifficultyLevel", difficultyLevel);
		PlayerPrefs.SetInt ("Settings:"+currentPlayerID +":MinLevel", minimumLevel);
		PlayerPrefs.SetInt ("Settings:"+currentPlayerID +":MaxLevel", maximumLevel);
    }
}
