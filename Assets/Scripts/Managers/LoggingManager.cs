using UnityEngine;
using System.Collections;
using System.IO;
using System.Collections.Generic;

public class LoggingManager : MonoBehaviour {

	private GameManager gameManager;
	//private SettingsManager settingsManager;
	private GameLevel gameLevel;
	[SerializeField]
	private AssistanceManager assistanceManager;
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

	private string currentProfileID; 		// The ID of the current player
	private string date;					// The date in the formt YYYY-MM-DD
	private string time;					// Timestamp at the time WriteLog was called in the format HH-MM-SS.MMMM
	private string email;					// e-mail address of the player, if specified
	private string eventLabel;              // fx "Target Hit" or "Game Loaded"
	private string currentProgress;         // 1,2,3,4,.. 0 = tutorial
	private string currentLevel;			// What underlying level being loaded.
	private string gameType;                // "1-2-3-4" vs "1-A-2-B"
	private string difficultyLevel;         // From 1 (easy) to 3 (hard) corresponding to how many circles are present in the level.
	private string trainingTime;            // accumulated level time set by therapist for training.
	private string assistanceWasActive;    // whether assistance was active in that given level.
	private string usesLineDrawing;			// whether the player is using line drawing or just clicking. Determined based on 1 succesful line-drawn
	//private string gameWasPaused;			// whether game was paused during the level.
	// we dont use gameWasPaused because we are resetting the level when you pause the game anyway..
	private string levelHitsTotal;          // total amount of successful hits in the level, while we still have training time left.
	private string levelHitsLeft;           // amount of successful hits in the left side, while we still have training time left.
	private string levelHitsRight;          // amount of successful hits in the right side, while we still have training time left.
	private string levelErrorsTotal;        // amount of errornous hits in the level, while we still have training time left.
	private string levelErrorsLeft;         // amount of errornous hits in the left side, while we still have training time left.
	private string levelErrorsRight;        // amount of errornous hits in the right side, while we still have training time left.
	private string levelReactionTime;       // median reactionTime for the given level, while we still have training time left.
	private string levelReactionTimeLeft;   // median reactionTime for the left side, while we still have training time left.
	private string levelReactionTimeRight;  // median reactionTime for the right side, while we still have training time left.
	private string levelTimeTotal;          // time taken to complete the level, while we still have training time left, in seconds.
	private string timestampLevelStart;     // timestamp in HH-MM-SS.MMMM for when the level started. (disregards training time)
	private string timestampLevelEnd;       // timestamp in HH-MM-SS.MMMM for when the level finished. (disregards training time)
	private string sessionLength;     // current training time. (disregards training time)
	private string sessionTimeCurrent;     // current training time. (disregards training time)
	private string sessionTimeRemaining;   // remaining training time. 
	private string tutorialSeen;         	// whether tutorial was seen this training session or not.
	private string laneSetting;             // whether lanes are enabled or not.
	private string pulseSetting;            // whether blinking is enabled or not.
	private string voiceSetting;            // whether sound is enabled or not.
	private string repeatVoiceSetting;		// whether repeaing sound is enabled or not.

		// How should we handle settings? And if we consider comparing patients across with each other?
		// Could we simplify the settings somewhat to introduce less variables?
		// Anyway, that is another separate action for us to do.
		// Maybe we could simplify to "Assistance / No Assistance" rather than having very specific handling.
		// Ask Hendrik what's the argument for having several settings exposed.

		// How should we handle GamePause? GameResume?
		// A) We should log whether the game was paused during a level.
		// B) We should make a separate log entry for game Paused.

	private string scene; 					// has the text "Level" if we are in a level

	private string level; 					// current level (this is determined from difficultyLevel and randomization)
	private string laneOn; 					// should arrows in the top and bottom indicate where the patient should look.
	private string laneType; 				// are the arrows going left or going right
	private string pulseOn; 				// should the buttons pulsate after a while in the game.
	private string voiceOn; 				// should a voice help in the game
	private string repeatVoice; 			// should voice be repeated - currently always off
	private string levelTime; 				// time spent in each level


	private string laneActive; 				// is the lane Active in this moment
	private string pulseActive; 			// is the pulse Active in this moment
	private string audioActive; 			// is the audio active in this moment
	private string audioShots; 				// how many times has the audio been played 
	private string currentTarget; 			// returns the index of the current target. in GameA pressing 1-2-5 outputs "0,1,2". the target the user is supposed to hit.
	private string currentHit; 				// returns the circle which was currently hit. in GameA pressing 1-2-5 outputs "0,1,4". In GameB pressing "1-A-B" outputs "0,1,3"
	private string lastValid; 				// returns the last correctly pressed circle. Pressing "1,A,4" in GameB yields "0,1,1".
	private string currentOutset; 			// IGNORED same as lastValid
	private string correctingError; 		// IGNORED outputs False all the time
	private string errorsInRow; 			// if the patient has made more than one error, this is logged. "1" corresponds to 2 in a row. "2" corresponds to 3 in a row. etc.
	private string sessionTime; 			// at what point in time (secs) was this logged

