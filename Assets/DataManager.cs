using System.Collections;
using System.Linq;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

public class DataManager : MonoBehaviour {

    // DataManager defines data structure for game data.
    // has API for fetching it and loads/saves the data on disk.

    // As a rule, GameManager populates DataManager. DataManager does not populate GameManager.
    // But LoggingManager retreives all data from DataManager.

    public struct Hit
    {
        public int hitNumber;                   // was this hit number 1 or hit number 30.
        public float xPos;                      // the x position of this hit
        public float yPos;                      // the y position of this hit
        public float time;                      // the time it took to make this hit.
        public float distance;                  // the distance it took to get to this hit.
		public bool assistanceWasActive;		// whether assistance was active in order to get this hit.
        public HitType type;                    // type of hit.

        public override string ToString()
        {
            string hitString = hitNumber + ": [" + xPos + ", " + yPos + "] t(" + time + ") d(" + distance + ") a(" + assistanceWasActive + ")";

            if (type == HitType.TargetHit) {
                hitString += " type(HitType.TargetHit)";
            } else if (type == HitType.TargetHitLevelComplete) {
                hitString += " type(HitType.TargetHitLevelComplete)";
            } else if (type == HitType.WrongTargetHit) {
                hitString += " type(HitType.WrongTargetHit)";
            } else {
                hitString += " type(UNKNOWN)";
            }

            return hitString;
        }
    }

    public struct LevelData
    {
        public int hitCountLeft;                // amount of hits on the left side of screen.
        public int hitCountRight;               // amount of hits on right side ofscreen.
        public float reactionTimeRight;         // reaction time averaged on left side
        public float reactionTimeLeft;          // reaction time averaged on right side
        public int levelNumber;                 // which level is this (how many has been played so far)
        public int errorCount;                  // amount of errornous hits in the level, while we still have training time left.
        public int hitCount;                    // total amount of successful hits in the level, while we still have training time left.
        public List<Hit>[,] levelHits;          // list of hits done in this level

        public float reactionTime;              // the median reaction time of all hits this level.
        public float distanceAverage;           // the average distance of all distance travelled this level.
        public Vector2 centerOfHit;             // the center of hit / cancellation, calculated in viewport space.
        public float completionTime;            // how much time you spent completing the level.
        public float sessionTime;               // how much time of the sessionTime had passed.
        public int levelErrorsLeft;             // amount of errornous hits in the left side, while we still have training time left.
        public int levelErrorsRight;            // amount of errornous hits in the right side, while we still have training time left.

        public System.DateTime timestampStart;  // timestamp in HH-MM-SS.MMMM for when the level started. (disregards training time)
        public System.DateTime timestampEnd;    // timestamp in HH-MM-SS.MMMM for when the level finished. (disregards training time)
        public bool usedLineDrawing;            // whether the player is using line drawing or just clicking. Determined based on 1 succesful line-drawn
        public bool assistanceWasActive;        // whether assistance was active in that given level.


        public override string ToString()
        {
            string levelData = levelNumber + ": [h" + hitCount + " e" + errorCount + "] reactT(" + reactionTime +
                                ") distAvg(" + distanceAverage + ") completionTime(" + completionTime +
                                 ") sessionTime(" + sessionTime +
                                ") eR(" + levelErrorsRight + ") eL(" + levelErrorsRight + ") timestampStart(" +
                                timestampStart + ") timestampEnd(" + timestampEnd + ")";

            return levelData;

        }

        public string PrintHitLists()
        {
            string hitString = "lvl" + levelNumber + " has " + levelHits.Length + " hitLists. ";
            for (int i = 0; i < levelHits.GetLength(1); i++) {
                for (int j = 0; j < levelHits.GetLength(0); j++) {
                    hitString += "f[" + j + ", " + i + "](" + levelHits[j,i].Count + "), ";
                }
            }
            return hitString;
        }

    }

