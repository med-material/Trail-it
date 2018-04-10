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
	private GameManager gameManager;

	[SerializeField]
	private GameObject newProfileTemplate;

	private GameObject newProfile;
	private GameObject profileCreatorButton;

	[SerializeField]
	private GameObject mainMenuButton;

	[SerializeField]
	private GameObject finishDeletionButton;

	[SerializeField]
	private Transform parentTransform;

	private string currentProfileID = "Gæst";

	private List<GameObject> profileButtons;
	private List<string> profilesForRemoval;

	[SerializeField]
	private GameObject profileCreatorTemplate;

	[SerializeField]
	private Text removeProfileButtonText;
	private string removeProfileButtonTextTemplate;

	[SerializeField]
	private Text profileTitleText;
	private string profileTitleTextTemplate;

	[SerializeField]
	private Sprite currentProfileSprite;

	[SerializeField]
	private Sprite primaryButtonSprite;

	[SerializeField]
	private Sprite destroyProfileSprite;

	private bool removeModeActive = false;

	void Awake() {

		profileButtons = new List<GameObject>();
		profilesForRemoval = new List<string>();
		currentProfileID = profileManager.GetCurrentProfileID ();
		removeProfileButtonTextTemplate = removeProfileButtonText.text;
		profileTitleTextTemplate = profileTitleText.text;
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

	}

	public void ToggleRemoveMode()
	{
		if (!removeModeActive)
		{
			Destroy(profileCreatorButton);
			removeModeActive = true;
			foreach (var profileButton in profileButtons)
			{
				profileButton.GetComponent<Image>().sprite = destroyProfileSprite;
			}
			removeProfileButtonText.text = "Fortryd";
			profileTitleText.text = "Slet en Profil";
			mainMenuButton.SetActive(false);
			finishDeletionButton.SetActive(true);

		}
		else
		{
			removeModeActive = false;
			removeProfileButtonText.text = removeProfileButtonTextTemplate;
			profileTitleText.text = profileTitleTextTemplate;
			LoadProfileButtons();
			finishDeletionButton.SetActive(false);
			mainMenuButton.SetActive(true);
		}

	}

	public void ProfileButtonClick(ProfileButton button)
	{
		if (removeModeActive)
		{
			profilesForRemoval.Add(button.GetID());
			Destroy(button.gameObject);
			Debug.Log("button with ID " + button.GetID() + " Name: " + button.GetName() + " destroyed.");

		}
		else
		{
			profileManager.SetCurrentProfile(button.GetID());
			Debug.Log("ProfileID: " + button.GetID() + " Name: " + button.GetName() + " is now set as profile");
			gameManager.ResetGame();

		}
	}

	public void CompleteRemoval()
	{
		foreach (var id in profilesForRemoval)
		{
			profileManager.RemoveProfile(id);

			if (id == currentProfileID)
			{
				profileManager.SetCurrentProfile("Gæst");
			}

		}
		removeProfileButtonText.text = removeProfileButtonTextTemplate;
		profileTitleText.text = profileTitleTextTemplate;
		removeModeActive = false;
		finishDeletionButton.SetActive(false);
		mainMenuButton.SetActive(true);

		LoadProfileButtons();

	}

	//public void SetCurrentName() {
	//	currentName = setProfileNameInputField.text;
	//	SaveProfiles ();
	//}



}
