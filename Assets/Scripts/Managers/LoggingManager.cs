using UnityEngine;
using System.Collections;
using System.IO;
using System.Collections.Generic;

public class LoggingManager : MonoBehaviour {

	private GameManager gameManager;
	private GameLevel gameLevel;

    [SerializeField]
    private DataManager dataManager;

	private Tutorial tutorial;
	[SerializeField]
	private ConnectToMySQL mySQL;

	[SerializeField]
	private ProfileManager profileManager;

	private List<string> logEntries;

	private StreamWriter writer;
	private string directory;
	private string fileName;
	private string sep = ",";
	private string currentLine;

	private string currentProfileID;        // The ID of the current player
	private string version;                 // Version of Trail it being played
	private string deviceModel;				// The model of device which is being played on (ipads, iphones, android etc.)
	private string date;					// The date in the formt YYYY-MM-DD
	private string time;					// Timestamp at the time WriteLog was called in the format HH-MM-SS.MMMM
	private string email;                   // e-mail address of the player, if specified
	private string playContext;             // whether the player is playing at home or in a clinical context. "Rehab", "Home", "RehabHome".
	private string trainingReason;           // whether the player has diagnosed a type of neglect.
	private string ageGroup;				// Player age group: Below 13, 13-17, 18-24, 25-39, 40-59, 60-69, 70-79, Above 80
	private string eventLabel;              // fx "Target Hit" or "Game Loaded"
	private string currentProgress;         // 1,2,3,4,.. 0 = tutorial
	private string gameType;                // "1-2-3-4" vs "1-A-2-B"
    private int    difficultyLevel;         // From 1 (easy) to 3 (hard) corresponding to how many circles (not stored).
    private string circleAmount;            // how many circles are present in the level (3 levels supported: 12, 18, 30)
	private string trainingTime;            // accumulated level time set by therapist for training.
	private string assistanceWasActive;    // whether assistance was active in that given level.
	private string usedLineDrawing;			// whether the player is using line drawing or just clicking. Determined based on 1 succesful line-drawn
	private string levelHitsTotal;          // total amount of successful hits in the level, while we still have training time left.
    private string levelHitsLeft;           // amount of hits on the left side of screen.
    private string levelHitsRight;          // amount of hits on right side ofscreen.
	private string levelErrorsTotal;        // amount of errornous hits in the level, while we still have training time left.
	private string levelErrorsLeft;         // amount of errornous hits in the left side, while we still have training time left.
	private string levelErrorsRight;        // amount of errornous hits in the right side, while we still have training time left.
    private string levelReactionTime;       // median reactionTime for the given level, while we still have training time left.
    private string levelAvgDistance;           // the averaged distance the user has traversed between each hit.
    private string levelTimeTotal;          // time taken to complete the level, while we still have training time left, in seconds.
    private string centerOfHitX;            // X coordinate of the center of hit (center of cancellation) (all distances summed up and averaged)
    private string centerOfHitY;            // Y coordinate of the center of hit (center of cancellation) (all distances summed up and averaged)
    private string timestampLevelStart;     // timestamp in HH-MM-SS.MMMM for when the level started. (disregards training time)
    private string timestampLevelEnd;       // timestamp in HH-MM-SS.MMMM for when the level finished. (disregards training time)
    private string sessionLength;     // current training time. (disregards training time)
    private string sessionTimeCurrent;     // current training time. (disregards training time)
    private float[,] levelFieldReactionTimes;
    private string levelReactionTimeLeft;   // old way we averaged reaction times
    private string levelReactionTimeRight;  // old way we averaged reaction times
    private string levelReactionTime_0_0;   // level reaction time for field [0,0]
    private string levelReactionTime_1_0;   // level reaction time for field [1,0]
    private string levelReactionTime_2_0;   // level reaction time for field [2,0]
    private string levelReactionTime_0_1;   // level reaction time for field [0,1]
    private string levelReactionTime_1_1;   // level reaction time for field [1,1]
    private string levelReactionTime_2_1;   // level reaction time for field [2,1]
    private float[,] levelFieldDistances;
    private string levelDistance_0_0;       // level distance for field [0,0]
    private string levelDistance_1_0;       // level distance for field [1,0]
    private string levelDistance_2_0;       // level distance for field [2,0]
    private string levelDistance_0_1;       // level distance for field [0,1]
    private string levelDistance_1_1;       // level distance for field [1,1]
    private string levelDistance_2_1;       // level distance for field [2,1]
	private string tutorialSeen;         	// whether tutorial was seen this training session or not.
	private string laneSetting;             // whether lanes are enabled or not.
	private string pulseSetting;            // whether blinking is enabled or not.
	private string voiceSetting;            // whether sound is enabled or not.
	private string repeatVoiceSetting;      // whether repeaing sound is enabled or not.
	private string dataVisEnabled;			// whether we show data visualization at the end of the training session. currently always false

