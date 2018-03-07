using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProfileManager : MonoBehaviour {


	[SerializeField]
	private MainMenuScreen mainMenuScreen;

	private int currentProfileID = -1;
	private int highestProfileID = -1; // highestProfileID is the total amount of profiles including deleted profiles
	private string currentName;
	private string currentEmail;


	public void Awake() {
		currentProfileID = PlayerPrefs.GetInt("Settings:CurrentProfileID", -1);
		highestProfileID = PlayerPrefs.GetInt("Settings:HighestProfileID", -1);

		if (currentProfileID == -1) {
			currentName = "Gæst";
			Debug.Log ("No profiles created, creating a guest profile with id " + currentProfileID);
		}

		Debug.Log ("currentProfileID is: " + currentProfileID);
		Debug.Log ("highest Profile ID is: " + highestProfileID);
	}

	public void AddNewProfile(string name, string email) {
		// create a new profile in the backend.
		highestProfileID += 1;
		currentProfileID = highestProfileID;
		currentName = name;
		currentEmail = email;
		SaveProfiles ();
	}

	public string GetCurrentName()
	{
		return currentName;
	}

	public string GetCurrentEmail()
	{
		return currentEmail;
	}

	public int GetCurrentProfile()
	{
		return currentProfileID;
	}

	public int GetHighestProfile()
	{
		return highestProfileID;
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

	public void SaveProfiles()
	{
		PlayerPrefs.SetInt ("Settings:CurrentProfileID", currentProfileID);
		PlayerPrefs.SetInt ("Settings:HighestProfileID", highestProfileID);
		PlayerPrefs.SetString ("Settings:" + currentProfileID + ":Name", currentName);
		PlayerPrefs.SetString ("Settings:" + currentProfileID + ":Email", currentEmail);
		PlayerPrefs.SetString ("Settings:Name", currentName);
		PlayerPrefs.SetString ("Settings:Email", currentEmail);
		Debug.Log ("saving " + currentName + " in playerprefs under: Settings:" + currentProfileID + ":Name");
	}
}