    [System.Serializable]
    public struct SessionData
    {
        public string currentProfileID;        // unique identifier of the player profile
        public string deviceModel;             // The model of device which is being played on (ipads, iphones, android etc.)
        public string playerName;              // the player's name
        public string email;                   // e-mail address of the player, if specified
        public string playContext;             // whether the player is playing at home or in a clinical context. "Rehab", "Home", "RehabHome".
        public string trainingReason;          // whether the player has diagnosed a type of neglect.
        public string ageGroup;                // Player age group: Below 13, 13-17, 18-24, 25-39, 40-59, 60-69, 70-79, Above 80
        public bool tutorialSeen;              // whether tutorial was seen this training session or not.
        public bool laneSetting;               // whether lanes are enabled or not.
        public bool pulseSetting;              // whether blinking is enabled or not.
        public bool voiceSetting;              // whether sound is enabled or not.
        public bool repeatVoiceSetting;        // whether repeaing sound is enabled or not.
        public bool dataVisEnabled;            // whether we show data visualization at the end of the training session. currently always false
        public string version;                  // version of the game this struct was saved with.
        public float reactionTime;              // reaction time for the whole session.
        public float[,] fieldReactionTimes;     // Average reaction time for each field averages.
        public float[,] fieldDistances;         // Average distance moved for each field.
        public int[,] fieldAssistanceCount;     // Count of how many times assistance was used in each field.
        public int[,] fieldOutlierCount;        // how many reaction times were outliers in each field.
        public int errorCount;                  // total count of errors.
        public int hitCount;                    // total count of successful hits.
        public int levelCount;                  // total count of levels
        public int difficultyLevel;             // From 1 (easy) to 3 (hard) corresponding to how many circles (not stored).
        public string gameType;                 // "1-2-3-4" vs "1-A-2-B"
        public float sessionLength;             // how long time the session took
        public float bestCompletionTime;        // the best completion time for this level.
        public System.DateTime timestamp;       // timestamp marking the session start.
        public bool intro;                      // whether intro was turned on for this session
        public float worstReactionTime;         // the worst reaction time done this session
        public float bestReactionTime;          // the best reaction time done this sssion
        public float medianReactionTime;        // the median reaction time across all reaction times.

        [System.NonSerialized]
        public float assistanceCount;           // how many times you used assistance.

        public override string ToString()
        {
            string sessionData = timestamp.ToString("yyyy-MM-dd") + " " + timestamp.ToString("HH:mm") + " [h" + hitCount + " e" + errorCount + "] lvls(" + levelCount + ") difficulty(" +
                                 difficultyLevel + ") gType(" + gameType + ") sLength(" + sessionLength + ") reactT(" + reactionTime +
                                 ") intro (" + intro + ") v(" + version + ") profileID(" + currentProfileID + ") device(" + deviceModel +
                                 ") playerName(" + playerName + ") email(" + email + ") playContext(" + playContext + ") trainingReason(" +
                                 trainingReason + ") ageGroup(" + ageGroup + ") tutorialSeen(" + tutorialSeen + ") laneSetting(" + laneSetting +
                                 ") pulseSetting(" + pulseSetting + ") voiceSetting(" + voiceSetting + ") repeatVoiceSetting(" + repeatVoiceSetting +
                                 ") dataVisEnabled(" + dataVisEnabled + ") medianReactionTime(" + medianReactionTime + ") worstReactionTime(" + worstReactionTime +
                                 ") bestReactionTime(" + bestReactionTime + ")";

            for (int i = 0; i < fieldReactionTimes.GetLength(1); i++) {
                for (int j = 0; j < fieldReactionTimes.GetLength(0); j++) {
                    string fieldData = " f" + j + "," + i + "(r[" + fieldReactionTimes[j, i] + "] d[" + fieldDistances[j,i] +
                                       "] a[" + fieldAssistanceCount[j, i] + "] o[" + fieldOutlierCount[j,i] + "])";
                    sessionData += fieldData;
                }
            }

            return sessionData;
        }
    }

    public struct Field
    {
        public float xMin;
        public float xMax;
        public float yMin;
        public float yMax;
        public int xIndex;
        public int yIndex;
        public float width;
        public float height;

        public string XYString()
        {
            return "[" + xIndex + "," + yIndex + "]";
        }

        public override string ToString()
        {
            return ("field[" + xIndex + "," + yIndex + "]: x[" + xMin + "," + xMax + "] y[" + yMin + "," + yMax + "]");
        }
    }

