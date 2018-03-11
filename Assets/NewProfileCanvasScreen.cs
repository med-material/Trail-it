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

	[SerializeField]
	private InputField emailField;

	[SerializeField]
	private UnityEngine.UI.Button newProfileButton;

	[SerializeField]
	private Toggle shouldUpload;

	public void Start() {
		evaluateButtonSensitivity ();
	}

	public void evaluateButtonSensitivity() {
		bool buttonSensitivity = (nameField.text != "") && (emailField.text != "");
		newProfileButton.interactable = buttonSensitivity;
	}

	public void SetNameAndCreateProfile() {
		profileManager.AddNewProfile (nameField.text, emailField.text, shouldUpload.isOn);
		mainMenuScreen.setWelcomeText(nameField.text);
		nameField.text = "";
	}
}