	// Use this for initialization
	void Start () {
		logEntries = new List<string>();
		gameManager = this.GetComponent<GameManager> ();

		directory = Application.persistentDataPath + "/Data/";

		if(!Directory.Exists(directory)){
			Directory.CreateDirectory(directory);
		}

		DetectDumpedLogs ();
		NewLog ();
	}

    // The Aggregate Log is the log we upload to our server
    public void WriteAggregateLog(string inputEvent)
    {
        var levelData = dataManager.GetLevelData();
        difficultyLevel = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":DifficultyLevel", 1);
        levelFieldReactionTimes = levelData.fieldReactionTimes;
        levelFieldDistances = levelData.fieldDistances;

        currentProfileID = profileManager.GetCurrentProfileID();
        version = profileManager.GetCurrentVersion().Replace(".", "-");
        deviceModel = SystemInfo.deviceModel;
        date = System.DateTime.Now.ToString("yyyy-MM-dd");
        time = System.DateTime.Now.ToString("HH:mm:ss.ffff");
        email = profileManager.GetCurrentEmail();
        playContext = profileManager.GetCurrentPlayContext();
        trainingReason = profileManager.GetCurrentTrainingReason();
        ageGroup = profileManager.GetCurrentAgeGroup();
        eventLabel = inputEvent;
        currentProgress = levelData.levelNumber.ToString();
        gameType = PlayerPrefs.GetString("Settings:" + currentProfileID + ":GameType", "gameA");
        circleAmount = Utils.TargetAmountFromDifficulty(difficultyLevel).ToString();
        assistanceWasActive = Utils.BoolToNumberString(levelData.assistanceWasActive);
        usedLineDrawing = Utils.BoolToNumberString(levelData.usedLineDrawing);
        levelHitsTotal = levelData.hitCount.ToString();
        levelHitsLeft = gameManager.GetLevelHitsLeft().ToString();
        levelHitsRight = gameManager.GetLevelHitsRight().ToString();
        levelErrorsTotal = levelData.errorCount.ToString();
        levelErrorsLeft = levelData.levelErrorsLeft.ToString();
        levelErrorsRight = levelData.levelErrorsRight.ToString();
        levelReactionTime = levelData.reactionTime.ToString();
        levelAvgDistance = levelData.distanceAverage.ToString();
        levelTimeTotal = levelData.completionTime.ToString();
        centerOfHitX = levelData.centerOfHit.x.ToString();
        centerOfHitY = levelData.centerOfHit.y.ToString();
        timestampLevelStart = levelData.timestampStart.ToString("HH:mm:ss.ffff");
        timestampLevelEnd = levelData.timestampEnd.ToString("HH:mm:ss.ffff");
        sessionLength = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Time", 2).ToString();
        sessionTimeCurrent = levelData.sessionTime.ToString();
        levelReactionTimeLeft = gameManager.GetLevelReactionTimeLeft().ToString();
        levelReactionTimeRight = gameManager.GetLevelReactionTimeRight().ToString();
        levelReactionTime_0_0 = levelFieldReactionTimes[0, 0].ToString();
        levelReactionTime_1_0 = levelFieldReactionTimes[1, 0].ToString();
        levelReactionTime_2_0 = levelFieldReactionTimes[2, 0].ToString();
        levelReactionTime_0_1 = levelFieldReactionTimes[0, 1].ToString();
        levelReactionTime_1_1 = levelFieldReactionTimes[1, 1].ToString();
        levelReactionTime_2_1 = levelFieldReactionTimes[2, 1].ToString();
        levelDistance_0_0 = levelFieldDistances[0, 0].ToString();
        levelDistance_1_0 = levelFieldDistances[1, 0].ToString();
        levelDistance_2_0 = levelFieldDistances[2, 0].ToString();
        levelDistance_0_1 = levelFieldDistances[0, 1].ToString();
        levelDistance_1_1 = levelFieldDistances[1, 1].ToString();
        levelDistance_2_1 = levelFieldDistances[2, 1].ToString();
		tutorialSeen = Utils.BoolToNumberString(PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Intro", 1) == 1);
		laneSetting = Utils.BoolToNumberString(PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Landingsbane", 0) == 1);
		pulseSetting = Utils.BoolToNumberString(PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Pulse", 0) == 1);
		voiceSetting = Utils.BoolToNumberString(PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Stemme", 0) == 1);
		repeatVoiceSetting = Utils.BoolToNumberString(PlayerPrefs.GetInt("Settings:" + currentProfileID + ":GentagStemme", 0) == 1);
		dataVisEnabled = Utils.BoolToNumberString(PlayerPrefs.GetInt("Settings:" + currentProfileID + ":DataVisEnabled", 0) == 1);

		currentLine =
                  date + sep
                + time + sep	
                + currentProfileID + sep
			    + version + sep
				+ deviceModel + sep
				+ email + sep
				+ playContext + sep
				+ trainingReason + sep
				+ ageGroup + sep
				+ eventLabel + sep
				+ currentProgress + sep
				+ gameType + sep
				+ circleAmount + sep
				+ assistanceWasActive + sep
				+ usedLineDrawing + sep
				+ levelHitsTotal + sep
                + levelHitsLeft + sep
                + levelHitsRight + sep
                + levelErrorsTotal + sep
				+ levelErrorsLeft + sep
				+ levelErrorsRight + sep
				+ levelReactionTime + sep
                + levelReactionTimeLeft + sep
                + levelReactionTimeRight + sep
                + levelAvgDistance + sep
                + levelTimeTotal + sep
                + centerOfHitX + sep
                + centerOfHitY + sep
                + timestampLevelStart + sep
                + timestampLevelEnd + sep
                + sessionLength + sep
                + sessionTimeCurrent + sep
                + levelReactionTime_0_0 + sep
                + levelReactionTime_1_0 + sep
                + levelReactionTime_2_0 + sep
                + levelReactionTime_0_1 + sep
                + levelReactionTime_1_1 + sep
                + levelReactionTime_2_1 + sep
                + levelDistance_0_0 + sep
                + levelDistance_1_0 + sep
                + levelDistance_2_0 + sep
                + levelDistance_0_1 + sep
                + levelDistance_1_1 + sep
                + levelDistance_2_1 + sep
				+ tutorialSeen + sep
				+ laneSetting + sep
			 	+ pulseSetting + sep
				+ voiceSetting + sep
				+ repeatVoiceSetting + sep
				+ dataVisEnabled + sep;

        string debugLine =
                  "date: " + date + sep
                + "time: " + time + sep
                + "currentProfileID :" + currentProfileID + sep
                + "version: " + version + sep
                + "deviceModel: "+ deviceModel + sep
                + "email: " + email + sep
                + "playContext: " + playContext + sep
                + "trainingReason: " + trainingReason + sep
                + "ageGroup: " + ageGroup + sep
                + "eventLabel: " + eventLabel + sep
                + "currentProgress: " + currentProgress + sep
                + "gameType: " + gameType + sep
                + "circleAmount: " + circleAmount + sep
                + "assistanceWasActive: " + assistanceWasActive + sep
                + "usesLineDrawing: " + usedLineDrawing + sep
                + "levelHitsTotal: " + levelHitsTotal + sep
                + "levelHitsLeft: " + levelHitsLeft + sep
                + "levelHitsRight: " + levelHitsRight + sep
                + "levelErrorsTotal: " + levelErrorsTotal + sep
                + "levelErrorsLeft: " + levelErrorsLeft + sep
                + "levelErrorsRight: " + levelErrorsRight + sep
                + "levelReactionTime: " + levelReactionTime + sep
                + "levelReactionTimeLeft: " + levelReactionTimeLeft + sep
                + "levelReactionTimeRight: " + levelReactionTimeRight + sep
                + "levelAvgDistance: " + levelAvgDistance + sep
                + "levelTimeTotal: " + levelTimeTotal + sep
                + "timestampLevelStart: " + timestampLevelStart + sep
                + "timestampLevelEnd: " + timestampLevelEnd + sep
                + "sessionLength: " + sessionLength + sep
                + "sessionTimeCurrent: " + sessionTimeCurrent + sep
                + "levelReactionTime_0_0: " + levelReactionTime_0_0 + sep
                + "levelReactionTime_1_0: " + levelReactionTime_1_0 + sep
                + "levelReactionTime_2_0: " + levelReactionTime_2_0 + sep
                + "levelReactionTime_0_1: " + levelReactionTime_0_1 + sep
                + "levelReactionTime_1_1: " + levelReactionTime_1_1 + sep
                + "levelReactionTime_2_1: " + levelReactionTime_2_1 + sep
                + "levelDistance_0_0: " + levelDistance_0_0 + sep
                + "levelDistance_1_0: " + levelDistance_1_0 + sep
                + "levelDistance_2_0: " + levelDistance_2_0 + sep
                + "levelDistance_0_1: " + levelDistance_0_1 + sep
                + "levelDistance_1_1: " + levelDistance_1_1 + sep
                + "levelDistance_2_1: " + levelDistance_2_1 + sep
                + "tutorialSeen: " + tutorialSeen + sep
                + "laneSetting: " + laneSetting + sep
                + "pulseSetting: " + pulseSetting + sep
                + "voiceSetting: " + voiceSetting + sep
                + "repeatVoiceSetting: " + repeatVoiceSetting + sep
                + "dataVisEnabled: " + dataVisEnabled + sep;

        Debug.Log(debugLine);
        logEntries.Add(currentLine);
		using (StreamWriter writer = File.AppendText(directory + fileName))
		{
			writer.WriteLine(currentLine);
		}

	}

	public void NewLog() {

		fileName = "User" + profileManager.GetCurrentProfileID() + " - " + System.DateTime.Now.ToString() + ".txt";
		fileName = fileName.Replace ('/', '-');
		fileName = fileName.Replace (':', '-');
	}

	public void UploadLog() {
		bool shouldUpload = profileManager.GetUploadPolicy ();
		if (shouldUpload && logEntries.Count > 0) {
			mySQL.UploadLog(logEntries);
		}
	}

	public void ClearLogEntries() {
		logEntries.Clear ();
	}

	public bool hasLogs()
	{
		return (logEntries.Count > 0);
	}

	public void DumpCurrentLog() {
		for(int i = 0; i < logEntries.Count; i++) {
			using (StreamWriter writer = File.AppendText(directory + "offlinelogs"))
			{
				writer.WriteLine(logEntries[i]);
			}
		}
	}

	public void DetectDumpedLogs() {
		if (File.Exists (directory + "offlinelogs")) {

			string line;
			List<string> offlineLogs = new List<string>();
			using (StreamReader reader = new StreamReader(directory + "offlinelogs")) {
				while((line = reader.ReadLine()) != null)  
				{  
					offlineLogs.Add (line);
				}
			}
			File.Delete (directory + "offlinelogs");
			mySQL.UploadLog (offlineLogs);
		}

	}
}