    // Mapping of Coordinates with levelReactionTimes 2-D Array.
    // Usage: levelReactionTimes[x,y]
    //
    //
    //              mainCam.WorldToViewportPoint()
    //
    //
    //      0.0,1.0      0.33,1.0      0.66,1.0       1.0,1.0
    //         +---------------------------------------+
    //         |---------- |---------- |---------- |   |
    //         |           |     x     |           |   |
    //         |           |           |           |   |
    //         |   [0,1]   |   [1,1]   |   [2,1]   |   |
    //         |           x           |           |   |
    //         |           |           |           |   |
    // 0.0,0,5 +-----------x-----x-----------------+ O |  1.0,0.5
    //         |           |           |           |   |
    //         |           |           |           |   |
    //         |           |           |           |   |
    //         |   [0,0]   |   [1,0]   |   [2,0]   |   |
    //         |           |           |           |   |
    //         |---------- |---------- |---------- |   |
    //         +---------------------------------------+
    //      0.0,0.0       0.33,0.0    0.66,0.0         1.0,0.0

    [SerializeField]
    private ProfileManager profileManager;

    private int cellRowCount = 3;
    private int cellColumnCount = 2;
    private float cellWidth;
    private float cellHeight;
    private float margin = 0.1f;
    private List<Field> fields = new List<Field>();
    private string directory = "";
    private bool hasInit = false;

    private SessionData currentSessionData;
    private LevelData currentLevelData;

    // contains each hit for the current level. Stored until the end of the level.
    private List<Hit>[,] levelHitsList;

    // contains each hit time across a whole session, used to calculate outliers.
    private List<float>[,] sessionHitTimesList;

    // contains each hit time across a whole session, used to calculate outliers.
    private List<float>[,] sessionHitDistancesList;

    // contains aggregated level data for the current session. Stored until next session.
    private List<LevelData> levelDataList;

    // contains aggregated session data for the current session. Stored until next session.
    private List<SessionData> sessionDataList;


    public void Start()
    {
        cellWidth = 1.0f / (float)cellRowCount;
        cellHeight = (1.0f - margin * 2) / (float)cellColumnCount;
        CalculateFields();
    }

    public void CalculateFields()
    {
        int fieldAmount = 0;

        for (int j = 0; j < cellColumnCount; j++) {

            for (int i = 0; i < cellRowCount; i++) {
                Field field;
                field.width = cellWidth;
                field.height = cellHeight;
                field.yMin = cellHeight * j + margin;
                field.yMax = cellHeight * (j + 1) + margin;
                field.xIndex = i;
                field.yIndex = j;
                field.xMin = cellWidth * i;
                field.xMax = cellWidth * (i + 1);
                fieldAmount++;
                fields.Add(field);
            }
        }

    }

    public void NewLevel()
    {
        Debug.Log("DataManager: New level!");
        currentLevelData = new LevelData();
        levelHitsList = new List<Hit>[cellRowCount, cellColumnCount];
        for (int i = 0; i < cellColumnCount; i++) {
            for (int j = 0; j < cellRowCount; j++) {
                levelHitsList[j, i] = new List<Hit>();
            }
        }
    }

    public void NewSession()
    {
        Debug.Log("DataManager: New session!");
        hasInit = true;
        currentSessionData = new SessionData();
        levelDataList = new List<LevelData>();
        sessionHitTimesList = new List<float>[cellRowCount, cellColumnCount];
        sessionHitDistancesList = new List<float>[cellRowCount, cellColumnCount];
            for (int i = 0; i < cellColumnCount; i++) {
                for (int j = 0; j < cellRowCount; j++) {
                    sessionHitTimesList[j, i] = new List<float>();
                    sessionHitDistancesList[j, i] = new List<float>();
                }
            }
        NewLevel();
    }

