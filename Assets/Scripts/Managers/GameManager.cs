using UnityEngine;
using System.Collections;
using System;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Linq;
using System.Collections.Generic;

public class GameManager : MonoBehaviour {

	[SerializeField]
	public Camera mainCam;

	[SerializeField]
	public ProfileManager profileManager;

    [SerializeField]
    public DataManager dataManager;

	[SerializeField]
	public Tutorial tutorial;

	public GameLevel activeLevel;
	public AssistanceManager activeLevelAssistance;

    private bool player;
    private bool gameA;
	private string gameType;
	private bool tutorialSeen = false;
    private float levelCompletionTime = -1;
	private float lastHitTime = -1;
	private bool sessionActive = true;
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

	private List<float> levelReactionTimesList = new List<float>();
	private float levelReactionTime = 0.0f;

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

    [SerializeField]
    private Arduino arduino;

    // Canvas Stuff
    [SerializeField]
    private Canvas menuCanvas;
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

    [SerializeField]
    private GameObject heatMap;

    [SerializeField]
    private GameObject timeVis;

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

    public LineDrawer LD;

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
		sessionLength = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Time", 4);
        difficultyLevel = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":DifficultyLevel", 1);
		gameType = PlayerPrefs.GetString ("Settings:" + currentProfileID + ":GameType", "gameA");
		intro = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Intro", 1) == 1;
   
    }

    public void StartGame()
    {
		LoadPlayerPrefs ();
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
            _CurrentScene = "LevelCountDown";
			StartCoroutine(CountDownFirstLevel());

		}
		menuCanvas.gameObject.SetActive(false);
    }

	public void Update()
	{
		//Debug.DrawRay(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector3.forward * 10f, Color.red);
        if (_CurrentScene == "Level") {

            Vector3 mousePos = mainCam.ScreenToViewportPoint(Input.mousePosition);
            if (sessionActive && activeLevel != null) {
                Target target = activeLevel.GetCurrentTarget();
                if (target != null) {
                    Vector3 targetPos = mainCam.WorldToViewportPoint(target.transform.position);
                    if (targetPos.x - mousePos.x > 0.05f) {
                        Debug.Log("Arduino vibrates to the right!");
                        arduino.ERM1Power = 255;
                        arduino.ERM2Power = 0;
                    } else if (mousePos.x - targetPos.x > 0.05f) {
                        Debug.Log("Arduino vibrates to the left!");
                        arduino.ERM2Power = 255;
                        arduino.ERM1Power = 0;
                    } else {
                        arduino.ERM2Power = 0;
                        arduino.ERM1Power = 0;
                    }
                }
            }

            float time = Time.time;
            sessionActive = (Time.time - sessionTimeStart < sessionLength * 60);

			if (input.TouchDown)
			{
				LD.StartLine(input.TouchPos);
			}

			if (input.TouchActive)
			{
				//Debug.Log("touchInput: [" + mainCam.WorldToViewportPoint(input.TouchPos) + "]");
				HitType hitType = activeLevel.AttemptHit(input.TouchPos);
				LD.DrawLine(input.TouchPos, hitType);

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
                            levelReactionTimesList.Add(reactionTime);

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
				LD.EndLine();
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
		levelReactionTime = Utils.GetMedian(levelReactionTimesList);
        bool usedLineDrawing = LD.GetUsesLineDrawing();
        dataManager.AddLevelData(currentProgress, levelCompletionTime, sessionTimeCurrent,
                                 levelTimestampStart, levelTimestampEnd, usedLineDrawing);
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
            _CurrentScene = "Level";
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

        if (sessionActive) {
            endLevelTime.SetTargetDecimalNumber(levelCompletionTime);
            endLevelAmount.SetTargetWholeNumber(sessionHitsTotal);
            endLevelAverage.SetTargetDecimalNumber(levelReactionTime);

        }

    }

	private void resetLevelCounters()
	{
		levelHitsTotal = 0;
		levelErrorsTotal = 0;
		levelReactionTime = 0.0f;
		levelReactionTimesList.Clear();
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

	public void ResetGame()
	{
        //loggingManager.WriteLog ("Game Reset!");
        bool shouldUpload = profileManager.GetUploadPolicy();
        bool sessionFinished = (Time.time - sessionTimeStart > sessionLength * 60);
        if (sessionFinished) {
            
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
        // if we fail to upload before user exit, we dump the logs disk.
        bool shouldUpload = profileManager.GetUploadPolicy();
        bool sessionFinished = (Time.time - sessionTimeStart > sessionLength * 60);
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
