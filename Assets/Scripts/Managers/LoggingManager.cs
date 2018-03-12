using UnityEngine;
using System.Collections;
using System.IO;
using System.Collections.Generic;

public class LoggingManager : MonoBehaviour {

	private GameManager gameManager;
	//private SettingsManager settingsManager;
	private GameLevel gameLevel;
	private AssistanceManager assistanceManager;
	private Tutorial tutorial;
	private SessionManager sessionManager;
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
	private string userID;					// The ID of the current player, converted to a string
	private string playerOrGuest;			// IGNORED Whether it's a player or a guest. Shouldn't be necessary if we just have currentProfileID showing this info to us.
	private string date;					// The date in the formt YYYY-MM-DD
	private string time;					// Timestamp in the format HH-MM-SS.MMMM
	private string email;

	private string scene; 					// has the text "Level" if we are in a level
	private string eventLabel; 				// fx "Target Hit" or "Game Loaded"
	private string gameType; 				// gameA or gameB
	private string level; 					// current level (this is determined from difficultyLevel and randomization)
	private string laneOn; 					// should arrows in the top and bottom indicate where the patient should look.
	private string laneType; 				// are the arrows going left or going right
	private string pulseOn; 				// should the buttons pulsate after a while in the game.
	private string voiceOn; 				// should a voice help in the game
	private string repeatVoice; 			// should voice be repeated - currently always off
	private string levelTime; 				// time spent in each level
	private string trainingTime; 			// accumulated level time set by therapist for training.
	private string difficultyLevel; 		// From 1 (easy) to 3 (hard) corresponding to how many circles are present in the level.
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
		//settingsManager = this.GetComponent<SettingsManager> ();
		sessionManager = this.GetComponent<SessionManager> ();

		directory = Application.persistentDataPath + "/Data/";

		if(!Directory.Exists(directory)){
			Directory.CreateDirectory(directory);
		}

