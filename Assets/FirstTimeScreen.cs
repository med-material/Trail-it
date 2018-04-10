using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FirstTimeScreen : MonoBehaviour {

	[SerializeField]
	private InputField nameInputField;

	[SerializeField]
	private InputField emailInputField;

	[SerializeField]
	private ProfileManager profileManager;

	public void SetTrueUploadPolicy()
	{
		profileManager.SetUploadPolicy(true);
	}

	public void SetEmail()
	{
		profileManager.SetEmail(emailInputField.text);
	}

	public void AddProfile()
	{
		profileManager.AddNewProfile(nameInputField.text);
	}
}
