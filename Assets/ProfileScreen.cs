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
	private GameObject newProfileTemplate;
	[SerializeField]
	private GameObject profileCreatorTemplate;
	[SerializeField]
	private Transform parentTransform;

	[SerializeField]
	private MainMenuScreen mainMenuScreen;

	[SerializeField]
	private Sprite currentProfileSprite;

	[SerializeField]
	private SettingsScreen settingsScreen;

	[SerializeField]
	private InputField setProfileNameInputField;

	private GameObject newProfile;
	private GameObject profileCreatorButton;

	private List<GameObject> profileButtons;

	private string currentName;
	private int currentProfileID = -1;
	private int highestProfileID = -1; // highestProfileID is the total amount of profiles including deleted profiles

	// Use this for initialization

	void Awake() {

		profileButtons = new List<GameObject>();
	}

	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void AddNewProfile(string name) {
		// create a new profile in the backend.
		highestProfileID += 1;
		currentProfileID = highestProfileID;
		currentName = name;
		SaveProfiles ();
	}

	public void CreateProfileButton(string name, int id) {
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

	public void SetCurrentProfile(int newProfileID)
	{
		currentProfileID = newProfileID;
		currentName = PlayerPrefs.GetString("Settings:" + newProfileID + ":Name", "Gæst");
		Debug.Log ("current profile set as id " + currentProfileID + " with name " + currentName);
		mainMenuScreen.setWelcomeText (currentName);
		// Call SettingsScreen.UpdateSettings(profileID); or just make it read the CurrentProfileID.
		SaveProfiles ();
	}

	public int GetCurrentProfile()
	{
		return currentProfileID;
	}

	public void LoadProfiles()
	{
		if (profileButtons != null && profileButtons.Count > 0) {
			foreach (var profile in profileButtons) {
				Destroy(profile);
			}

			profileButtons.Clear ();
			Debug.Log ("Profile Buttons cleared");
		}

		currentProfileID = PlayerPrefs.GetInt("Settings:CurrentProfileID", -1);
		highestProfileID = PlayerPrefs.GetInt("Settings:HighestProfileID", -1);
		Debug.Log ("currentProfileID is: " + currentProfileID);
		Debug.Log ("highest Profile ID is: " + highestProfileID);

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

	public void SaveProfiles()
	{
		PlayerPrefs.SetInt ("Settings:CurrentProfileID", currentProfileID);
		PlayerPrefs.SetInt ("Settings:HighestProfileID", highestProfileID);
		PlayerPrefs.SetString ("Settings:" + currentProfileID + ":Name", currentName);
		PlayerPrefs.SetString ("Settings:Name", currentName);
		Debug.Log ("saving " + currentName + " in playerprefs under: Settings:" + currentProfileID + ":Name");
	}

}
