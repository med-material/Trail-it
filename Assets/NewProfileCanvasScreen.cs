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

	[SerializeField]
	private Toggle shouldProtectSettings;

	[SerializeField]
	private RectTransform rectPanel;
	private float defaultAnchoredPositionY;

	public void Start()
	{
		defaultAnchoredPositionY = rectPanel.anchoredPosition.y;
	}

	public void Update()
	{
		if (TouchScreenKeyboard.visible && emailField.isFocused == true)
		{
			rectPanel.anchoredPosition = new Vector2(rectPanel.anchoredPosition.x, defaultAnchoredPositionY + 250.0f);
		}
		else
		{
			rectPanel.anchoredPosition = new Vector2(rectPanel.anchoredPosition.x, defaultAnchoredPositionY);
		}
	}


	public void SetNameAndCreateProfile() {
		Debug.Log ("shouldProtect: " + shouldProtectSettings.isOn);
		profileManager.AddNewProfile (nameField.text, emailField.text, shouldUpload.isOn, shouldProtectSettings.isOn);
		mainMenuScreen.setWelcomeText(nameField.text); 
		nameField.text = "";
		emailField.text = "";
	}

}
