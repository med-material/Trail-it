using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;
using Object = UnityEngine.Object;
using UnityEngine.UI;

public class ProfileScreen : MonoBehaviour {

	[SerializeField]
	private ProfileManager profileManager;
	[SerializeField]
	private GameObject newProfileTemplate;

	private GameObject newProfile;
	private GameObject profileCreatorButton;

	[SerializeField]
	private Transform parentTransform;

	private int currentProfileID = -1;
	private int highestProfileID = -1; // highestProfileID is the total amount of profiles including deleted profiles
	private string currentName;

	private List<GameObject> profileButtons;

	[SerializeField]
	private GameObject profileCreatorTemplate;

	[SerializeField]
	private Sprite currentProfileSprite;

	void Awake() {

		profileButtons = new List<GameObject>();
		currentName = profileManager.GetCurrentName ();
	}

	private void CreateProfileButton(string name, int id) {
		newProfile = (GameObject)Instantiate (newProfileTemplate, newProfileTemplate.transform);
		newProfile.GetComponent<Transform> ().SetParent (parentTransform);
		if (id != -1) {
			newProfile.GetComponent<ProfileButton> ().SetID (id);
		} else {
			newProfile.GetComponent<ProfileButton> ().SetID (highestProfileID);
		}
		newProfile.GetComponent<ProfileButton> ().SetName (name);
		newProfile.SetActive (true);
		profileButtons.Add (newProfile);
	}

	public void LoadProfileButtons()
	{
		if (profileButtons != null && profileButtons.Count > 0) {
			foreach (var profile in profileButtons) {
				Destroy(profile);
			}

			profileButtons.Clear ();
			Debug.Log ("Profile Buttons cleared");
		}

		currentProfileID = profileManager.GetCurrentProfile();
		highestProfileID = profileManager.GetHighestProfile();

		if (highestProfileID > -1) {
			string name;
			for (int i = 0; i <= highestProfileID; i++) {
				Debug.Log ("creating profile for ID: " + i);
				name = PlayerPrefs.GetString("Settings:" + i + ":Name", "Gæst");
				Debug.Log ("loaded name for id " + i + ": " + name);
				CreateProfileButton(name, i);
				if (i == currentProfileID) {
					newProfile.GetComponent<Image> ().sprite = currentProfileSprite;
					currentName = name;
				}
			}
		}

		profileCreatorButton = (GameObject)Instantiate (profileCreatorTemplate, profileCreatorTemplate.transform);
		profileCreatorButton.transform.SetParent (parentTransform);
		profileCreatorButton.SetActive (true);
		profileButtons.Add (profileCreatorButton);

		// Tell SettingsScreen to load settings


	}


	//public void SetCurrentName() {
	//	currentName = setProfileNameInputField.text;
	//	SaveProfiles ();
	//}



}
