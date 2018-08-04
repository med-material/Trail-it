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
	private GameManager gameManager;

	[SerializeField]
	private GameObject questionnaireCanvas;

	[SerializeField]
	private InputField nameField;

	[SerializeField]
	private InputField emailField;

	[SerializeField]
	private UnityEngine.UI.Button newProfileButton;

	[SerializeField]
	private Toggle shouldUpload;

	public void SetNameAndCreateProfile() {
		profileManager.AddNewProfile (nameField.text, emailField.text, shouldUpload.isOn);
		if (shouldUpload.isOn)
		{
			questionnaireCanvas.SetActive(true);
			this.gameObject.SetActive(false);
		}
		else
		{
			gameManager.ResetGame();
		}
	}

}
