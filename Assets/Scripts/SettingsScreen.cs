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
    private Image animationToggle;
    private UnityEngine.UI.Button animationButton;
    [SerializeField]
    private Image stemmeToggle;
    private UnityEngine.UI.Button stemmeButton;

    private bool landingsbane;
    private new bool animation;
    private bool stemme;

    private void Awake()
    {
        landingsbaneButton = landingsbaneToggle.GetComponent<UnityEngine.UI.Button>();
        animationButton = animationToggle.GetComponent<UnityEngine.UI.Button>();
        stemmeButton = stemmeToggle.GetComponent<UnityEngine.UI.Button>();
    }

    private void OnEnable()
    {
        LoadSettings();
        landingsbaneToggle.sprite = landingsbane ? til : fra;
        animationToggle.sprite = animation ? til : fra;
        stemmeToggle.sprite = stemme ? til : fra;
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
            animation = !animation;
            animationToggle.sprite = animation ? til : fra;
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

    /// <summary>
    /// Load the settings from PlayerPrefs
    /// </summary>
    public void LoadSettings()
    {
        landingsbane = PlayerPrefs.GetInt("Settings:Landingsbane", 0) == 1;
        animation = PlayerPrefs.GetInt("Settings:Animation", 0) == 1;
        stemme = PlayerPrefs.GetInt("Settings:Stemme", 0) == 1;
    }

    /// <summary>
    /// Save the current settings to PlayerPrefs
    /// </summary>
    public void SaveSettings()
    {
        PlayerPrefs.SetInt("Settings:Landingsbane", landingsbane ? 1 : 0);
        PlayerPrefs.SetInt("Settings:Animation", animation ? 1 : 0);
        PlayerPrefs.SetInt("Settings:Stemme", stemme ? 1 : 0);
    }
}
