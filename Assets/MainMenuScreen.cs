using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;
using Object = UnityEngine.Object;
using UnityEngine.UI;

public class MainMenuScreen : MonoBehaviour {

	[SerializeField]
	private ProfileManager profileManager;

	[SerializeField]
	private Text welcomeText;

	[SerializeField]
	private Text trainingTimeText;
	private string trainingTimeTextTemplate;

	private string welcomeTextTemplate;

	private string currentProfileID;
	private string currentName;

	private string trainingTime = "2";

	// Use this for initialization
	void Start () {
		currentProfileID = profileManager.GetCurrentProfileID();
		welcomeTextTemplate = welcomeText.text;
		setTheWelcomeText ();

		trainingTime = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Time", 2).ToString();
		trainingTimeTextTemplate = trainingTimeText.text;
		trainingTimeText.text = string.Format(trainingTimeTextTemplate, trainingTime);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void setTheWelcomeText() {
		currentName = profileManager.GetCurrentName();
		welcomeText.text = string.Format (welcomeTextTemplate, currentName);
	}
}