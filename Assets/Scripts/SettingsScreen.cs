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

    private bool landingsbane;
    private new bool pulse;
    private bool stemme;
	private int trainingTime;
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
    }

	private void Start()
	{
		trainingMinutesTemplate = trainingMinutes.text;
		trainingMinutes.text = string.Format (trainingMinutesTemplate, trainingTime.ToString());
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

	public void Slider_OnValueChanged()
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

    /// <summary>
    /// Load the settings from PlayerPrefs
    /// </summary>
    public void LoadSettings()
    {
        landingsbane = PlayerPrefs.GetInt("Settings:Landingsbane", 0) == 1;
        pulse = PlayerPrefs.GetInt("Settings:Pulse", 0) == 1;
        stemme = PlayerPrefs.GetInt("Settings:Stemme", 0) == 1;
		trainingTime = PlayerPrefs.GetInt("Settings:Training", 0);
    }

    /// <summary>
    /// Save the current settings to PlayerPrefs
    /// </summary>
    public void SaveSettings()
    {
        PlayerPrefs.SetInt("Settings:Landingsbane", landingsbane ? 1 : 0);
        PlayerPrefs.SetInt("Settings:Pulse", pulse ? 1 : 0);
        PlayerPrefs.SetInt("Settings:Stemme", stemme ? 1 : 0);
		PlayerPrefs.SetInt ("Settings:Training", trainingTime);
    }
}
