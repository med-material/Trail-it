using UnityEngine;
using System.Collections;
using System;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour {

	public TextAsset[] allLevelsA;      
	public TextAsset[] allLevelsB;

	private bool player;
	//private int userID;
	private bool gameA;
	private int nextLevel;
	//private int progressA;
	//private int progressB;
	//private int orderRow;
	//private bool tutorialASeen = false;
	//private bool tutorialBSeen = false;
	private float levelCompletionTime;

	private PlayerData playerDat; 

	private InputHandler input; 

	// Use this for initialization
	void Start () {

		input = gameObject.AddComponent<InputHandler> (); 

		LoadPlayerPrefs ();

		DontDestroyOnLoad (this);
        //TODO: update this to the new scenemanager.
		Application.LoadLevel ("PlayerSelect");

		Screen.sleepTimeout = SleepTimeout.NeverSleep;
	}

	public void LoadPlayerPrefs () {

		if (PlayerPrefs.HasKey("userId"))
		{
			playerDat.userID = PlayerPrefs.GetInt("userID");  
			playerDat.progressA = PlayerPrefs.GetInt("progressA");
			playerDat.progressB = PlayerPrefs.GetInt("progressB");
			playerDat.tutorialASeen = Convert.ToBoolean(PlayerPrefs.GetString("tutorialASeen"));
			playerDat.tutorialBSeen = Convert.ToBoolean(PlayerPrefs.GetString("tutorialBSeen"));
			playerDat.orderRow = PlayerPrefs.GetInt("orderRow");
		} 
		else 
		{
			playerDat.userID = 0;
			PlayerPrefs.SetInt("userID", playerDat.userID);

			playerDat.progressA = 0;
			PlayerPrefs.SetInt("progressA", playerDat.progressA);

			playerDat.progressB = 0;
			PlayerPrefs.SetInt("progressB", playerDat.progressB);

			playerDat.tutorialASeen = false;
			PlayerPrefs.SetString("tutorialASeen", playerDat.tutorialASeen.ToString());

			playerDat.tutorialBSeen = false;
			PlayerPrefs.SetString("tutorialBSeen", playerDat.tutorialBSeen.ToString());

			playerDat.orderRow = 0;
			PlayerPrefs.SetInt("orderRow", playerDat.orderRow);
		}

		/*
		if(PlayerPrefs.HasKey("userID")) 
		{
			playerDat.userID = PlayerPrefs.GetInt("userID");  
		}
		else 
		{

			playerDat.userID = 0;
			PlayerPrefs.SetInt("userID", userID);
		}

		if(PlayerPrefs.HasKey("progressA")) 
		{
			playerDat.progressA = PlayerPrefs.GetInt("progressA");
		}
		else 
		{
			playerDat.progressA = 0;
			PlayerPrefs.SetInt("progressA", progressA);
		}
		
		if(PlayerPrefs.HasKey("progressB")) 
		{
			playerDat.progressB = PlayerPrefs.GetInt("progressB");
		}
		else 
		{
			playerDat.progressB = 0;
			PlayerPrefs.SetInt("progressB", progressB);
		}
		
		if(PlayerPrefs.HasKey("tutorialASeen")) 
		{
			playerDat.tutorialASeen = Convert.ToBoolean(PlayerPrefs.GetString("tutorialASeen"));
		}
		else 
		{
			playerDat.tutorialASeen = false;
			PlayerPrefs.SetString("tutorialASeen", tutorialASeen.ToString());
		}
		
		if(PlayerPrefs.HasKey("tutorialBSeen")) 
		{
			playerDat.tutorialBSeen = Convert.ToBoolean(PlayerPrefs.GetString("tutorialBSeen"));
		}
		else 
		{
			playerDat.tutorialBSeen = false;
			PlayerPrefs.SetString("tutorialBSeen", tutorialBSeen.ToString());
		}

		if(PlayerPrefs.HasKey("orderRow")) 
		{
			playerDat.orderRow = PlayerPrefs.GetInt("orderRow");
		}
		else 
		{
			playerDat.orderRow = 0;
			PlayerPrefs.SetInt("orderRow", orderRow);
		} 
		*/
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

		playerDat.progressA = inputProgressA;
		PlayerPrefs.SetInt("progressA", playerDat.progressA);
	}
	public int GetProgressA () {
		
		return playerDat.progressA;
	}

	public void SetProgressB (int inputProgressB) {

		playerDat.progressB = inputProgressB;
		PlayerPrefs.SetInt("progressB", playerDat.progressB);
	}
	public int GetProgressB () {
		
		return playerDat.progressB;
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
		
		playerDat.tutorialASeen = inputTutorial;
		PlayerPrefs.SetString("tutorialASeen", playerDat.tutorialASeen.ToString());
	}
	public bool GetTutorialASeen () {
		
		return playerDat.tutorialASeen;
	}

	public void SetTutorialBSeen (bool inputTutorial) {
		
		playerDat.tutorialBSeen = inputTutorial;
		PlayerPrefs.SetString("tutorialBSeen", playerDat.tutorialBSeen.ToString());
	}
	public bool GetTutorialBSeen () {
		
		return playerDat.tutorialBSeen;
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

		return playerDat.userID;
	}
	public void IncreaseUserID () {

		playerDat.userID++;
		PlayerPrefs.SetInt ("userID", playerDat.userID);
	}

	public int GetOrderRow () {
		
		return playerDat.orderRow;
	}
	public void SetOrderRow (int inputRow) {
		
		playerDat.orderRow = inputRow;
		PlayerPrefs.SetInt ("orderRow", playerDat.orderRow);
	}
}
