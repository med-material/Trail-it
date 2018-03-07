using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;
using Object = UnityEngine.Object;
using UnityEngine.UI;

public class NewProfileCanvasScreen : MonoBehaviour {

	[SerializeField]
	private ProfileManager profileManager;

	[SerializeField]
	private MainMenuScreen mainMenuScreen;

	[SerializeField]
	private InputField nameField;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void SetNameAndCreateProfile() {
		profileManager.AddNewProfile (nameField.text);
		mainMenuScreen.setWelcomeText(nameField.text);
		nameField.text = "";
	}
}
