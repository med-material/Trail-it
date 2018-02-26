using UnityEngine;
using System.Collections;
using System.IO;

public class LoggingManager : MonoBehaviour {

	private GameManager gameManager;
	private SettingsManager settingsManager;
	private GameLevel gameLevel;
	private AssistanceManager assistanceManager;
	private Tutorial tutorial;
	private SessionManager sessionManager;

	private StreamWriter writer;
	private string directory;
	private string fileName;
	private string sep = ";";
	private string currentLine;

	private string userID;
	private string playerOrGuest;
	private string date;
	private string time;

	private string scene;
	private string eventLabel;
	private string testType;
	private string level;
	private string laneOn;
	private string laneType;
	private string pulseOn;
	private string audioOn;
	private string repeatAudio;
	private string gameTime;
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

	private string sessionTime;

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
		settingsManager = this.GetComponent<SettingsManager> ();
		sessionManager = this.GetComponent<SessionManager> ();

		directory = Application.persistentDataPath + "/Data/";

		if(!Directory.Exists(directory)){
			Directory.CreateDirectory(directory);
		}

		NewLog ();
		WriteLog ("Game Loaded");
	}
	
	public void WriteLog(string inputEvent) {

		eventLabel = inputEvent;
		scene = GameManager._CurrentScene; // Was Application.loadedlevelname or something. 

		userID = gameManager.GetUserID().ToString();
		date = System.DateTime.Now.ToString("yyyy-MM-dd");
		time = System.DateTime.Now.ToString("HH:mm:ss:ffff");
		sessionTime = sessionManager.GetSessionSeconds ().ToString ();

		if(gameManager.GetPlayer())
			playerOrGuest = "Player";
		else
			playerOrGuest = "Guest";

		laneOn = settingsManager.GetSetting(Settings.Lane).ToString();
		laneType = settingsManager.GetSetting (Settings.LaneType).ToString ();
		pulseOn = settingsManager.GetSetting(Settings.Pulse).ToString();
		audioOn = settingsManager.GetSetting(Settings.Voice).ToString();
		repeatAudio = settingsManager.GetSetting (Settings.Repeat).ToString ();

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

			gameTime = gameLevel.GetGameTime().ToString();
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

			gameTime = tutorial.GetGameTime().ToString();
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
			
			gameTime = "";
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
						userID + sep
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
						+ audioOn + sep
						+ repeatAudio + sep
						+ gameTime + sep
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
						+ currentOutsetY;


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
