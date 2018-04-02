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

	private string currentProfileID = "Gæst";

	private List<GameObject> profileButtons;

	[SerializeField]
	private GameObject profileCreatorTemplate;

	[SerializeField]
	private Sprite currentProfileSprite;

	void Awake() {

		profileButtons = new List<GameObject>();
		currentProfileID = profileManager.GetCurrentProfileID ();
	}

	private void CreateProfileButton(string name, string id) {
		newProfile = (GameObject)Instantiate (newProfileTemplate, newProfileTemplate.transform);
		newProfile.GetComponent<Transform> ().SetParent (parentTransform);
		newProfile.GetComponent<ProfileButton> ().SetID (id);
		newProfile.GetComponent<ProfileButton> ().SetName (name);
		newProfile.SetActive (true);
		profileButtons.Add (newProfile);
	}

	public void LoadProfileButtons()
	{
		if (profileButtons != null && profileButtons.Count > 0) {
			foreach (var profileButton in profileButtons) {
				Destroy(profileButton);
			}

			profileButtons.Clear ();
			Debug.Log ("Profile Buttons cleared");
		}

		currentProfileID = profileManager.GetCurrentProfileID();
		List<string> profileIDs = profileManager.GetProfileList();
		string name;

		foreach (var profileID in profileIDs) {
			Debug.Log ("creating profile for ID: " + profileID);
			name = PlayerPrefs.GetString("Settings:" + profileID + ":Name", "Gæst");
			Debug.Log ("loaded name for id " + profileID + ": " + name);
			CreateProfileButton(name, profileID);

			if (profileID == currentProfileID) {
				newProfile.GetComponent<Image> ().sprite = currentProfileSprite;
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
