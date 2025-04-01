using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Globalization;

public class ProfileManager : MonoBehaviour {


	[SerializeField]
	private MainMenuScreen mainMenuScreen;

	[SerializeField]
	private GameObject mainMenuCanvas;

    [SerializeField]
    private DataManager dataManager;

    [SerializeField]
    private ProgressionManager progressManager;

	[SerializeField]
	private GameObject questionnaireCanvas;

	[SerializeField]
	private GameObject firstTimeCanvas;

	[SerializeField]
	private GameObject updatedCanvas;

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
	private string _CurrentTrack = "-1";
	private string CurrentTrack
	{
		get { return _CurrentTrack == "" ? "-1" : _CurrentTrack; }
		set { _CurrentTrack = value; }
	}

	// User settable information.
	private string _CurrentLevel = "-1";
	private string CurrentLevel
	{
		get { return _CurrentLevel == "" ? "-1" : _CurrentLevel; }
		set { _CurrentLevel = value; }
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

	private string _currentBackground = "1";
	private string CurrentBackground
	{
		get { return _currentBackground == "" ? "1" : _currentBackground; }
		set { _currentBackground = value; }
	}

	private string _currentCompletion = "-1";
	private string CurrentCompletion
	{
		get { return _currentCompletion == "" ? "-1" : _currentCompletion; }
		set { _currentCompletion = value; }
	}

	public void Awake() {
		string profileString = PlayerPrefs.GetString ("Settings:ProfileIDs", "-1");
		currentProfileID = PlayerPrefs.GetString("Settings:CurrentProfileID", "Gæst");
		CurrentVersion = PlayerPrefs.GetString("Settings:" + currentProfileID + ":Version", "2017.04.04");

		if (profileString == "-1")
		{
			mainMenuCanvas.SetActive(false);
			firstTimeCanvas.SetActive(true);

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

		// Initialize ProgressionManager
		progressManager.Init();

		// It is important that we call SetCurrentProfile after populating the profileString
		// Otherwise we accidentically overwrite all our profiles with an empty string.
		// It is also important that it is called before MigrateProfile(), otherwise we
		// overwrite our currentProfile's variables with fallback names.
		SetCurrentProfile(currentProfileID);

		if (CurrentVersion != Application.version)
		{
			MigrateProfile();
		}

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
		CurrentTrack = "1";
		CurrentLevel = "1";

		progressManager.SetCurrentTrack(int.Parse(CurrentTrack));
		progressManager.SetCurrentLevel(int.Parse(CurrentLevel));
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
		CurrentTrack = PlayerPrefs.GetString("Settings:" + newProfileID + ":Track", "-1");
		CurrentLevel = PlayerPrefs.GetString("Settings:" + newProfileID + ":Level", "-1");
        CurrentTrainingReason = PlayerPrefs.GetString("Settings:" + newProfileID + ":TrainingReason", "Unknown");
        shouldUpload = (PlayerPrefs.GetInt("Settings:" + newProfileID + ":UploadData", 0) == 1);
        shouldProtectSettings = (PlayerPrefs.GetInt("Settings:" + newProfileID + ":ProtectSettings", 0) == 1);

		CurrentCompletion = PlayerPrefs.GetString ("Settings:" + currentProfileID + ":Completion", "-1");
		if (CurrentCompletion != "-1") {
			DateTime savedCompletion = DateTime.ParseExact(CurrentCompletion, "yyyy-MM-dd HH:mm", CultureInfo.InvariantCulture);
			DateTime timeNow = DateTime.Now;
			double totalHours = (timeNow - savedCompletion).TotalHours;
			Debug.Log("total hours since completion: " + totalHours.ToString());
			if (totalHours > 6) { // 6 hour release time.
				CurrentCompletion = "-1";
				CurrentTrack = progressManager.AdvanceTrack().ToString();
			}
		}

        dataManager.LoadData();
		Debug.Log("CurrentTrack: " + CurrentTrack);
		Debug.Log("CurrentLevel: " + CurrentLevel);
		if (CurrentTrack != "-1") {
			progressManager.SetCurrentTrack(int.Parse(CurrentTrack));
		}
		if (CurrentLevel != "-1") {
			progressManager.SetCurrentLevel(int.Parse(CurrentLevel));
		}
		SetLevel();

        Debug.Log("profileID: " + currentProfileID);
        Debug.Log("Current Profile: " + CurrentName + ", version " + CurrentVersion + ", playContext " + CurrentPlayContext + ", ageGroup " + CurrentAgeGroup
                  + ", trainingReason " + CurrentTrainingReason + "and uploadPolicy " + shouldUpload);
        SaveProfiles();
    }

	private void EvaluateCompletion() {
		CurrentCompletion = PlayerPrefs.GetString ("Settings:" + currentProfileID + ":Completion", "-1");
		if (CurrentCompletion != "-1") {
			DateTime savedCompletion = DateTime.ParseExact(CurrentCompletion, "yyyy-MM-dd HH:mm", CultureInfo.InvariantCulture);
			DateTime timeNow = DateTime.Now;
			double totalHours = (timeNow - savedCompletion).TotalHours;
			Debug.Log("total hours since completion: " + totalHours.ToString());
			if (totalHours > 6) { // 6 hour release time.
				CurrentCompletion = "-1";
				CurrentTrack = progressManager.AdvanceTrack().ToString();
			}
		}
	}

    private void MigrateProfile()
    {
        if (CurrentVersion == "2017.04.04") // checking both for now, bot the one with dots will be the real one in the future.
        {
            Debug.Log("Migration from 2017.04.04 starting");

            if (!didInit) {
                updatedCanvas.SetActive(true);
                mainMenuCanvas.SetActive(false);
            } else if (shouldUpload) {
                questionnaireCanvas.SetActive(true);
                mainMenuCanvas.SetActive(false);
            }
            CurrentVersion = Application.version;
        } else if (CurrentVersion == "2018.04.10" || CurrentVersion == "2018.04.20" || CurrentVersion == "2018.05.01") {
            if (!didInit) {
                updatedCanvas.SetActive(true);
                mainMenuCanvas.SetActive(false);
            }
            CurrentVersion = Application.version;
        }
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
		PlayerPrefs.SetString("Settings:" + currentProfileID + ":Track", CurrentTrack);
		PlayerPrefs.SetString("Settings:" + currentProfileID + ":Level", CurrentLevel);
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

	public string GetCurrentTrack()
	{
		return CurrentTrack;
	}

	public string GetCurrentLevel()
	{
		return CurrentLevel;
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

	public string GetCurrentCompletion()
	{
		return CurrentCompletion;
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

	public void SetTrack(string track)
	{
		CurrentTrack = track;
		SaveProfiles();
	}

	public void SetLevel()
	{
		// set player prefs based on current progression.
		LevelData levelData = progressManager.GetCurrentLevel();
		CurrentLevel = levelData.level.ToString();
		Debug.Log("CurrentLevel set to " + CurrentLevel);
		PlayerPrefs.SetInt("Settings:" + currentProfileID + ":Time", levelData.trainingMinutes); // 1
        PlayerPrefs.SetInt("Settings:" + currentProfileID + ":DifficultyLevel", levelData.difficulty);
		PlayerPrefs.SetString ("Settings:" + currentProfileID + ":GameType", levelData.gameType);
		SaveProfiles();
	}

	public void SetTrackCompletion()
	{
		//CurrentTrack = nextTrack;
		//PlayerPrefs.SetString("Settings:" + currentProfileID + ":Track", nextTrack);
		PlayerPrefs.SetString ("Settings:" + currentProfileID + ":Completion", DateTime.Now.ToString("yyyy-MM-dd HH:mm"));
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
