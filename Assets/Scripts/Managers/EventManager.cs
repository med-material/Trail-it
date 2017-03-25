using UnityEngine;
using System.Collections;

public enum Event{Nothing, PickPlayer, PickGuest, LoadSettings, LoadLevelSelectA, LoadLevelSelectB, PlayerSelect, MainMenu, Tutorial, LoadLevel, LoadLevelSelect, NextLevel, Reset, FirstLevel};

public class EventManager : MonoBehaviour {

	private GameManager gameManager;
	private SettingsManager settingsManager;
	private LoggingManager loggingManager;

	private int userID;

	// Use this for initialization
	void Start () {

		gameManager = this.GetComponent<GameManager>();
		settingsManager = this.GetComponent<SettingsManager>();
		loggingManager = this.GetComponent<LoggingManager>();
	}
	
	public void DoEvent(Event inputEvent) {

		switch(inputEvent) {
		case Event.PickPlayer:
			gameManager.SetPlayer(true);
			Application.LoadLevel("MainMenu");
			loggingManager.WriteLog ("Player Profile Selected");
			break;
		case Event.PickGuest:
			gameManager.SetPlayer(false);
			Application.LoadLevel("MainMenu");
			loggingManager.WriteLog ("Guest Profile Selected");
			break;
		case Event.LoadSettings:
			Application.LoadLevel("Settings");
			loggingManager.WriteLog ("Enter Settings Menu");
			break;
		case Event.LoadLevelSelectA:
			gameManager.SetGameType(true);

			if(gameManager.GetTutorialASeen()) {
				Application.LoadLevel("LevelSelect");
				loggingManager.WriteLog ("Game A Selected");
			}
			else {
				Application.LoadLevel("Tutorial");
				loggingManager.WriteLog ("First Tutorial A");
			}
			break;
		case Event.LoadLevelSelectB:
			gameManager.SetGameType(false);

			if(gameManager.GetTutorialBSeen()) {
				Application.LoadLevel("LevelSelect");
				loggingManager.WriteLog ("Game B Selected");
			}
			else {
				
				Application.LoadLevel("Tutorial");
				loggingManager.WriteLog ("First Tutorial B");
			}
			break;
		case Event.PlayerSelect:
			Application.LoadLevel("PlayerSelect");
			loggingManager.WriteLog ("To PlayerSelect");
				break;
		case Event.MainMenu:
			Application.LoadLevel("MainMenu");
			loggingManager.WriteLog ("To MainMenu");
			break;
		case Event.Tutorial:
			Application.LoadLevel("Tutorial");
			loggingManager.WriteLog ("To Tutorial");
			break;
		case Event.LoadLevel:
			Application.LoadLevel("Level");
			loggingManager.WriteLog ("Retry Level");
			break;
		case Event.LoadLevelSelect:
			Application.LoadLevel("LevelSelect");
			loggingManager.WriteLog ("To LevelSelect");
			break;
		case Event.NextLevel:
			gameManager.SetNextLevel (gameManager.GetNextLevel() + 1);
			Application.LoadLevel("Level");
			loggingManager.WriteLog ("To Next Level");
			break;
		case Event.Reset:
			userID = gameManager.GetUserID();
			PlayerPrefs.DeleteAll();
			PlayerPrefs.SetInt("userID", userID);
			gameManager.LoadPlayerPrefs();
			settingsManager.LoadPlayerPrefs();
			Application.LoadLevel("PlayerSelect");
			loggingManager.WriteLog ("Data Reset");
			loggingManager.NewLog();
			break;
		case Event.FirstLevel:
			gameManager.SetNextLevel(0);
			Application.LoadLevel("Level");
			loggingManager.WriteLog("To First Level");
			break;
		}
	}
}
