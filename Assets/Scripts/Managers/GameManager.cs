using UnityEngine;
using System.Collections;
using System;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Linq;
using System.Collections.Generic;

public class GameManager : MonoBehaviour
{
	[SerializeField]
	public LoggingManager loggingManager;

	[SerializeField]
	public Camera mainCam;

	[SerializeField]
	public ProfileManager profileManager;

    [SerializeField]
    public DataManager dataManager;

    [SerializeField]
    public ProgressionManager progressManager;

	[SerializeField]
	public Tutorial tutorial;

	public GameLevel activeLevel;
	public AssistanceManager activeLevelAssistance;
	public BackgroundRotation backgroundRotation;

    private bool player;
    private bool gameA;
	private string gameType;
	private bool tutorialSeen = false;
    private float levelCompletionTime = -1;
	private float lastHitTime = -1;

	// The difference between sessionFinished and sessionActive is
	// that sessionFinished is only true if we just finished a session.
	// While sessionActive can be true even if a session was never started.
	// (fx we just entered the main menu).

	private bool sessionActive = true;
	private bool sessionFinished = false;
	private bool levelActive = false;
	private float pauseTime = 0;
	private bool intro = false;
	private int currentProgress = 0;

    public InputHandler input;

	// Counters for Statistics

	// Per-Level Counters 
	private int levelHitsTotal = 0;

    private Vector2 lastHitPos;

	private int levelErrorsTotal = 0;

	private float levelTimeStart = -1;		  // used for calculations (Time.time based)
	private float levelTimeEnd = -1;		  // used for calculations (Time.time based)
	private DateTime levelTimestampStart;     // used for logging (System.Datetime.now based)
	private DateTime levelTimestampEnd;       // used for logging (System.Datetime.now based)
    private DateTime sessionTimestampStart;   // used for logging (System.Datetime.now based)

	private int sessionHitsTotal = 0;

	private int sessionLength;
	private float sessionTimeStart = -1;
	private float sessionTimeCurrent = -1; 		// current time formatted in seconds
	private float sessionTimeRemaining = -1;    // remaining time formatted in seconds
    private int difficultyLevel;

    // Canvas Stuff
    [SerializeField]
    private Canvas menuCanvas;
	[SerializeField]
    private GameObject gameCanvas;
    [SerializeField]
    private Canvas setupCanvas;
    [SerializeField]
    private Canvas endLevelCanvas;
	[SerializeField]
	private Canvas endSessionCanvas;
	[SerializeField]
    private GameObject gameOverlayCanvas;
	[SerializeField]
	private GameObject gamePanel;
    [SerializeField]
    private CountAnimation endLevelTime;
    [SerializeField]
    private Text endLevelDuration;
	private string endLevelDurationTemplate;
	[SerializeField]
	private CountAnimation endLevelAmount;
	[SerializeField]
	private CountAnimation endLevelAverage;

    private bool seenHeatMap = false;
    private bool seenTimeVis = false;

	[SerializeField]
	public Text countDownText;
	public int countDown = 4;
	[SerializeField]
	public GameObject getReadyOverlay;


    // Since we're doing everything in one scene now, we're just adding this to figure out 
    // the state we're in. 
    public static string _CurrentScene = "";

    void Start()
    {
		GameLevel._DidInit = false;

		endLevelDurationTemplate = endLevelDuration.text;

        input = gameObject.AddComponent<InputHandler>();

        LoadPlayerPrefs();

        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        lastHitPos = new Vector2(-1.0f, -1.0f);
        lastHitTime = -1.0f;
    }

