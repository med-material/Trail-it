using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProfileManager : MonoBehaviour {


	[SerializeField]
	private MainMenuScreen mainMenuScreen;

	private string currentProfileID = "Gæst";
	private string currentName;
	private string currentEmail;
	private List<string> profiles = new List<string> ();
	private string sep = ";";


	public void Awake() {
		string profileString = PlayerPrefs.GetString ("Settings:ProfileIDs", "Gæst");
		if (profileString.Contains (sep)) {
			string[] profilesArray = profileString.Split (char.Parse (sep));
			for (int i = 0; i < profilesArray.Length; i++) {
				profiles.Add (profilesArray [i]);
			}
		} else {
			profiles.Add (profileString);
		}
		Debug.Log("Profiles loaded: " + (profiles.Count).ToString());

		currentProfileID = PlayerPrefs.GetString ("Settings:CurrentProfileID", "Gæst");
		Debug.Log ("Current Profile ID Loaded: " + currentProfileID);

	}

	public void AddNewProfile(string name, string email) {
		string newProfileID = Utils.Md5Sum(email);
		currentProfileID = newProfileID;
		currentName = name;
		currentEmail = email;
		profiles.Add (newProfileID);
		Debug.Log ("Adding " + newProfileID + "to profiles list.");
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

	public string GetCurrentProfileID()
	{
		return currentProfileID;
	}

	public int GetProfileAmount()
	{
		int profileAmount = profiles.Count;
		return profileAmount;
	}

	public List<string> GetProfileList()
	{
		return profiles;
	}

	public void SetCurrentProfile(string newProfileID)
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
		Debug.Log ("Saving Profiles..");
		string[] profileArray = profiles.ToArray ();
		string profileString = string.Join (sep, profileArray);
		Debug.Log (profileString);
		PlayerPrefs.SetString ("Settings:ProfileIDs", profileString);
		PlayerPrefs.SetString ("Settings:CurrentProfileID", currentProfileID);
		PlayerPrefs.SetString ("Settings:" + currentProfileID + ":Name", currentName);
		PlayerPrefs.SetString ("Settings:" + currentProfileID + ":Email", currentEmail);
		PlayerPrefs.SetString ("Settings:Name", currentName);
		PlayerPrefs.SetString ("Settings:Email", currentEmail);
	}
}
