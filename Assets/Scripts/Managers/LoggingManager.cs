using UnityEngine;
using System.Collections;
using System.IO;

public class LoggingManager : MonoBehaviour {

	private GameManager gameManager;
	//private SettingsManager settingsManager;
	private GameLevel gameLevel;
	private AssistanceManager assistanceManager;
	private Tutorial tutorial;
	private SessionManager sessionManager;

	private StreamWriter writer;
	private string directory;
	private string fileName;
	private string sep = ";";
	private string currentLine;

	private int currentPlayerID;
	private string userID;
	private string playerOrGuest;
	private string date;
	private string time;

	private string scene; // "Level" if we are in a level
	private string eventLabel; // fx "Target Hit" or "Game Loaded"
	private string testType; // gameA or gameB
	private string level; // current level (this is determined from difficultyLevel and randomization)
	private string laneOn; // should arrows in the top and bottom indicate where the patient should look.
	private string laneType; // are the arrows going left or going right
	private string pulseOn; // should the buttons pulsate after a while in the game.
	private string voiceOn; // should a voice help in the game
	private string repeatVoice; // should voice be repeated - currently always off
	private string levelTime; // time spent in each level
	private string trainingTime; // accumulated level time set by therapist for training.
	private string difficultyLevel; // From 1 (easy) to 3 (hard) corresponding to how many circles are present in the level.
	private string laneActive;
	private string pulseActive;
	private string audioActive;
	private string audioShots;
	private string currentTarget;
	private string currentHit;
	private string lastValid;
	private string currentOutset;
	private string correctingError;
	private string errorsInRow;

	private string sessionTime; // at what point in time (secs) was this logged

	private Vector2 currentTargetPos;
	private Vector2 currentHitPos;
	private Vector2 lastValidPos;
	private Vector2 currentOutsetPos;

	private string currentTargetX;
	private string currentTargetY;
	private string currentHitX;
	private string currentHitY;
	private string lastValidX;
	private string lastValidY;
	private string currentOutsetX;
	private string currentOutsetY;

	// Use this for initialization
	void Start () {

		gameManager = this.GetComponent<GameManager> ();
		//settingsManager = this.GetComponent<SettingsManager> ();
		sessionManager = this.GetComponent<SessionManager> ();

		directory = Application.persistentDataPath + "/Data/";

		if(!Directory.Exists(directory)){
			Directory.CreateDirectory(directory);
		}

		LoadSettings ();
		NewLog ();
		WriteLog ("Game Loaded");
	}

	public void LoadSettings()
	{
		currentPlayerID = PlayerPrefs.GetInt("Settings:CurrentProfileID", -1);
		userID = currentPlayerID.ToString ();
		laneOn = (PlayerPrefs.GetInt("Settings:" + currentPlayerID + ":Landingsbane", 0) == 1).ToString();
		pulseOn = (PlayerPrefs.GetInt("Settings:" + currentPlayerID + ":Pulse", 0) == 1).ToString();
		voiceOn = (PlayerPrefs.GetInt("Settings:"+ currentPlayerID + ":Stemme", 0) == 1).ToString();
		trainingTime = (PlayerPrefs.GetInt("Settings:"+ currentPlayerID +":Time", 5)).ToString();
		difficultyLevel = (PlayerPrefs.GetInt("Settings:"+ currentPlayerID + ":DifficultyLevel", 1)).ToString();
		repeatVoice = (PlayerPrefs.GetInt("Settings:"+ currentPlayerID + ":GentagStemme", 0) == 1).ToString();
	}

	public void WriteLog(string inputEvent) {

		eventLabel = inputEvent;
		scene = GameManager._CurrentScene; // Was Application.loadedlevelname or something. 

		date = System.DateTime.Now.ToString("yyyy-MM-dd");
		time = System.DateTime.Now.ToString("HH:mm:ss:ffff");
		sessionTime = sessionManager.GetSessionSeconds ().ToString ();

		if(currentPlayerID > -1)//gameManager.GetPlayer())
			playerOrGuest = "Player";
		else
			playerOrGuest = "Guest";

		if(scene == "Level" || scene == "LevelComplete" || scene == "LevelSelect" ||  scene == "Tutorial") {

			if(gameManager.GetGameType())
				testType = "A";
			else
				testType = "B";
		}
		else {

			testType = "";
		}

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
			laneActive = assistanceManager.GetToolActive(Tool.lane).ToString();
			pulseActive = assistanceManager.GetToolActive(Tool.pulse).ToString();
			audioActive = assistanceManager.GetToolActive(Tool.audio).ToString();
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
						currentPlayerID.ToString() + sep
						+ playerOrGuest + sep
						+ date + sep
						+ time + sep
						+ sessionTime + sep
						+ scene + sep
						+ eventLabel + sep
						+ testType + sep
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
						+ currentOutset + sep
						+ correctingError + sep
						+ errorsInRow + sep
						+ currentHitX + sep
						+ currentHitY + sep
						+ currentTargetX + sep
						+ currentTargetY + sep
						+ lastValidX + sep
						+ lastValidY + sep
						+ currentOutsetX + sep
						+ currentOutsetY + sep
						+ difficultyLevel + sep
						+ trainingTime + sep;


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
}