    public void LoadPlayerPrefs()
    {
		string currentProfileID = profileManager.GetCurrentProfileID ();
		sessionLength = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Time", 2);
        difficultyLevel = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":DifficultyLevel", 1);
		gameType = PlayerPrefs.GetString ("Settings:" + currentProfileID + ":GameType", "gameA");
		intro = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Intro", 1) == 1;
   
    }

    public void StartGame()
    {
		LoadPlayerPrefs ();
		LevelData level = progressManager.GetCurrentLevel();
		activeLevelAssistance.LoadPlayerPrefs();
		backgroundRotation.SetBackground(level.background);
        gameOverlayCanvas.SetActive(true);

		if (intro && !tutorialSeen)
		{
			tutorial.Init();
			_CurrentScene = "Tutorial";
			tutorialSeen = true;
			string currentProfileID = profileManager.GetCurrentProfileID();

			int introVal = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Intro", -1);

			if (introVal == -1)
			{
				PlayerPrefs.SetInt("Settings:" + currentProfileID + ":Intro", tutorialSeen ? 0 : 1);
			}
		} else
		{
			gamePanel.SetActive(true);
			currentProgress += 1;

			if (!GameLevel._DidInit)
			{
				activeLevel.Init(this);
				_CurrentScene = "Level";
			}
            dataManager.NewSession();
			StartCoroutine(CountDownFirstLevel());

		}
		gameCanvas.gameObject.SetActive(true);
		menuCanvas.gameObject.SetActive(false);
		endLevelCanvas.gameObject.SetActive(false);
		levelActive = true;
    }

	public void Update()
	{
		//Debug.DrawRay(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector3.forward * 10f, Color.red);
        if (_CurrentScene == "Level") {
            float time = Time.time;
            sessionActive = (Time.time - sessionTimeStart < sessionLength * 10); // 60

			if (input.TouchActive)
			{
				//Debug.Log("touchInput: [" + mainCam.WorldToViewportPoint(input.TouchPos) + "]");
				HitType hitType = activeLevel.AttemptHit(input.TouchPos);

				if (hitType == HitType.TargetHit || hitType == HitType.TargetHitLevelComplete || hitType == HitType.WrongTargetHit)
				{

					if (sessionActive)
					{
                        // We don't measure reaction time for the first hit because it is affected
                        // by the animation time and is hardly comparable to other times.
                        float reactionTime = -1.0f;
                        if (lastHitTime > -1.0f)
						{
                            reactionTime = Time.time - lastHitTime;

						}

                        // We don't measure distance of the first hit because
                        // there is no sensible start position we can measure from.
                        Vector2 hitPos = mainCam.WorldToViewportPoint(input.TouchPos);
                        float distance = -1.0f;

                        if (lastHitPos.x > -1.0f && lastHitPos.y > -1.0f) {
                            distance = Vector2.Distance(lastHitPos, hitPos);
                        }

						levelHitsTotal += 1;

                        dataManager.AddHit(hitPos, reactionTime, distance, hitType, activeLevelAssistance.GetAssistanceWasActive());
                        activeLevelAssistance.resetAssistanceWasActive();

						lastHitTime = Time.time;
                        lastHitPos = hitPos;
					}

					if (hitType == HitType.TargetHitLevelComplete)
					{
                        TheLevelEnded();
					}
                    Debug.Log("sessionActive: " + sessionActive + " sessionTime(" + (Time.time - sessionTimeStart) + ") lastHitPos[" + lastHitPos.x + lastHitPos.y +
                              ") LastHitTime( " + lastHitTime + ")");
				}

			} else if (input.TouchUp)
			{
				activeLevel.TempHit = null;
			}
		}

		if (Input.GetKeyDown(KeyCode.R))
		{
			GameObject.Find("GameLevel").GetComponent<GameLevel>().ReloadLevel();
		}
	}

    private void TheLevelEnded()
    {
        dataManager.PrintResults();
        levelActive = false;
        _CurrentScene = "LevelComplete";
		levelTimeEnd = Time.time;
		levelTimestampEnd = System.DateTime.Now;
		levelCompletionTime = levelTimeEnd - levelTimeStart;
        sessionTimeCurrent += levelCompletionTime;
		sessionTimeRemaining = sessionTimeRemaining - levelCompletionTime;
		sessionHitsTotal += levelHitsTotal;
        bool usedLineDrawing = false;
        dataManager.AddLevelData(currentProgress, levelCompletionTime, sessionTimeCurrent,
                                 levelTimestampStart, levelTimestampEnd, usedLineDrawing);
		loggingManager.WriteLevelLog("Level " + currentProgress.ToString() + " Completed!");
		ShowTheEndLevelCanvas();

    }

	private IEnumerator CountDownFirstLevel()
	{
		getReadyOverlay.SetActive(true);
		while (countDown > 0)
		{
			countDownText.text = countDown.ToString();
			yield return new WaitForSeconds(1f);
			countDown--;
		}

		if (countDown < 1)
		{
			getReadyOverlay.SetActive(false);
			levelActive = true;
			levelTimestampStart = System.DateTime.Now;
            activeLevel.LoadNextLevel();
            sessionTimestampStart = System.DateTime.Now;
			sessionTimeStart = Time.time;
			sessionTimeRemaining = (sessionLength * 60);
			levelTimeStart = sessionTimeStart;
		}
	}

	public void ShowTheEndLevelCanvas()
    {
        Image bgPanel = endLevelCanvas.GetComponentInChildren<Image>();
        Color col = bgPanel.color;

        endLevelCanvas.gameObject.SetActive(true);
		gameOverlayCanvas.SetActive (false);
        if (!sessionActive) {
            dataManager.AddSessionData(sessionTimestampStart, intro);
            endSessionCanvas.gameObject.SetActive(true);
			sessionFinished = true;
            //loggingManager.WriteSessionLog();
			//loggingManager.UploadLog();
		}
        SetEndScreenValues();
        TimerPause ();

    }

    private void SetEndScreenValues()
    {
        var timeSpan = TimeSpan.FromSeconds(Time.time - sessionTimeStart);
        endLevelDuration.text = string.Format(endLevelDurationTemplate, timeSpan.Minutes.ToString(), sessionLength.ToString());

        var levelData = dataManager.GetLevelData();

        if (sessionActive) {
            endLevelTime.SetTargetDecimalNumber(levelCompletionTime);
            endLevelAmount.SetTargetWholeNumber(sessionHitsTotal);
            endLevelAverage.SetTargetDecimalNumber(levelData.reactionTime);

        }

    }

	private void resetLevelCounters()
	{
		levelHitsTotal = 0;
		levelErrorsTotal = 0;
	}

	public void TimerPause()
	{
		pauseTime = Time.time;
		levelActive = false;
	}

	public void TimerResume()
	{
		sessionTimeStart += (Time.time - pauseTime);
		levelActive = true;
		activeLevelAssistance.LoadPlayerPrefs();
		LoadPlayerPrefs();
		activeLevel.ReloadLevel();
		//loggingManager.WriteLog ("Game Resumed");
	}

	public void ResetOrProceedGame()
	{
		int level = progressManager.AdvanceLevel();
		if (level == -1) {
			//int track = progressManager.AdvanceTrack();
			profileManager.SetTrackCompletion();
			profileManager.SetLevel(); // saves the level.
			ResetGame();
		} else {
			profileManager.SetLevel();
			GameLevel._DidInit = false;
			sessionTimeStart = Time.time;
			endSessionCanvas.gameObject.SetActive(false);
			StartGame();
		}
	}

	public void ResetGame()
	{
		Debug.Log ("Game Reset!");
        bool shouldUpload = profileManager.GetUploadPolicy();
		Debug.Log ("shouldUpload: " + shouldUpload);
		Debug.Log ("!sessionActive: " + !sessionActive);
		if (shouldUpload && sessionFinished) {
            loggingManager.WriteSessionLog();
			loggingManager.SetCurrentLogsToUpload ();
        }
        dataManager.SaveData();
		SceneManager.LoadSceneAsync("TMT_P10");
	}

	public void NextLevelButton()
	{
		resetLevelCounters();
		TimerResume();
		levelActive = true;
		gameOverlayCanvas.SetActive(true);
		_CurrentScene = "Level";
		currentProgress += 1;
		activeLevel.LoadNextLevel();
        dataManager.NewLevel();
		levelTimestampStart = System.DateTime.Now;
		levelTimeStart = Time.time;
        lastHitTime = -1.0f;
        lastHitPos = new Vector2(-1.0f, -1.0f);
	}

    void OnApplicationQuit()
    {
        dataManager.SaveData();
        // If we have a finished session, we should prepare it for upload.
        bool shouldUpload = profileManager.GetUploadPolicy();
		if (shouldUpload && sessionFinished) {
            loggingManager.WriteSessionLog();
			loggingManager.SetCurrentLogsToUpload ();
        }

		// if we have any logs to upload, we should dump them to disk before quitting.
		loggingManager.DumpLogsToUpload ();
    }

    public bool GetHeatMapSeen()
    {
        return seenHeatMap;
    }

    public bool GetTimeVisSeen()
    {
        return seenTimeVis;
    }

    public void SetHeatMapSeen(bool seenValue)
    {
        seenHeatMap = seenValue;
    }

    public void SetTimeVisSeen(bool seenValue)
    {
        seenTimeVis = seenValue;
    }

    public void QuitGame()
    {
        Application.Quit();
    }

    public string GetGameType()
    {
        return gameType;
    }

	public bool GetLevelActive() {
		return levelActive;
	}

    public int GetAmountOfCircles()
    {
        int targetAmount = Utils.TargetAmountFromDifficulty(difficultyLevel);
        return targetAmount;
    }
}