		LoadSettings ();
		DetectDumpedLogs ();
		NewLog ();
		WriteLog ("Game Loaded");
	}

	public void LoadSettings()
	{
		currentProfileID = profileManager.GetCurrentProfileID ();
		email = PlayerPrefs.GetString ("Settings:" + currentProfileID + ":Email", "No Email");
		laneOn = Utils.BoolToNumberString(PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Landingsbane", 0) == 1);
		pulseOn = Utils.BoolToNumberString(PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Pulse", 0) == 1);
		voiceOn = Utils.BoolToNumberString(PlayerPrefs.GetInt("Settings:"+ currentProfileID + ":Stemme", 0) == 1);
		gameType = PlayerPrefs.GetString ("Settings:" + currentProfileID + ":GameType", "gameA");
		trainingTime = (PlayerPrefs.GetInt("Settings:"+ currentProfileID +":Time", 5)).ToString();
		difficultyLevel = (PlayerPrefs.GetInt("Settings:"+ currentProfileID + ":DifficultyLevel", 1)).ToString();
		repeatVoice = Utils.BoolToNumberString(PlayerPrefs.GetInt("Settings:"+ currentProfileID + ":GentagStemme", 0) == 1);
	}

	public void WriteLog(string inputEvent) {
		eventLabel = inputEvent;
		scene = GameManager._CurrentScene; // Was Application.loadedlevelname or something. 

		date = System.DateTime.Now.ToString("yyyy-MM-dd");
		time = System.DateTime.Now.ToString("HH:mm:ss.ffff");
		sessionTime = sessionManager.GetSessionSeconds ().ToString ();

		if(scene == "Level" || scene == "LevelComplete") {
			
			level = gameManager.GetNextLevel().ToString();
		}
		else if(scene == "Tutorial") {

			level = "Tutorial";
		}
		else {
			
			level = "";
		}

		if(scene == "Level") {

			if(gameLevel == null) {

				gameLevel = GameObject.Find("GameLevel").GetComponent<GameLevel>();
			}
			if(assistanceManager == null) {

				assistanceManager = GameObject.Find("GameLevel").GetComponent<AssistanceManager>();
			}

			levelTime = gameLevel.GetGameTime().ToString();
			laneActive = Utils.BoolToNumberString(assistanceManager.GetToolActive(Tool.lane));
			laneType = assistanceManager.GetLaneType ();
			pulseActive = Utils.BoolToNumberString(assistanceManager.GetToolActive(Tool.pulse));
			audioActive = Utils.BoolToNumberString(assistanceManager.GetToolActive(Tool.audio));
			audioShots = assistanceManager.GetAudioShots().ToString();
			currentTarget = gameLevel.GetCurrent().ToString();
			currentHit = gameLevel.GetHit().ToString();
			lastValid = gameLevel.GetLastValid().ToString();
			currentOutset = gameLevel.GetOutset().ToString();
			correctingError = gameLevel.GetCorrectingError().ToString();
			errorsInRow = gameLevel.GetErrorsInRow().ToString();

			currentTargetPos = gameLevel.GetTargetLocation(gameLevel.GetCurrent());
			currentHitPos = gameLevel.GetTargetLocation(gameLevel.GetHit());
			lastValidPos = gameLevel.GetTargetLocation(gameLevel.GetLastValid());
			currentOutsetPos = gameLevel.GetTargetLocation(gameLevel.GetOutset());

			currentTargetX = currentTargetPos.x.ToString();
			currentTargetY = currentTargetPos.y.ToString();
			currentHitX = currentHitPos.x.ToString();
			currentHitY = currentHitPos.y.ToString();
			lastValidX = lastValidPos.x.ToString();
			lastValidY = lastValidPos.y.ToString();
			currentOutsetX = currentOutsetPos.x.ToString();
			currentOutsetY = currentOutsetPos.y.ToString();
		}
		else if(scene == "Tutorial") {

			if(tutorial == null) {
				tutorial = GameObject.Find("Tutorial").GetComponent<Tutorial>();
			}

			levelTime = tutorial.GetGameTime().ToString();
			currentTarget = tutorial.GetCurrent().ToString();
			currentHit = tutorial.GetHit().ToString();
			lastValid = tutorial.GetLastValid().ToString();
			currentOutset = tutorial.GetOutset().ToString();
			correctingError = tutorial.GetCorrectingError().ToString();
			errorsInRow = tutorial.GetErrorsInRow().ToString();

			laneActive = "";
			pulseActive = "";
			audioActive = "";
			audioShots = "";

			currentTargetX = "";
			currentTargetY = "";
			currentHitX = "";
			currentHitY = "";
			lastValidX = "";
			lastValidY = "";
			currentOutsetX = "";
			currentOutsetY = "";
		}
		else {
			
			levelTime = "";
			laneActive = "";
			pulseActive = "";
			audioActive = "";
			audioShots = "";
			currentTarget = "";
			currentHit = "";
			lastValid = "";
			currentOutset = "";
			correctingError = "";
			errorsInRow = "";

			currentTargetX = "";
			currentTargetY = "";
			currentHitX = "";
			currentHitY = "";
			lastValidX = "";
			lastValidY = "";
			currentOutsetX = "";
			currentOutsetY = "";
		}

		currentLine = 
						currentProfileID + sep
						+ date + sep
						+ time + sep
						+ sessionTime + sep
						+ scene + sep
						+ eventLabel + sep
						+ gameType + sep
						+ level + sep
						+ laneOn + sep
						+ laneType + sep
						+ pulseOn + sep
						+ voiceOn + sep
						+ repeatVoice + sep
						+ levelTime + sep
						+ laneActive + sep
						+ pulseActive + sep
						+ audioActive + sep
						+ audioShots + sep
						+ currentHit + sep
						+ currentTarget + sep
						+ lastValid + sep
						+ errorsInRow + sep
						+ currentHitX + sep
						+ currentHitY + sep
						+ currentTargetX + sep
						+ currentTargetY + sep
						+ lastValidX + sep
						+ lastValidY + sep
						+ difficultyLevel + sep
						+ trainingTime + sep
						+ email + sep;
		
		logEntries.Add (currentLine);
		Debug.Log (currentLine);
		using (StreamWriter writer = File.AppendText(directory + fileName))
		{
			writer.WriteLine(currentLine);
		}
	}

	public void NewLog() {

		fileName = "User" + gameManager.GetUserID().ToString() + " - " + System.DateTime.Now.ToString() + ".txt";
		fileName = fileName.Replace ('/', '-');
		fileName = fileName.Replace (':', '-');
	}

	public void UploadLog() {
		bool shouldUpload = profileManager.GetUploadPolicy ();
		Debug.Log ("UploadPolicy: " + shouldUpload);
		if (!shouldUpload) {
			return;
		}
		Debug.Log ("Uploading logs");
		mySQL.UploadLog (logEntries);
	}

	public void ClearLogEntries() {
		logEntries.Clear ();
	}

	public void DumpCurrentLog() {
		for(int i = 0; i < logEntries.Count; i++) {
			Debug.Log ("Dumping log as: " + directory + "offlinelogs");
			using (StreamWriter writer = File.AppendText(directory + "offlinelogs"))
			{
				writer.WriteLine(logEntries[i]);
			}
		}
	}

	public void DetectDumpedLogs() {
		Debug.Log ("Detecting dumped logs for upload..");
		if (File.Exists (directory + "offlinelogs")) {
			Debug.Log ("Detected: " + directory + "offlinelogs");

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
