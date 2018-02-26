using UnityEngine;
using System.Collections;
using System;

public enum Settings {Lane, Voice, Pulse, Repeat, LaneType};

public class SettingsManager : MonoBehaviour {

	private LoggingManager loggingManager;

	private string playerName;

	private bool pulseOn = false;
	private bool audioOn = false;
	private bool landinglaneOn = false;
	private bool repeatAudio = false;
	private bool laneType2 = false;

	// Use this for initialization
	void Start () {

		loggingManager = this.GetComponent<LoggingManager> ();
		LoadPlayerPrefs ();
	}

	public void LoadPlayerPrefs () {

		if(PlayerPrefs.HasKey("pulseOn")) {
			
			pulseOn = Convert.ToBoolean(PlayerPrefs.GetString("pulseOn"));
		}
		else {

			pulseOn = false;
			PlayerPrefs.SetString("pulseOn", pulseOn.ToString());
		}
		
		if(PlayerPrefs.HasKey("audioOn")) {
			
			audioOn = Convert.ToBoolean(PlayerPrefs.GetString("audioOn"));
		}
		else {

			audioOn = false;
			PlayerPrefs.SetString("audioOn", audioOn.ToString());
		}
		
		if(PlayerPrefs.HasKey("landinglaneOn")) {
			
			landinglaneOn = Convert.ToBoolean(PlayerPrefs.GetString("landinglaneOn"));
		}
		else {

			landinglaneOn = false;
			PlayerPrefs.SetString("landinglaneOn", landinglaneOn.ToString());
		}

		if(PlayerPrefs.HasKey("laneType2")) {
			
			laneType2 = Convert.ToBoolean(PlayerPrefs.GetString("laneType2"));
		}
		else {
			
			laneType2 = false;
			PlayerPrefs.SetString("laneType2", laneType2.ToString());
		}

		if(PlayerPrefs.HasKey("repeatAudio")) {
			
			repeatAudio = Convert.ToBoolean(PlayerPrefs.GetString("repeatAudio"));
		}
		else {
			
			repeatAudio = false;
			PlayerPrefs.SetString("repeatAudio", repeatAudio.ToString());
		}
		
		if(PlayerPrefs.HasKey("playerName")) {
			
			playerName = PlayerPrefs.GetString("playerName");
		}
		else {

			playerName = "Patient";
			PlayerPrefs.SetString("playerName", playerName);
		}
	}
	
	public bool GetSetting (Settings setting) {
		
		switch(setting) {
		case Settings.Pulse:
			return pulseOn;
		case Settings.Lane:
			return landinglaneOn;
		case Settings.Voice:
			return audioOn;
		case Settings.LaneType:
			return laneType2;
		case Settings.Repeat:
			return repeatAudio;
		default:
			return false;
		}
	}

	public void SetSetting (Settings setting, bool settingValue) {

		switch(setting) {
		case Settings.Pulse:
			pulseOn = settingValue;
			PlayerPrefs.SetString("pulseOn", pulseOn.ToString());
			loggingManager.WriteLog("Pulse Set");
			break;
		case Settings.Lane:
			landinglaneOn = settingValue;
			PlayerPrefs.SetString("landinglaneOn", landinglaneOn.ToString());
			loggingManager.WriteLog("Lane Set");
			break;
		case Settings.Voice:
			audioOn = settingValue;
			PlayerPrefs.SetString("audioOn", audioOn.ToString());
			loggingManager.WriteLog("Audio Set");
			break;
		case Settings.Repeat:
			repeatAudio = settingValue;
			PlayerPrefs.SetString("repeatAudio", repeatAudio.ToString());
			loggingManager.WriteLog("Audio Repeat Set");
			break;
		case Settings.LaneType:
			laneType2 = settingValue;
			PlayerPrefs.SetString("laneType2", laneType2.ToString());
			loggingManager.WriteLog("Lane Type Set");
			break;
		}
	}

	public void SetName (string inputName) {

		playerName = inputName;
		PlayerPrefs.SetString("playerName", playerName);
	}
	public string GetName () {
		
		return playerName;
	}
}