	private Vector2 currentTargetPos;		
	private Vector2 currentHitPos;
	private Vector2 lastValidPos;
	private Vector2 currentOutsetPos;

	private string currentTargetX;			// X coordinates of the current target position
	private string currentTargetY;			// Y coordinates of the current target position
	private string currentHitX;				// X coordinates of the current hit position
	private string currentHitY;				// Y coordinates of the current hit position
	private string lastValidX;				// X coordinates of the last valid position
	private string lastValidY;				// Y coordinates of the last valid position
	private string currentOutsetX;			// ???
	private string currentOutsetY;			// ???





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
	public void WriteAggregateLog(string inputEvent) {
		currentProfileID = profileManager.GetCurrentProfileID();
		date = System.DateTime.Now.ToString("yyyy-MM-dd");
		time = System.DateTime.Now.ToString("HH:mm:ss.ffff");
		email = PlayerPrefs.GetString("Settings:" + currentProfileID + ":Email", "No Email");
		eventLabel = inputEvent;
		currentProgress = gameManager.GetCurrentProgress().ToString();
		currentLevel = gameManager.GetCurrentLevel().ToString();
		gameType = PlayerPrefs.GetString("Settings:" + currentProfileID + ":GameType", "gameA");
		difficultyLevel = (PlayerPrefs.GetInt("Settings:" + currentProfileID + ":DifficultyLevel", 1)).ToString();
		assistanceWasActive = Utils.BoolToNumberString(assistanceManager.GetAssistanceWasActive());
		usesLineDrawing = Utils.BoolToNumberString(gameManager.GetUsesLineDrawing());
		levelHitsTotal = gameManager.GetLevelHitsTotal().ToString();
		levelHitsLeft = gameManager.GetLevelHitsLeft().ToString();
		levelHitsRight = gameManager.GetLevelHitsRight().ToString();
		levelErrorsTotal = gameManager.GetLevelErrorsTotal().ToString();
		levelErrorsLeft = gameManager.GetLevelErrorsLeft().ToString();
		levelErrorsRight = gameManager.GetLevelErrorsRight().ToString();
		levelReactionTime = gameManager.GetLevelReactionTime().ToString();
		levelReactionTimeLeft = gameManager.GetLevelReactionTimeLeft().ToString();
		levelReactionTimeRight = gameManager.GetLevelReactionTimeRight().ToString();
		levelTimeTotal = gameManager.GetLevelCompletionTime().ToString();
		timestampLevelStart = gameManager.GetTimestampStartLevel();
		timestampLevelEnd = gameManager.GetTimestampEndLevel();
		sessionLength = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Time", 5).ToString();
		sessionTimeCurrent = gameManager.GetSessionTimeCurrent().ToString();
		sessionTimeRemaining = gameManager.GetSessionTimeRemaining().ToString();
		tutorialSeen = Utils.BoolToNumberString(gameManager.GetTutorialSeen());
		laneSetting = Utils.BoolToNumberString(PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Landingsbane", 0) == 1);
		pulseSetting = Utils.BoolToNumberString(PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Pulse", 0) == 1);
		voiceSetting = Utils.BoolToNumberString(PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Stemme", 0) == 1);
		repeatVoiceSetting = Utils.BoolToNumberString(PlayerPrefs.GetInt("Settings:" + currentProfileID + ":GentagStemme", 0) == 1);

		currentLine =
				currentProfileID + sep
				+ date + sep
				+ time + sep
				+ email + sep
				+ eventLabel + sep
				+ currentProgress + sep
				+ currentLevel + sep
				+ gameType + sep
				+ difficultyLevel + sep
				+ assistanceWasActive + sep
				+ usesLineDrawing + sep
				+ levelHitsTotal + sep
				+ levelHitsLeft + sep
				+ levelHitsRight + sep
				+ levelErrorsTotal + sep
				+ levelErrorsLeft + sep
				+ levelErrorsRight + sep
				+ levelReactionTime + sep
				+ levelReactionTimeLeft + sep
				+ levelReactionTimeRight + sep
				+ levelTimeTotal + sep
				+ timestampLevelStart + sep
				+ timestampLevelEnd + sep
				+ sessionLength + sep
				+ sessionTimeCurrent + sep
				+ sessionTimeRemaining + sep
				+ tutorialSeen + sep
				+ laneSetting + sep
			 	+ pulseSetting + sep
				+ voiceSetting + sep
				+ repeatVoiceSetting + sep;

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
