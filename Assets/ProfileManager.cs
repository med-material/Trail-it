using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class ProfileManager : MonoBehaviour {


	[SerializeField]
	private MainMenuScreen mainMenuScreen;

	private string currentProfileID = "Gæst";
	private string currentName;
	private string currentEmail;
	private bool shouldUpload;
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

	public void AddNewProfile(string name, string email, bool uploadPolicy) {
		string newProfileID = Utils.Md5Sum(email);
		currentProfileID = newProfileID;
		currentName = name;
		currentEmail = email;
		shouldUpload = uploadPolicy;
		profiles.Add (newProfileID);
		Debug.Log ("Adding " + newProfileID + "to profiles list with shouldUpload " + uploadPolicy);
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

	public bool GetUploadPolicy()
	{
		return shouldUpload;
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
		shouldUpload = (PlayerPrefs.GetInt("Settings:" + newProfileID + ":UploadData", 0) == 1);
		Debug.Log ("current profile set as id " + currentProfileID + " with name " + currentName + " and shouldUpload " + shouldUpload);

		//mainMenuScreen.setWelcomeText (currentName);
		// Call SettingsScreen.UpdateSettings(profileID); or just make it read the CurrentProfileID.
		SaveProfiles ();
		SceneManager.LoadSceneAsync ("TMT_P10");
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
		PlayerPrefs.SetInt("Settings:" + currentProfileID + ":UploadData", int.Parse((Utils.BoolToNumberString(shouldUpload))));
		PlayerPrefs.SetString ("Settings:Name", currentName);
		PlayerPrefs.SetString ("Settings:Email", currentEmail);
		PlayerPrefs.SetInt ("Settings:UploadData", int.Parse((Utils.BoolToNumberString(shouldUpload))));
	}
}
