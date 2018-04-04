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

	private bool uploadPolicy = false;

	public void SetUploadPolicy(bool policy)
	{
		uploadPolicy = policy;
	}

	public void SaveProfile()
	{
		profileManager.AddNewProfile(nameInputField.text, emailInputField.text, uploadPolicy, false);
	}
}
