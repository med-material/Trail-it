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
	private Text welcomeText;

	[SerializeField]
	private Text startButtonText;

	private string welcomeTextTemplate;

	private string currentName;

	// Use this for initialization
	void Start () {
		welcomeTextTemplate = welcomeText.text;
		string name = PlayerPrefs.GetString("Settings:Name", "Gæst");
		setWelcomeText (name);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void setWelcomeText(string name) {
		welcomeText.text = string.Format (welcomeTextTemplate, name);
	}
}