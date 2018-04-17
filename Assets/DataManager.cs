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
        public HitType type;                    // type of hit.

        public override string ToString()
        {
            string hitString = hitNumber + ": [" + xPos + ", " + yPos + "] t(" + time + ") d(" + distance + ") ";

            if (type == HitType.TargetHit) {
                hitString += "type(HitType.TargetHit)";
            } else if (type == HitType.TargetHitLevelComplete) {
                hitString += "type(HitType.TargetHitLevelComplete)";
            } else if (type == HitType.WrongTargetHit) {
                hitString += "type(HitType.WrongTargetHit)";
            } else {
                hitString += "type(UNKNOWN)";
            }

            return hitString;
        }
    }

    public struct LevelData
    {
        public int levelNumber;                 // which level is this (how many has been played so far)
        public int errorCount;                  // how many errors were found.
        public int hitCount;                    // how many hits were found.
        public List<Hit>[,] levelHits;          // list of hits done in this level
        public float[,] fieldReactionTimes;     // median reaction time for each field.
        public float[,] fieldDistances;         // median reaction time for each field.
        public float reactionTime;              // the median reaction time of all hits this level.
        public float distanceAverage;           // the average distance of all distance travelled this level.
        public Vector2 centerOfHit;             // the center of hit / cancellation, calculated in viewport space.
        public float completionTime;            // how much time you spent completing the level.
        public float sessionTime;               // how much time of the sessionTime had passed.
        public bool assistanceWasActive;        // whether the assistance was active or not.
        public int levelErrorsLeft;             // error count of hits to the left
        public int levelErrorsRight;            // error count of hits to the right
        public System.DateTime timestampStart;  // timestamp of when the level started.
        public System.DateTime timestampEnd;    // timestamp of when the level ended.
        public bool usedLineDrawing;            // whether lineDrawing was used this level

        public override string ToString()
        {
            string levelData = levelNumber + ": [h" + hitCount + " e" + errorCount + "] reaction2,1(" + fieldReactionTimes[2, 1] + ") " +
                               "reactT(" + reactionTime + ") distAvg(" + distanceAverage + ") dist0,0(" + fieldDistances[0, 0] +
                                ") completionTime(" + completionTime + ") sessionTime(" + sessionTime +
                               ") assist(" + assistanceWasActive + ") eR(" + levelErrorsRight + ") eL(" + levelErrorsRight + ") timestampStart(" +
                               timestampStart + ") timestampEnd(" + timestampEnd;
            return levelData;

        }

        public string PrintHitLists()
        {
            string hitString = levelNumber + "has " + levelHits.Length + " hitLists. ";
            Debug.Log(hitString);
            for (int i = 0; i < levelHits.GetLength(1); i++) {
                Debug.Log("getLength(0): " + levelHits.GetLength(0));
                for (int j = 0; j < levelHits.GetLength(0); j++) {
                    Debug.Log("getLength(1): " + levelHits.GetLength(1));
                    hitString += "[" + j + ", " + i + "](" + levelHits[j,i].Count + "), ";
                }
            }
            return hitString;
        }

    }

    [System.Serializable]
    public struct SessionData
    {
        public string version;                  // version of the game this struct was saved with.
        public float reactionTime;              // reaction time for the whole session.
        public float[,] fieldReactionTimes;     // median reaction time for each field.
        public int errorCount;                  // total count of errors.
        public int hitCount;                    // total count of successful hits.
        public int levelCount;                  // total count of levels
        public int difficultyLevel;             // what difficultyLevel was this played at.
        public string gameType;                 // what type of game was played here.
        public float assistanceCount;           // how many times you used assistance.
        public float sessionLength;             // how long time the session took.
        public float bestCompletionTime;        // the best completion time for this level.
        public System.DateTime timestamp;       // timestamp marking the session start.
        public bool intro;                      // whether intro was turned on for this session

        public override string ToString()
        {
            string sessionData = timestamp.ToString("yyyy-MM-dd") + " " + timestamp.ToString("HH:mm") + " [h" + hitCount + " e" + errorCount + "] lvls(" + levelCount + ") difficulty(" +
                      difficultyLevel + ") gType(" + gameType + ") assists(" + assistanceCount + ") sLength(" + sessionLength + ") reactT(" + reactionTime +
                      ") f[0,0]" + fieldReactionTimes[0, 0] + ") f[1,0]" + fieldReactionTimes[1, 0] + ") f[2,0]" + fieldReactionTimes[2, 0] +
                      ") f[0,1]" + fieldReactionTimes[0, 1] + ") f[1,1]" + fieldReactionTimes[1, 1] + ") f[2,1]" + fieldReactionTimes[2, 1] + ")" + 
                      "intro (" + intro + ") v(" + version + ")";
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
        NewLevel();
    }

    public void AddSessionData(string gameType, int difficultyLevel, float sessionLength, System.DateTime sessionStartTimestamp,
                               bool intro)
    {
        currentSessionData.assistanceCount = 0;
        currentSessionData.errorCount = 0;
        currentSessionData.hitCount = 0;
        currentSessionData.bestCompletionTime = -1.0f;
        List<float> reactionTimes = new List<float>();
        foreach (var levelData in levelDataList) {
            // we should only count levels where we managed to get a hit.
            // if a level starts right when the sessionTime ends, it doesn't count.
            if (levelData.hitCount > 0) {
                reactionTimes.Add(levelData.reactionTime);
                currentSessionData.errorCount += levelData.errorCount;
                currentSessionData.hitCount += levelData.hitCount;

                if (levelData.completionTime > currentSessionData.bestCompletionTime) {
                    currentSessionData.bestCompletionTime = levelData.completionTime;
                }
            }
            if (levelData.assistanceWasActive) {
                currentSessionData.assistanceCount += 1;
            }
        }

        currentSessionData.fieldReactionTimes = new float[cellRowCount, cellColumnCount];
        foreach (Field field in fields) {
            List<float> fieldTimes = new List<float>();

            foreach (var levelData in levelDataList) {
                if (levelData.fieldReactionTimes[field.xIndex, field.yIndex] != -1.0f) {
                    fieldTimes.Add(levelData.fieldReactionTimes[field.xIndex, field.yIndex]);
                }
            }

            float average = fieldTimes.Average(item => (float)item);
            currentSessionData.fieldReactionTimes[field.xIndex, field.yIndex] = average;
        }

        currentSessionData.reactionTime = reactionTimes.Average(item => (float)item);
        currentSessionData.levelCount = levelDataList.Count;
        currentSessionData.sessionLength = sessionLength;
        currentSessionData.timestamp = sessionStartTimestamp;
        currentSessionData.difficultyLevel = difficultyLevel;
        currentSessionData.gameType = gameType;
        currentSessionData.intro = intro;
        currentSessionData.version = profileManager.GetCurrentVersion();
        currentSessionData.testNumber = 12;
        Debug.Log("AddSessionData: " + currentSessionData.ToString());
        sessionDataList.Add(currentSessionData);
    }

    public void AddLevelData(int levelNumber, float completionTime, float sessionTime, bool assistanceWasActive,
                             System.DateTime timestampStart, System.DateTime timestampEnd, bool usedLineDrawing)
    {
        currentLevelData.levelHits = levelHitsList;
        currentLevelData.levelErrorsLeft = 0;
        currentLevelData.levelErrorsRight = 0;
        currentLevelData.hitCount = 0;
        List<float> reactionTimes = new List<float>();
        List<float> distances = new List<float>();
        List<float> xPositions = new List<float>();
        List<float> yPositions = new List<float>();
        foreach (List<Hit> hitList in levelHitsList) {
            foreach (Hit hit in hitList) {
                distances.Add(hit.distance);

                if (hit.type == HitType.TargetHit || hit.type == HitType.TargetHitLevelComplete) {
                    currentLevelData.hitCount++;
                    xPositions.Add(hit.xPos);
                    yPositions.Add(hit.yPos);
                    reactionTimes.Add(hit.time);
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

        // if we load a new level just before session finishes, we might encounter levelData with no
        // hits in them at all.
        if (xPositions.Count > 0 && yPositions.Count > 0) {
            currentLevelData.centerOfHit = new Vector2(xPositions.Average(item => (float)item), yPositions.Average(item => (float)item));
        }
            
        currentLevelData.fieldReactionTimes = new float[cellRowCount, cellColumnCount];
        currentLevelData.fieldDistances = new float[cellRowCount, cellColumnCount];
        foreach (Field field in fields) {
            List<float> fieldTimes = new List<float>();
            List<float> levelDistancesList = new List<float>();

            foreach (Hit hit in levelHitsList[field.xIndex, field.yIndex]) {
                fieldTimes.Add(hit.time);
                levelDistancesList.Add(hit.distance);
            }

            float fieldTimeMedian = -1.0f;
            if (fieldTimes.Count > 0) {
                fieldTimeMedian = Utils.GetMedian(fieldTimes);


            }

            float distanceAverage = -1.0f;
            if (levelDistancesList.Count > 0) {
                distanceAverage = levelDistancesList.Average(item => (float)item);
            }
            currentLevelData.fieldReactionTimes[field.xIndex, field.yIndex] = fieldTimeMedian;
            currentLevelData.fieldDistances[field.xIndex, field.yIndex] = distanceAverage;
        }

        // if our level starts and the sessionTime simultaneously ends we have no data.
        currentLevelData.reactionTime = -1.0f;
        if (reactionTimes.Count > 0) {
            // reaction times can be prone to outliers so we use the median.
            currentLevelData.reactionTime = Utils.GetMedian(reactionTimes);
        }
        currentLevelData.distanceAverage = -1.0f;
        if (distances.Count > 0) {
            // distances are not prone to outliers, so we use average.
            currentLevelData.distanceAverage = distances.Average(item => (float)item);
        }
        
        Debug.Log("Sum of distances: " + distances.Sum());

        currentLevelData.completionTime = completionTime;
        currentLevelData.sessionTime = sessionTime;
        currentLevelData.assistanceWasActive = assistanceWasActive;
        currentLevelData.levelNumber = levelNumber;

        currentLevelData.timestampStart = timestampStart;
        currentLevelData.timestampEnd = timestampEnd;
        currentLevelData.usedLineDrawing = usedLineDrawing;

        Debug.Log("AddLevelData: " + currentLevelData.ToString());
        Debug.Log(currentLevelData.PrintHitLists());
        levelDataList.Add(currentLevelData);    
    }

    public void AddHit(Vector2 viewportPos, float timeValue, float dist, HitType hitType)
    {
        Debug.Log("viewportPos[" + viewportPos.ToString() + "]");
        Field cell = matchPosToCell(viewportPos);
        Hit hit = new Hit { xPos = viewportPos.x, yPos = viewportPos.y, 
                            time = timeValue, distance = dist, type = hitType};
        Debug.Log("Adding " + hit.time + "to cell " + cell.XYString());
        Debug.Log(hit.ToString());
        levelHitsList[cell.xIndex, cell.yIndex].Add(hit);
    }

    private Field matchPosToCell(Vector2 viewportPos)
    {
        float posX = viewportPos.x;
        float posY = viewportPos.y;
        Field cell = new Field { xIndex = -1, yIndex = -1 };

        foreach (Field field in fields) {
            if (field.xMin <= posX && posX <= field.xMax) {
                if (field.yMin <= posY && posY <= field.yMax) {
                    Debug.Log("[" + field.xMin + "] " + posX + " [" + field.xMax + "]");
                    Debug.Log("[" + field.yMin + "] " + posY + " [" + field.yMax + "]");
                    cell = field;
                    break;
                }
            }
        }

        return cell;
    }

    public void printResults()
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
            Debug.Log("SaveData sees: " + sessionDataList.Last().testNumber);
            string profileID = profileManager.GetCurrentProfileID();
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

}
