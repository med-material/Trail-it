using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProfileManager : MonoBehaviour {


	[SerializeField]
	private MainMenuScreen mainMenuScreen;

	[SerializeField]
	private GameObject mainMenuCanvas;

    [SerializeField]
    private DataManager dataManager;

	private string currentProfileID = "Gæst";
	private bool shouldUpload = false;
	private bool shouldProtectSettings = false;
	private List<string> profiles = new List<string>();
	private string sep = ";";

	// we need to distinguish whether we are setting profiles
	// as a result of the initial Awake() or as a result of
	// NewProfileScreen or firstTimeExperience.
	private static bool didInit = false;

	private string _currentVersion;
	private string CurrentVersion
	{
		get { return _currentVersion == "" ? Application.version : _currentVersion; }
		set { _currentVersion = value; }
	}

	// User settable information.
	private string _currentName = "Gæst";
	private string CurrentName
	{
		get { return _currentName == "" ? "Gæst" : _currentName; }
		set { _currentName = value; }
	}

	private string _currentEmail = "No Email";
	private string CurrentEmail
	{
		get { return _currentEmail == "" ? "No Email" : _currentEmail; }
		set { _currentEmail = value; }
	}

	private string _currentPlayContext = "Unknown";
	private string CurrentPlayContext
	{
		get {return _currentPlayContext == "" ? "Unknown" : _currentPlayContext; }
		set {_currentPlayContext = value; }
	}

	private string _currentAgeGroup = "Unknown";
	private string CurrentAgeGroup
	{
		get { return _currentAgeGroup == "" ? "Unknown" : _currentAgeGroup; }
		set { _currentAgeGroup = value; }
	}

	private string _currentTrainingReason = "Unknown";
	private string CurrentTrainingReason
	{
		get { return _currentTrainingReason == "" ? "Unknown" : _currentTrainingReason; }
		set { _currentTrainingReason = value; }
	}

	public void Awake() {
		string profileString = PlayerPrefs.GetString ("Settings:ProfileIDs", "-1");
		currentProfileID = PlayerPrefs.GetString("Settings:CurrentProfileID", "Gæst");
		CurrentVersion = PlayerPrefs.GetString("Settings:" + currentProfileID + ":Version", "2017.04.04");

		if (profileString == "-1")
		{

			// if our profileString somehow is corrupted, at least we can insert the currentProfileID.
			// (falls back to Gæst).
			profileString = currentProfileID;

			// Since this is a newly created Gæst profile, it should never
			// be necessary to perform Migration, so bump the version number.
			CurrentVersion = Application.version;
			SaveProfiles();
		}

		if (profileString.Contains(sep))
		{
			string[] profilesArray = profileString.Split(char.Parse(sep));
			for (int i = 0; i < profilesArray.Length; i++)
			{
				profiles.Add(profilesArray[i]);
			}
		}
		else
		{
			profiles.Add(profileString);
		}

		// It is important that we call SetCurrentProfile after populating the profileString
		// Otherwise we accidentically overwrite all our profiles with an empty string.
		// It is also important that it is called before MigrateProfile(), otherwise we
		// overwrite our currentProfile's variables with fallback names.
		SetCurrentProfile(currentProfileID);

		didInit = true;

	}

	public void AddNewProfile(string name = "Gæst", string email = "No Email", bool uploadPolicy = false,
                              bool protectSettings = false, string playContext = "Unknown", string ageGroup = "Unknown",
                              string trainingReason = "Unknown", bool oldProfile = false) {
		CurrentName = name.Replace(",", "").Replace(";", "");
		CurrentEmail = email.Replace(",", "").Replace(";", "");
		CurrentPlayContext = playContext;
		CurrentAgeGroup = ageGroup;
		CurrentTrainingReason = trainingReason;

		string newProfileID = Utils.Md5Sum(System.DateTime.Now.ToString() + CurrentName + CurrentEmail);
		CurrentVersion = Application.version;

		currentProfileID = newProfileID;
		shouldUpload = uploadPolicy;
		shouldProtectSettings = protectSettings;
		profiles.Add (newProfileID);
		Debug.Log ("Adding " + newProfileID + "to profiles list with shouldUpload " + uploadPolicy + " and version " + CurrentVersion);
		SaveProfiles ();
	}

    public void SetCurrentProfile(string newProfileID)
    {
        dataManager.SaveData();
        currentProfileID = newProfileID;
        CurrentName = PlayerPrefs.GetString("Settings:" + newProfileID + ":Name", "Gæst");
        CurrentEmail = PlayerPrefs.GetString("Settings:" + newProfileID + ":Email", "No Email");
        CurrentVersion = PlayerPrefs.GetString("Settings:" + newProfileID + ":Version", "2017.04.04");
        CurrentPlayContext = PlayerPrefs.GetString("Settings:" + newProfileID + ":PlayContext", "Unknown");
        CurrentAgeGroup = PlayerPrefs.GetString("Settings:" + newProfileID + ":AgeGroup", "Unknown");
        CurrentTrainingReason = PlayerPrefs.GetString("Settings:" + newProfileID + ":TrainingReason", "Unknown");
        shouldUpload = (PlayerPrefs.GetInt("Settings:" + newProfileID + ":UploadData", 0) == 1);
        shouldProtectSettings = (PlayerPrefs.GetInt("Settings:" + newProfileID + ":ProtectSettings", 0) == 1);

        dataManager.LoadData();
        Debug.Log("profileID: " + currentProfileID);
        Debug.Log("Current Profile: " + CurrentName + ", version " + CurrentVersion + ", playContext " + CurrentPlayContext + ", ageGroup " + CurrentAgeGroup
                  + ", trainingReason " + CurrentTrainingReason + "and uploadPolicy " + shouldUpload);
        SaveProfiles();
    }

    public void RemoveProfile(string idToRemove)
    {
        List<string> newProfileList = new List<string>();
        foreach (var id in profiles) {

            if (id == idToRemove) {
                Debug.Log("id " + id + "found and removed");
            }
            if (id != idToRemove) {
                newProfileList.Add(id);
            }
        }
        profiles = newProfileList;
    }

    public void SaveProfiles()
    {
        string[] profileArray = profiles.ToArray();
        string profileString = string.Join(sep, profileArray);
        PlayerPrefs.SetString("Settings:ProfileIDs", profileString);
        PlayerPrefs.SetString("Settings:CurrentProfileID", currentProfileID);
        PlayerPrefs.SetString("Settings:" + currentProfileID + ":Name", CurrentName);
        PlayerPrefs.SetString("Settings:" + currentProfileID + ":Email", CurrentEmail);
        PlayerPrefs.SetString("Settings:" + currentProfileID + ":Version", CurrentVersion);
        PlayerPrefs.SetString("Settings:" + currentProfileID + ":PlayContext", CurrentPlayContext);
        PlayerPrefs.SetString("Settings:" + currentProfileID + ":AgeGroup", CurrentAgeGroup);
        PlayerPrefs.SetString("Settings:" + currentProfileID + ":TrainingReason", CurrentTrainingReason);
        PlayerPrefs.SetInt("Settings:" + currentProfileID + ":UploadData", int.Parse((Utils.BoolToNumberString(shouldUpload))));
        PlayerPrefs.SetInt("Settings:" + currentProfileID + ":ProtectSettings", int.Parse((Utils.BoolToNumberString(shouldProtectSettings))));
        PlayerPrefs.SetString("Settings:Name", CurrentName);
        PlayerPrefs.SetString("Settings:Email", CurrentEmail);
        PlayerPrefs.SetInt("Settings:UploadData", int.Parse((Utils.BoolToNumberString(shouldUpload))));
        PlayerPrefs.SetInt("Settings:ProtectSettings", int.Parse((Utils.BoolToNumberString(shouldProtectSettings))));

        Debug.Log("Saving Profile: " + CurrentName + " with playContext " + CurrentPlayContext + ", ageGroup " + CurrentAgeGroup + " and trainingReason " + CurrentTrainingReason);
    }

	public string GetCurrentName()
	{
		return CurrentName;
	}

	public string GetCurrentEmail()
	{
		return CurrentEmail;
	}

	public string GetCurrentVersion()
	{
		return CurrentVersion;
	}

    public string GetCurrentPlayContext()
    {
        return CurrentPlayContext;
    }

    public string GetCurrentTrainingReason()
    {
        return CurrentTrainingReason;
    }

    public string GetCurrentAgeGroup()
    {
        return CurrentAgeGroup;
    }

	public bool GetUploadPolicy()
	{
        return shouldUpload;
	}

	public bool GetProtectSettings()
	{
		return shouldProtectSettings;
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

	public void SetEmail(string email)
	{
        CurrentEmail = email.Replace(",", "").Replace(";", "");;
		SaveProfiles();
	}

	public void SetUploadPolicy(bool policy)
	{
		shouldUpload = policy;
		SaveProfiles();
	}

	public void SetPlayContext(string playContext)
	{
		CurrentPlayContext = playContext;
		SaveProfiles();
	}

	public void SetAgeGroup(string ageGroup)
	{
		CurrentAgeGroup = ageGroup;
		SaveProfiles();
	}

	public void SetTrainingReason(string trainingReason)
	{
		CurrentTrainingReason = trainingReason;
		SaveProfiles();
	}

	public List<string> GetProfileList()
	{
		return profiles;
	}
}