    public void AddSessionData(System.DateTime sessionStartTimestamp, bool intro)
    {
        currentSessionData.errorCount = 0;
        currentSessionData.hitCount = 0;
        currentSessionData.bestCompletionTime = -1.0f;
        currentSessionData.worstReactionTime = -1.0f;
        currentSessionData.bestReactionTime = -1.0f;
        currentSessionData.medianReactionTime = -1.0f;
        List<float> reactionTimes = new List<float>();
        currentSessionData.fieldAssistanceCount = new int[cellRowCount, cellColumnCount];

        foreach (var levelData in levelDataList) {
            // we should only count levels where we managed to get a hit.
            // if a level starts right when the sessionTime ends, it doesn't count.
            if (levelData.hitCount > 0) {
                currentSessionData.errorCount += levelData.errorCount;
                currentSessionData.hitCount += levelData.hitCount;

                if (levelData.completionTime > currentSessionData.bestCompletionTime) {
                    currentSessionData.bestCompletionTime = levelData.completionTime;
                }
            }
        }

        foreach (var hitTimesList in sessionHitTimesList) {
            foreach (var hitTime in hitTimesList) {
                if (hitTime > -1.0f) {
                    reactionTimes.Add(hitTime);

                    if (hitTime > currentSessionData.worstReactionTime) {
                        currentSessionData.worstReactionTime = hitTime;
                    }
                    if (currentSessionData.bestReactionTime > -1.0f) {
                        if (hitTime < currentSessionData.bestReactionTime) {
                            currentSessionData.bestReactionTime = hitTime;
                        }
                    } else {
                        currentSessionData.bestReactionTime = hitTime;
                    }
                }
            }
        }
        currentSessionData.medianReactionTime = Utils.GetMedian(reactionTimes);
        if (reactionTimes.Count > 1) {
            currentSessionData.reactionTime = reactionTimes.Average(item => (float)item);
        }

        currentSessionData.fieldOutlierCount = new int[cellRowCount, cellColumnCount];
        currentSessionData.fieldReactionTimes = new float[cellRowCount, cellColumnCount];
        currentSessionData.fieldDistances = new float[cellRowCount, cellColumnCount];
        foreach (Field field in fields) {
            currentSessionData.fieldAssistanceCount[field.xIndex, field.yIndex] = 0;
            currentSessionData.fieldOutlierCount[field.xIndex, field.yIndex] = 0;

            foreach (var levelData in levelDataList) {
                foreach (Hit hit in levelData.levelHits[field.xIndex, field.yIndex]) {
                    if (hit.time > (currentSessionData.medianReactionTime * 2)) {
                        currentSessionData.fieldOutlierCount[field.xIndex, field.yIndex]++;
                    }

                    if (hit.assistanceWasActive) {
                        currentSessionData.fieldAssistanceCount[field.xIndex, field.yIndex]++;
                    }
                }
            }

            float reactionTimeAverage = sessionHitTimesList[field.xIndex, field.yIndex].Average(item => (float)item);
            float distanceAverage = sessionHitDistancesList[field.xIndex, field.yIndex].Average(item => (float)item);
            currentSessionData.fieldReactionTimes[field.xIndex, field.yIndex] = reactionTimeAverage;
            currentSessionData.fieldDistances[field.xIndex, field.yIndex] = distanceAverage;
        }

        currentSessionData.levelCount = levelDataList.Count;
        currentSessionData.timestamp = sessionStartTimestamp;
        currentSessionData.intro = intro;
        currentSessionData.version = profileManager.GetCurrentVersion();
        string currentProfileID = profileManager.GetCurrentProfileID();
        currentSessionData.currentProfileID = currentProfileID;
        currentSessionData.deviceModel = SystemInfo.deviceModel;
        currentSessionData.playerName = profileManager.GetCurrentName();
        currentSessionData.email = profileManager.GetCurrentEmail();
        currentSessionData.playContext = profileManager.GetCurrentPlayContext();
        currentSessionData.trainingReason = profileManager.GetCurrentTrainingReason();
        currentSessionData.ageGroup = profileManager.GetCurrentAgeGroup();
        currentSessionData.sessionLength = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Time", 2);
        currentSessionData.gameType = PlayerPrefs.GetString("Settings:" + currentProfileID + ":GameType", "gameA");
        currentSessionData.tutorialSeen = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Intro", 1) == 1;
        currentSessionData.laneSetting = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Landingsbane", 0) == 1;
        currentSessionData.pulseSetting = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Pulse", 0) == 1;
        currentSessionData.voiceSetting = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Stemme", 0) == 1;
        currentSessionData.repeatVoiceSetting = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":GentagStemme", 0) == 1;
        currentSessionData.dataVisEnabled = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":DataVisEnabled", 0) == 1;

        Debug.Log("AddSessionData: " + currentSessionData.ToString());
        sessionDataList.Add(currentSessionData);
    }

    public void AddLevelData(int levelNumber, float completionTime, float sessionTime,
                             System.DateTime timestampStart, System.DateTime timestampEnd, bool usedLineDrawing)
    {
        currentLevelData.levelErrorsLeft = 0;
        currentLevelData.levelErrorsRight = 0;
        currentLevelData.hitCount = 0;
        currentLevelData.hitCountLeft = 0;
        currentLevelData.hitCountRight = 0;
        List<float> reactionTimes = new List<float>();
        List<float> distances = new List<float>();
        List<float> xPositions = new List<float>();
        List<float> yPositions = new List<float>();
        List<float> reactionTimeLeft = new List<float>();
        List<float> reactionTimeRight = new List<float>();

        currentLevelData.centerOfHit = new Vector2(-1.0f, -1.0f);
        currentLevelData.assistanceWasActive = false;

        foreach (Field field in fields) {
            foreach (Hit hit in levelHitsList[field.xIndex, field.yIndex]) {
                if (hit.distance > -1.0f) {
                    distances.Add(hit.distance);
                }

                if (hit.type == HitType.TargetHit || hit.type == HitType.TargetHitLevelComplete) {
                    currentLevelData.hitCount++;
                    if (hit.xPos > -1.0f && hit.yPos > -1.0f) {
                        xPositions.Add(hit.xPos);
                        yPositions.Add(hit.yPos);
                    }

					if (hit.assistanceWasActive) {
                        currentLevelData.assistanceWasActive = true;
					}

                    if (hit.time > -1.0f) {
                        reactionTimes.Add(hit.time);

                        if (hit.xPos > 0.5f) {
                            reactionTimeRight.Add(hit.time);
                            currentLevelData.hitCountRight++;
                        } else {
                            reactionTimeLeft.Add(hit.time);
                            currentLevelData.hitCountLeft++;
                        }

                    }
                } else if (hit.type == HitType.WrongTargetHit) {
                    currentLevelData.errorCount++;

                    if (hit.xPos > 0.5f) {
                        currentLevelData.levelErrorsRight++;
                    } else {
                        currentLevelData.levelErrorsLeft++;
                    }
                }
            }

        }

        // if our level starts and the sessionTime simultaneously ends we have no data.
        currentLevelData.reactionTime = -1.0f;
        if (reactionTimes.Count > 0) {
                // reaction times can be prone to outliers so we use the median.
                currentLevelData.reactionTime = Utils.GetMedian(reactionTimes);
        }
        currentLevelData.distanceAverage = -1.0f;
        if (distances.Count > 0) {
            if (distances.Count == 1) {
                currentLevelData.distanceAverage = distances.Last();
			} else {
                // distances are not prone to outliers, so we use average.
                currentLevelData.distanceAverage = distances.Average(item => (float)item);
            }
        }
        if (xPositions.Count > 0 && yPositions.Count > 0) {
            if (xPositions.Count == 1 || yPositions.Count == 1) {
                currentLevelData.centerOfHit = new Vector2(xPositions.Last(), yPositions.Last());
            }
            currentLevelData.centerOfHit = new Vector2(xPositions.Average(item => (float)item), yPositions.Average(item => (float)item));
        }
        if (reactionTimeLeft.Count > 0) {
            currentLevelData.reactionTimeLeft = reactionTimeLeft.Average(item => (float)item);
        }
        if (reactionTimeRight.Count > 0) {
            currentLevelData.reactionTimeRight = reactionTimeRight.Average(item => (float)item);
        }

        currentLevelData.levelHits = levelHitsList;
        currentLevelData.completionTime = completionTime;
        currentLevelData.sessionTime = sessionTime;
        currentLevelData.levelNumber = levelNumber;
        currentLevelData.timestampStart = timestampStart;
        currentLevelData.timestampEnd = timestampEnd;
        currentLevelData.usedLineDrawing = usedLineDrawing;

        Debug.Log("AddLevelData: " + currentLevelData.ToString());
        Debug.Log("currentLevelData Hitlists: " + currentLevelData.PrintHitLists());
        levelDataList.Add(currentLevelData);    
    }

    public void AddHit(Vector2 viewportPos, float timeValue, float dist, HitType hitType, bool assistanceValue)
    {
        Field cell = matchPosToCell(viewportPos);
        Hit hit = new Hit { xPos = viewportPos.x, yPos = viewportPos.y, 
                            time = timeValue, distance = dist, type = hitType,
							assistanceWasActive = assistanceValue};

        Debug.Log("AddHit: " + hit.ToString() + " to cell " + cell.XYString());
        levelHitsList[cell.xIndex, cell.yIndex].Add(hit);
        if (hit.time > -1.0f) {
            sessionHitTimesList[cell.xIndex, cell.yIndex].Add(hit.time);
        }
        if (hit.distance > -1.0f) {
            sessionHitDistancesList[cell.xIndex, cell.yIndex].Add(hit.distance);
        }
    }

    private Field matchPosToCell(Vector2 viewportPos)
    {
        float posX = viewportPos.x;
        float posY = viewportPos.y;
        Field cell = new Field { xIndex = -1, yIndex = -1 };

        foreach (Field field in fields) {
            if (field.xMin <= posX && posX <= field.xMax) {
                if (field.yMin <= posY && posY <= field.yMax) {
                    //Debug.Log("[" + field.xMin + "] " + posX + " [" + field.xMax + "]");
                    //Debug.Log("[" + field.yMin + "] " + posY + " [" + field.yMax + "]");
                    cell = field;
                    break;
                }
            }
        }

        return cell;
    }

    public void PrintResults()
    {
        Debug.Log("STATS:");
        for (int i = 0; i < cellColumnCount; i++) {
            for (int j = 0; j < cellRowCount; j++) {
                Debug.Log("[" + j + "," + i + "]: " + levelHitsList[j, i].Count + " [" + Utils.StringFromHitList(levelHitsList[j, i]) + "]");
            }
        }

    }

    public void SaveData()
    {
        if (hasInit && sessionDataList.Count > 0) {
            string profileID = profileManager.GetCurrentProfileID();
            Debug.Log("Saving " + sessionDataList.Count + " sessions to" + directory + profileID + ".dat");
            if (File.Exists(directory + profileID + ".dat")) {
                File.Delete(directory + profileID + ".dat");
            }
            FileStream stream = new FileStream(directory + profileID + ".dat", FileMode.Create);
            BinaryFormatter formatter = new BinaryFormatter();
            formatter.Serialize(stream, sessionDataList);
            stream.Close(); 
        }
    }

    public void LoadData()
    {
        directory = Application.persistentDataPath + "/TrainingData/";
        if (!Directory.Exists(directory)) {
            Directory.CreateDirectory(directory);
        }
        string profileID = profileManager.GetCurrentProfileID();
        Debug.Log(directory + profileID + ".dat");
        if (File.Exists(directory + profileID + ".dat")) {
            FileStream stream = new FileStream(directory + profileID + ".dat", FileMode.Open);
            BinaryFormatter formatter = new BinaryFormatter();
            sessionDataList = (List<SessionData>)formatter.Deserialize(stream);
            stream.Close();
            Debug.Log("Loaded " + sessionDataList.Count + " sessions for ID " + profileID);
        } else {
            sessionDataList = new List<SessionData>();
            Debug.Log("no sessionDataList on disk, creating new list for ID " + profileID);
        }

    }

    public LevelData GetLevelData()
    {
        return currentLevelData;
    }

    public SessionData GetSessionData()
    {
        return currentSessionData;
    }

    public List<SessionData> GetSessionDataList()
    {
        return sessionDataList;
    }

    public List<Field> GetFields()
    {
        return fields;
    }

	public int GetRowCount()
    {
        return cellRowCount;
    }

	public int GetColumnCount()
    {
        return cellColumnCount;
    }

}
