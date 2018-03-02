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
	private ProfileScreen profileScreen;

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
		profileScreen.AddNewProfile (nameField.text); // -1 means just use the highest profile ID.
		mainMenuScreen.setWelcomeText(nameField.text);
		nameField.text = "";
	}
}
