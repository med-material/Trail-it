using UnityEngine;
using System.Collections;
using System;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{

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

    // Canvas Stuff
    [SerializeField]
    private Canvas menuCanvas;
    [SerializeField]
    private Canvas setupCanvas;
    [SerializeField]
    private Canvas endLevelCanvas;


    // Since we're doing everything in one scene now, we're just adding this to figure out 
    // the state we're in. 
    public static string _CurrentScene = "";

    // Can be set in the inspector in case you don't want to finish the Tutorial
    public bool SkipTutorial = false;
    public bool IsGuest = true;

    public LineDrawer LD;

    // Use this for initialization
    void Start()
    {

        input = gameObject.AddComponent<InputHandler>();

        LoadPlayerPrefs();

        //DontDestroyOnLoad (this); // Technically not needed anymore. 

        if (IsGuest)
            SetPlayer(false); // Sets player to guest if IsGuest is set in the inspector.

        Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }

    public void LoadPlayerPrefs()
    {

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
    }


    public void SetPlayer(bool inputPlayer)
    {
        //TODO: Redo this so we don't use the setter to go to menu. 
        player = inputPlayer;
        setupCanvas.gameObject.SetActive(false);
        menuCanvas.gameObject.SetActive(true);
    }
    public bool GetPlayer()
    {

        return player;
    }

    public void StartGame(bool isGameTypeA)
    {
        SetGameType(isGameTypeA);
        //TODO: Insert: 			loggingManager.WriteLog ("Guest Profile Selected");


        if (isGameTypeA)
        {
            if (playerDat.tutorialASeen || SkipTutorial)
            {
                Debug.Log("Load level select");
                SetNextLevel(0);
                LoadNextLevel();
            }
            else
            {
                GameObject tutObj = Instantiate(Resources.Load("Tutorial/Tutorial")) as GameObject;
                tutObj.GetComponent<Tutorial>().Init(this);
                tutObj.name = "Tutorial";
                _CurrentScene = "Tutorial";
                //Debug.Log ("Load tutorial"); 
                SetTutorialASeen(true);
            }
        }
        else
        {
            if (playerDat.tutorialBSeen || SkipTutorial)
            {
                Debug.Log("Load level select for type B");
                SetNextLevel(0);
                LoadNextLevel();
            }
            else
            {
                //Debug.Log ("Load tutorial for type B"); 
                GameObject tutObj = Instantiate(Resources.Load("Tutorial/Tutorial")) as GameObject;
                tutObj.GetComponent<Tutorial>().Init(this);
                tutObj.name = "Tutorial";
                _CurrentScene = "Tutorial";
                SetTutorialBSeen(true);
            }
        }
        menuCanvas.gameObject.SetActive(false);
    }

    public GameLevel activeLevel;

    public void Update()
    {
        Debug.DrawRay(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector3.forward * 10f, Color.red);
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
            }
            else if (input.TouchUp)
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

    public void LoadNextLevel()
    {
        if (!GameLevel._DidInit)
        {
            GameObject.Find("GameLevel").GetComponent<GameLevel>().Init(this);
            _CurrentScene = "Level";
        }
    }

    public bool LevelEnded()
    {
        if (endLevelCanvas == null)
        {
            return true;
        }
        else
        {
            _CurrentScene = "LevelComplete";
            endLevelCanvas.gameObject.SetActive(true);
            return false;
        }
    }

    public void SetGameType(bool inputGameA)
    {
        gameA = inputGameA;
    }
    public bool GetGameType()
    {
        return gameA;
    }

    public void SetProgressA(int inputProgressA)
    {
        playerDat.progressA = inputProgressA;
        PlayerPrefs.SetInt("progressA", playerDat.progressA);
    }
    public int GetProgressA()
    {
        return playerDat.progressA;
    }

    public void SetProgressB(int inputProgressB)
    {
        playerDat.progressB = inputProgressB;
        PlayerPrefs.SetInt("progressB", playerDat.progressB);
    }
    public int GetProgressB()
    {
        return playerDat.progressB;
    }

    public void NextLevelButton()
    {
        SetNextLevel(GetNextLevel() + 1);
        _CurrentScene = "Level";
        GameObject.Find("GameLevel").GetComponent<GameLevel>().LoadNextLevel();
    }

    public void SetNextLevel(int inputLevel)
    {

        nextLevel = inputLevel;

        if (gameA && nextLevel >= allLevelsA.Length - 1)
        {
            nextLevel = allLevelsA.Length - 1;
        }
        else if (!gameA && nextLevel >= allLevelsB.Length - 1)
        {
            nextLevel = allLevelsB.Length - 1;
        }
    }
    public int GetNextLevel()
    {
        return nextLevel;
    }

    public void SetTutorialASeen(bool inputTutorial)
    {
        playerDat.tutorialASeen = inputTutorial;
        PlayerPrefs.SetString("tutorialASeen", playerDat.tutorialASeen.ToString());
    }
    public bool GetTutorialASeen()
    {
        return playerDat.tutorialASeen;
    }

    public void SetTutorialBSeen(bool inputTutorial)
    {
        playerDat.tutorialBSeen = inputTutorial;
        PlayerPrefs.SetString("tutorialBSeen", playerDat.tutorialBSeen.ToString());
    }
    public bool GetTutorialBSeen()
    {
        return playerDat.tutorialBSeen;
    }

    public int GetTotalLevelsA()
    {
        return allLevelsA.Length;
    }
    public int GetTotalLevelsB()
    {
        return allLevelsB.Length;
    }

    public TextAsset GetLevelData()
    {
        if (gameA)
        {
            return allLevelsA[nextLevel];
        }
        else
        {
            return allLevelsB[nextLevel];
        }
    }

    public void SetLevelCompletionTime(float inputTime)
    {
        levelCompletionTime = inputTime;
    }
    public float GetLevelCompletionTime()
    {
        return levelCompletionTime;
    }

    public int GetUserID()
    {
        return playerDat.userID;
    }
    public void IncreaseUserID()
    {
        playerDat.userID++;
        PlayerPrefs.SetInt("userID", playerDat.userID);
    }

    public int GetOrderRow()
    {
        return playerDat.orderRow;
    }
    public void SetOrderRow(int inputRow)
    {
        playerDat.orderRow = inputRow;
        PlayerPrefs.SetInt("orderRow", playerDat.orderRow);
    }
}
