using UnityEngine;
using System.Collections;
using System;

public class GameManager : MonoBehaviour {

	public TextAsset[] allLevelsA;
	public TextAsset[] allLevelsB;

	private bool player;
	private int userID;
	private bool gameA;
	private int nextLevel;
	private int progressA;
	private int progressB;
	private int orderRow;
	private bool tutorialASeen = false;
	private bool tutorialBSeen = false;
	private float levelCompletionTime;

	// Use this for initialization
	void Start () {

		LoadPlayerPrefs ();

		DontDestroyOnLoad (this);
		Application.LoadLevel ("PlayerSelect");

		Screen.sleepTimeout = SleepTimeout.NeverSleep;
	}

	public void LoadPlayerPrefs () {

		if(PlayerPrefs.HasKey("userID")) {

			userID = PlayerPrefs.GetInt("userID");
		}
		else {

			userID = 0;
			PlayerPrefs.SetInt("userID", userID);
		}

		if(PlayerPrefs.HasKey("progressA")) {
			
			progressA = PlayerPrefs.GetInt("progressA");
		}
		else {

			progressA = 0;
			PlayerPrefs.SetInt("progressA", progressA);
		}
		
		if(PlayerPrefs.HasKey("progressB")) {

			progressB = PlayerPrefs.GetInt("progressB");
		}
		else {

			progressB = 0;
			PlayerPrefs.SetInt("progressB", progressB);
		}
		
		if(PlayerPrefs.HasKey("tutorialASeen")) {
			
			tutorialASeen = Convert.ToBoolean(PlayerPrefs.GetString("tutorialASeen"));
		}
		else {

			tutorialASeen = false;
			PlayerPrefs.SetString("tutorialASeen", tutorialASeen.ToString());
		}
		
		if(PlayerPrefs.HasKey("tutorialBSeen")) {

			tutorialBSeen = Convert.ToBoolean(PlayerPrefs.GetString("tutorialBSeen"));
		}
		else {
			
			tutorialBSeen = false;
			PlayerPrefs.SetString("tutorialBSeen", tutorialBSeen.ToString());
		}

		if(PlayerPrefs.HasKey("orderRow")) {
			
			orderRow = PlayerPrefs.GetInt("orderRow");
		}
		else {
			
			orderRow = 0;
			PlayerPrefs.SetInt("orderRow", orderRow);
		}
	}
	
	public void SetPlayer (bool inputPlayer) {

		player = inputPlayer;
	}
	public bool GetPlayer () {
		
		return player;
	}

	public void SetGameType (bool inputGameA) {
		
		gameA = inputGameA;
	}
	public bool GetGameType () {
		
		return gameA;
	}

	public void SetProgressA (int inputProgressA) {

		progressA = inputProgressA;
		PlayerPrefs.SetInt("progressA", progressA);
	}
	public int GetProgressA () {
		
		return progressA;
	}

	public void SetProgressB (int inputProgressB) {

		progressB = inputProgressB;
		PlayerPrefs.SetInt("progressB", progressB);
	}
	public int GetProgressB () {
		
		return progressB;
	}

	public void SetNextLevel (int inputLevel) {
		
		nextLevel = inputLevel;

		if(gameA && nextLevel >= allLevelsA.Length-1) {

			nextLevel = allLevelsA.Length-1;
		}
		else if(!gameA && nextLevel >= allLevelsB.Length-1) {
			
			nextLevel = allLevelsB.Length-1;
		}
	}
	public int GetNextLevel () {
		
		return nextLevel;
	}

	public void SetTutorialASeen (bool inputTutorial) {
		
		tutorialASeen = inputTutorial;
		PlayerPrefs.SetString("tutorialASeen", tutorialASeen.ToString());
	}
	public bool GetTutorialASeen () {
		
		return tutorialASeen;
	}

	public void SetTutorialBSeen (bool inputTutorial) {
		
		tutorialBSeen = inputTutorial;
		PlayerPrefs.SetString("tutorialBSeen", tutorialBSeen.ToString());
	}
	public bool GetTutorialBSeen () {
		
		return tutorialBSeen;
	}

	public int GetTotalLevelsA () {

		return allLevelsA.Length;
	}
	public int GetTotalLevelsB () {
		
		return allLevelsB.Length;
	}

	public TextAsset GetLevelData() {

		if(gameA) {

			return allLevelsA[nextLevel];
		}
		else {

			return allLevelsB[nextLevel];
		}
	}

	public void SetLevelCompletionTime (float inputTime) {

		levelCompletionTime = inputTime;
	}
	public float GetLevelCompletionTime() {

		return levelCompletionTime;
	}

	public int GetUserID () {

		return userID;
	}
	public void IncreaseUserID () {

		userID++;
		PlayerPrefs.SetInt ("userID", userID);
	}

	public int GetOrderRow () {
		
		return orderRow;
	}
	public void SetOrderRow (int inputRow) {
		
		orderRow = inputRow;
		PlayerPrefs.SetInt ("orderRow", orderRow);
	}
}
