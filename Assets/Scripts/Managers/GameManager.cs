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
	public MainMenuScreen mainMenuScreen;

	[SerializeField]
	public ProfileManager profileManager;

	[SerializeField]
	public Tutorial tutorial;

	public GameLevel activeLevel;
	public AssistanceManager activeLevelAssistance;

	public TextAsset[] allLevelsA;
    public TextAsset[] allLevelsB;

    private int currentLevel;
    private bool player;
    //private int userID;
    private bool gameA;
	private string gameType;
	private bool tutorialSeen = false;
    //private int progressA;
    //private int progressB;
    //private int orderRow;
    //private bool tutorialASeen = false;
    //private bool tutorialBSeen = false;
    private float levelCompletionTime = -1;
	private float lastHitTime = -1;
	private bool sessionActive = true;
	private bool levelActive = false;
	private float pauseTime = 0;
	private bool intro = false;
	private int minimumLevel = 7;
	private int maximumLevel = 12;
	private int currentProgress = 0;

    public InputHandler input;

	// Counters for Statistics

	// Per-Level Counters 
	private int levelHitsTotal = 0;
	private int levelHitsLeft = 0;
	private int levelHitsRight = 0;

	private int levelErrorsTotal = 0;
	private int levelErrorsLeft = 0;
	private int levelErrorsRight = 0;

	private List<float> levelReactionTimesList = new List<float>();
	private List<float> levelReactionTimesLeftList = new List<float>();
	private List<float> levelReactionTimesRightList = new List<float>();
	private float levelReactionTime = 0.0f;
	private float levelReactionTimeLeft = 0.0f;
	private float levelReactionTimeRight = 0.0f;

	private float levelTimeStart = -1;		 // used for calculations (Time.time based)
	private float levelTimeEnd = -1;		 // used for calculations (Time.time based)
	private string levelTimestampStart = ""; // used for logging (System.Datetime.now based)
	private string levelTimestampEnd = "";   // used for logging (System.Datetime.now based)

	int bestCompletionTime = 0;
	private List<float> HitTimeLeft = new List<float>();
	private List<float> HitTimeRight = new List<float>();
	private int sessionHitsTotal = 0;
	private int sessionErrorTotal = 0;

	private int sessionLength;
	private float sessionTimeStart = -1;
	private float sessionTimeCurrent = -1; 		// current time formatted in seconds
	private float sessionTimeRemaining = -1;    // remaining time formatted in seconds

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
    private Canvas gameOverlayCanvas;
    [SerializeField]
    private CountAnimation endLevelTime;
    [SerializeField]
    private Text endLevelDuration;
	[SerializeField]
	private CountAnimation endLevelAmount;
	[SerializeField]
	private CountAnimation endLevelAverage;
	[SerializeField]
	private CountAnimation totalAmount;
	[SerializeField]
	private Text endSessionAmount;
	[SerializeField]
	private CountAnimation bestCompletionTimeText;
	[SerializeField]
	private CountAnimation reactionTimeRightText;
	[SerializeField]
	private CountAnimation reactionTimeLeftText;

	//private string endLevelTimeTemplate;
	//private string endLevelAmountTemplate;
	//private string endLevelAverageTemplate;
	//private string totalAmountTemplate;
	//private string bestCompletionTimeTemplate;
	//private string reactionTimeRightTemplate;
	//private string reactionTimeLeftTemplate;

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

		//endLevelTimeTemplate = endLevelTime.text;
		//endLevelAmountTemplate = endLevelAmount.text;
		//endLevelAverageTemplate = endLevelAverage.text;
		//totalAmountTemplate = totalAmount.text;
		//bestCompletionTimeTemplate = bestCompletionTimeText.text;
		//reactionTimeLeftTemplate = reactionTimeLeftText.text;
		//reactionTimeRightTemplate = reactionTimeRightText.text;

        input = gameObject.AddComponent<InputHandler>();

        LoadPlayerPrefs();

        Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }

    public void LoadPlayerPrefs()
    {
		string currentProfileID = profileManager.GetCurrentProfileID ();
		sessionLength = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Time", 2);
		minimumLevel = PlayerPrefs.GetInt ("Settings:" + currentProfileID + ":MinLevel", 1);
		maximumLevel = PlayerPrefs.GetInt ("Settings:" + currentProfileID + ":MaxLevel", 4);
		gameType = PlayerPrefs.GetString ("Settings:" + currentProfileID + ":GameType", "gameA");
		intro = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Intro", 1) == 1;
   
    }

    public void StartGame()
    {
		LoadPlayerPrefs ();

        gameOverlayCanvas.gameObject.SetActive(true);

		if (intro && !tutorialSeen)
		{
			//GameObject tutObj = Instantiate(Resources.Load("Tutorial/Tutorial")) as GameObject;
			//tutObj.GetComponent<Tutorial>().Init(this);
			//tutObj.name = "Tutorial";
			//tutorial.gameObject.SetActive(true);
			tutorial.Init();
			//tutorial.Init(this);
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
			currentLevel = ChooseLevel();
			currentProgress += 1;

			if (!GameLevel._DidInit)
			{
				activeLevel.Init(this);
				_CurrentScene = "Level";
			}
			activeLevel.setupCamera();
			StartCoroutine(CountDownFirstLevel());

		}
		menuCanvas.gameObject.SetActive(false);
    }

	public void Update()
	{
		//Debug.DrawRay(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector3.forward * 10f, Color.red);
		if (_CurrentScene == "Level")
		{
			if (input.TouchDown)
			{
				LD.StartLine(input.TouchPos);
			}

			if (input.TouchActive)
			{
				HitType hitType = activeLevel.AttemptHit(input.TouchPos);
				LD.DrawLine(input.TouchPos, hitType);
				if (hitType == HitType.TargetHit || hitType == HitType.TargetHitLevelComplete)
				{
					float time = Time.time;

					if (Time.time - sessionTimeStart < sessionLength * 60 && sessionActive)
					{
						if (lastHitTime == -1)
						{
							lastHitTime = levelTimeStart;
						}

						levelHitsTotal += 1;
						float reactionTime = Time.time - lastHitTime;
						levelReactionTimesList.Add(reactionTime);

						if (input.TouchPos.x > 0)
						{
							HitTimeRight.Add(Time.time - lastHitTime);
							levelReactionTimesRightList.Add(Time.time - lastHitTime);
							levelHitsRight++;
						}
						else
						{
							HitTimeLeft.Add(Time.time - lastHitTime);
							levelReactionTimesLeftList.Add(Time.time - lastHitTime);
							levelHitsLeft++;
						}

						lastHitTime = Time.time;
					}

					if (hitType == HitType.TargetHitLevelComplete)
					{
						TheLevelEnded();

					}

				} else if (hitType == HitType.WrongTargetHit)
				{
					if (Time.time - sessionTimeStart < sessionLength * 60 && sessionActive)
					{
						levelErrorsTotal++;
					}

					if (input.TouchPos.x > 0)
					{
						levelErrorsRight++;
					}
					else
					{
						levelErrorsLeft++;
					}
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
		levelActive = false;
        _CurrentScene = "LevelComplete";
		levelTimeEnd = Time.time;
		levelTimestampEnd = System.DateTime.Now.ToString("HH:mm:ss.ffff");
		sessionTimeCurrent = (levelTimeEnd - sessionTimeStart);
		levelCompletionTime = levelTimeEnd - levelTimeStart;
		sessionTimeRemaining = (sessionLength * 60) - levelCompletionTime;
		sessionHitsTotal += levelHitsTotal;
		sessionErrorTotal -= levelErrorsTotal;
		levelReactionTime = Utils.GetMedian(levelReactionTimesList);
		levelReactionTimeLeft = Utils.GetMedian(levelReactionTimesLeftList);
		levelReactionTimeRight = Utils.GetMedian(levelReactionTimesRightList);
		loggingManager.WriteAggregateLog("Level " + currentProgress.ToString() + " Completed!");
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
			levelTimestampStart = System.DateTime.Now.ToString("HH:mm:ss.ffff");
			activeLevel.LoadNextLevel();
			sessionTimeStart = Time.time;
			levelTimeStart = sessionTimeStart;
		}
	}

	public void ShowTheEndLevelCanvas()
    {
        Image bgPanel = endLevelCanvas.GetComponentInChildren<Image>();
        Color col = bgPanel.color;

        endLevelCanvas.gameObject.SetActive(true);
		gameOverlayCanvas.gameObject.SetActive (false);
		if (Time.time - sessionTimeStart > sessionLength*60 && sessionActive) {
			endSessionCanvas.gameObject.SetActive(true);
			loggingManager.UploadLog();
			sessionActive = false;
		}
		UpdateEndScreenClock ();
		TimerPause ();
        SetEndScreenValues(Mathf.FloorToInt(levelCompletionTime));
    }

	private void UpdateEndScreenClock()
	{
		var timeSpan = TimeSpan.FromSeconds(Time.time - sessionTimeStart);
		endLevelDuration.text = string.Format("{0:D2}:{1:D2}", timeSpan.Minutes, timeSpan.Seconds);
		endSessionAmount.text = string.Format("{0:D2}:{1:D2}", timeSpan.Minutes, timeSpan.Seconds);
	}


    private void SetEndScreenValues(int levelCompletionSeconds)
    {
		if (sessionActive) {
			endLevelTime.SetTargetWholeNumber(levelCompletionSeconds);
			if (bestCompletionTime < levelCompletionSeconds) {
				bestCompletionTime = levelCompletionSeconds;
			}
			endLevelAmount.SetTargetWholeNumber(sessionHitsTotal);
			endLevelAverage.SetTargetDecimalNumber(levelReactionTime);
		} else {
			totalAmount.SetTargetWholeNumber(sessionHitsTotal);
			bestCompletionTimeText.SetTargetWholeNumber(bestCompletionTime);

			float hitTimeLeftAverage = HitTimeLeft.Average(item => (float) item);
			float hitTimeRightAverage = HitTimeRight.Average (item => (float) item);

			reactionTimeLeftText.SetTargetDecimalNumber(hitTimeLeftAverage);
			reactionTimeRightText.SetTargetDecimalNumber(hitTimeRightAverage);
		}
    }

	private int ChooseLevel()
	{
		int count = (maximumLevel - minimumLevel);
		int[] randomID = Enumerable.Range(minimumLevel, count).ToArray();
		Utils.ShuffleArray<int>(randomID);
		int levelID = randomID[0];
		return levelID;
	}

	private void resetLevelCounters()
	{
		levelHitsTotal = 0;
		levelHitsLeft = 0;
		levelHitsRight = 0;
		levelErrorsTotal = 0;
		levelErrorsLeft = 0;
		levelErrorsRight = 0;
		levelReactionTime = 0.0f;
		levelReactionTimeLeft = 0.0f;
		levelReactionTimeRight = 0.0f;
		levelReactionTimesList.Clear();
		levelReactionTimesLeftList.Clear();
		levelReactionTimesRightList.Clear();
	}

	public void TimerPause()
	{
		pauseTime = Time.time;
		levelActive = false;
		//loggingManager.WriteLog ("Game Paused");
		mainMenuScreen.setPauseText();
	}

	public void TimerResume()
	{
		sessionTimeStart += (Time.time - pauseTime);
		levelActive = true;
		activeLevelAssistance.LoadPlayerPrefs();
		LoadPlayerPrefs();
		currentLevel = ChooseLevel();
		activeLevel.ReloadLevel();
		//loggingManager.WriteLog ("Game Resumed");
	}

	public void ResetGame()
	{
		//loggingManager.WriteLog ("Game Reset!");
		SceneManager.LoadSceneAsync("TMT_P10");
	}

	public void NextLevelButton()
	{
		resetLevelCounters();
		TimerResume();
		levelActive = true;
		currentLevel = ChooseLevel();
		gameOverlayCanvas.gameObject.SetActive(true);
		_CurrentScene = "Level";
		activeLevelAssistance.resetAssistanceWasActive();
		currentProgress += 1;
		activeLevel.LoadNextLevel();
		levelTimestampStart = System.DateTime.Now.ToString("HH:mm:ss.ffff");
		levelTimeStart = Time.time;
		lastHitTime = levelTimeStart;
	}

	public void GameOverlay_MainMenuButton_Click()
	{
		menuCanvas.gameObject.SetActive(true);
		gameOverlayCanvas.gameObject.SetActive(false);
		TimerPause();
	}

	public void SetGameType(string newGameType)
	{
		gameType = newGameType;
	}

	public bool GetUsesLineDrawing()
	{
		return LD.GetUsesLineDrawing();
	}

	public float GetSessionTimeCurrent()
	{
		return sessionTimeCurrent;
	}

	public float GetSessionTimeRemaining()
	{
		return sessionTimeRemaining;
	}

	public bool GetTutorialSeen()
	{
		return tutorialSeen;
	}

    public string GetGameType()
    {
        return gameType;
    }

	public string GetTimestampStartLevel()
	{
		return levelTimestampStart;
	}

	public string GetTimestampEndLevel()
	{
		return levelTimestampEnd;
	}

	public int GetLevelHitsTotal()
	{
		return levelHitsTotal;
	}

	public int GetLevelHitsRight()
	{
		return levelHitsLeft;
	}

	public int GetLevelHitsLeft()
	{
		return levelHitsRight;
	}

	public int GetLevelErrorsTotal()
	{
		return levelErrorsTotal;
	}

	public int GetLevelErrorsRight()
	{
		return levelErrorsLeft;
	}

	public int GetLevelErrorsLeft()
	{
		return levelErrorsRight;
	}

	public float GetLevelReactionTime()
	{
		return levelReactionTime;
	}

	public float GetLevelReactionTimeRight()
	{
		return levelReactionTimeLeft;
	}

	public float GetLevelReactionTimeLeft()
	{
		return levelReactionTimeRight;
	}

	public void QuitGame()
	{
		Application.Quit();
	}

	public int GetCurrentProgress()
	{
		return currentProgress;
	}

	public int GetCurrentLevel()
	{
		return currentLevel;
	}

    public int GetTotalLevelsA()
    {
        return allLevelsA.Length;
    }
    public int GetTotalLevelsB()
    {
        return allLevelsB.Length;
    }

	public bool GetLevelActive() {
		return levelActive;
	}

    public TextAsset GetLevelData()
    {
        if (gameType == "gameA")
        {
			return allLevelsA[currentLevel];
        }
        else
        {
            return allLevelsB[currentLevel];
        }
    }

    public float GetLevelCompletionTime()
    {
        return levelCompletionTime;
    }
}
