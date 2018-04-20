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
        public int levelNumber;                 // which level is this (how many has been played so far)
        public int errorCount;                  // how many errors were found.
        public int hitCount;                    // how many hits were found.
        public List<Hit>[,] levelHits;          // list of hits done in this level
		public int[,] fieldAssistanceCount; // how many times assistance was active for a number in a given field.
        public float[,] fieldReactionTimes;     // median reaction time for each field.
        public float[,] fieldDistances;         // median reaction time for each field.
        public float reactionTime;              // the median reaction time of all hits this level.
        public float distanceAverage;           // the average distance of all distance travelled this level.
        public Vector2 centerOfHit;             // the center of hit / cancellation, calculated in viewport space.
        public float completionTime;            // how much time you spent completing the level.
        public float sessionTime;               // how much time of the sessionTime had passed.
        public int levelErrorsLeft;             // error count of hits to the left
        public int levelErrorsRight;            // error count of hits to the right
        public System.DateTime timestampStart;  // timestamp of when the level started.
        public System.DateTime timestampEnd;    // timestamp of when the level ended.
        public bool usedLineDrawing;            // whether lineDrawing was used this level

        public override string ToString()
        {
            string levelData = levelNumber + ": [h" + hitCount + " e" + errorCount + "] reactT(" + reactionTime +
                                ") distAvg(" + distanceAverage + ") +" + ") completionTime(" + completionTime +
                                 ") sessionTime(" + sessionTime +
                                ") eR(" + levelErrorsRight + ") eL(" + levelErrorsRight + ") timestampStart(" +
                                timestampStart + ") timestampEnd(" + timestampEnd + ")";

            for (int i = 0; i < fieldReactionTimes.GetLength(1); i++) {
                for (int j = 0; j < fieldReactionTimes.GetLength(0); j++) {
                    string fieldData = " f" + j + "," + i + "(r[" + fieldReactionTimes[j, i].ToString() + "] d[" + fieldDistances[j, i] + "] a[" + fieldAssistanceCount[j, i] + "])";
                    levelData += fieldData;
                }
            }

            return levelData;

        }

        public string PrintHitLists()
        {
            string hitString = levelNumber + "has " + levelHits.Length + " hitLists. ";
            Debug.Log(hitString);
            for (int i = 0; i < levelHits.GetLength(1); i++) {
                for (int j = 0; j < levelHits.GetLength(0); j++) {
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
        public float reactionTime;              // reaction time for resetAssistanceWasActive()the whole session.
        public float[,] fieldReactionTimes;     // median reaction time for each field.
        public int[,] fieldAssistanceCount;     // Count of how many times assistance was used in each field.
        public int errorCount;                  // total count of errors.
        public int hitCount;                    // total count of successful hits.
        public int levelCount;                  // total count of levels
        public int difficultyLevel;             // what difficultyLevel was this played at.
        public string gameType;                 // what type of game was played here.
        public float sessionLength;             // how long time the session took (floating point value)
        public float bestCompletionTime;        // the best completion time for this level.
        public System.DateTime timestamp;       // timestamp marking the session start.
        public bool intro;                      // whether intro was turned on for this session
        public float worstReactionTime;         // the worst reaction time done this session
        public float bestReactionTime;          // the best reaction time done this sssion

        [System.NonSerialized]
        public float assistanceCount;           // how many times you used assistance.

        public override string ToString()
        {
            string sessionData = timestamp.ToString("yyyy-MM-dd") + " " + timestamp.ToString("HH:mm") + " [h" + hitCount + " e" + errorCount + "] lvls(" + levelCount + ") difficulty(" +
                      difficultyLevel + ") gType(" + gameType + ") sLength(" + sessionLength + ") reactT(" + reactionTime +
                      "intro (" + intro + ") v(" + version + ")";

            for (int i = 0; i < fieldReactionTimes.GetLength(1); i++) {
                for (int j = 0; j < fieldReactionTimes.GetLength(0); j++) {
                    string fieldData = " f" + j + "," + i + "(r[" + fieldReactionTimes[j, i].ToString() + "] a[" + fieldAssistanceCount[j, i] + "])";
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
        currentSessionData.errorCount = 0;
        currentSessionData.hitCount = 0;
        currentSessionData.bestCompletionTime = -1.0f;
        currentSessionData.worstReactionTime = -1.0f;
        currentSessionData.bestReactionTime = -1.0f;
        List<float> reactionTimes = new List<float>();
        currentSessionData.fieldAssistanceCount = new int[cellRowCount, cellColumnCount];

        foreach (var levelData in levelDataList) {
            // we should only count levels where we managed to get a hit.
            // if a level starts right when the sessionTime ends, it doesn't count.
            if (levelData.hitCount > 0) {
                if (levelData.reactionTime > -1.0f) {
                    if (levelData.reactionTime > currentSessionData.bestReactionTime) {
                        currentSessionData.bestReactionTime = levelData.reactionTime;
                    }
                    if (currentSessionData.worstReactionTime > -1.0f) {
                        if (levelData.reactionTime < currentSessionData.worstReactionTime) {
                            currentSessionData.worstReactionTime = levelData.reactionTime;
                        }
                    } else {
                        currentSessionData.worstReactionTime = levelData.reactionTime;
                    }
                    reactionTimes.Add(levelData.reactionTime);
                }
                currentSessionData.errorCount += levelData.errorCount;
                currentSessionData.hitCount += levelData.hitCount;

                if (levelData.completionTime > currentSessionData.bestCompletionTime) {
                    currentSessionData.bestCompletionTime = levelData.completionTime;
                }
            }
        }

        currentSessionData.fieldReactionTimes = new float[cellRowCount, cellColumnCount];
        foreach (Field field in fields) {
            List<float> fieldTimes = new List<float>();
            currentSessionData.fieldAssistanceCount[field.xIndex, field.yIndex] = 0;

            foreach (var levelData in levelDataList) {
                if (levelData.fieldReactionTimes[field.xIndex, field.yIndex] != -1.0f) {
                    fieldTimes.Add(levelData.fieldReactionTimes[field.xIndex, field.yIndex]);
                }
                currentSessionData.fieldAssistanceCount[field.xIndex, field.yIndex] += levelData.fieldAssistanceCount[field.xIndex, field.yIndex];
            }

            float average = fieldTimes.Average(item => (float)item);
            currentSessionData.fieldReactionTimes[field.xIndex, field.yIndex] = average;
        }

        if (reactionTimes.Count > 1) {
            currentSessionData.reactionTime = reactionTimes.Average(item => (float)item);
        }
        currentSessionData.levelCount = levelDataList.Count;
        currentSessionData.sessionLength = sessionLength;
        currentSessionData.timestamp = sessionStartTimestamp;
        currentSessionData.difficultyLevel = difficultyLevel;
        currentSessionData.gameType = gameType;
        currentSessionData.intro = intro;
        currentSessionData.version = profileManager.GetCurrentVersion();
        Debug.Log("AddSessionData: " + currentSessionData.ToString());
        sessionDataList.Add(currentSessionData);
    }

    public void AddLevelData(int levelNumber, float completionTime, float sessionTime,
                             System.DateTime timestampStart, System.DateTime timestampEnd, bool usedLineDrawing)
    {
        currentLevelData.levelErrorsLeft = 0;
        currentLevelData.levelErrorsRight = 0;
        currentLevelData.hitCount = 0;
        List<float> reactionTimes = new List<float>();
        List<float> distances = new List<float>();
        List<float> xPositions = new List<float>();
        List<float> yPositions = new List<float>();
        currentLevelData.centerOfHit = new Vector2(-1.0f, -1.0f);
        currentLevelData.fieldReactionTimes = new float[cellRowCount, cellColumnCount];
        currentLevelData.fieldDistances = new float[cellRowCount, cellColumnCount];
		currentLevelData.fieldAssistanceCount = new int[cellRowCount, cellColumnCount];
		bool assistanceWasActive = false;

        foreach (Field field in fields) {
            currentLevelData.fieldAssistanceCount[field.xIndex, field.yIndex] = 0;
            List<float> fieldTimes = new List<float>();
            List<float> levelDistancesList = new List<float>();

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
						currentLevelData.fieldAssistanceCount[field.xIndex, field.yIndex]++;
						assistanceWasActive = true;
					}

                    if (hit.time > -1.0f) {
                        reactionTimes.Add(hit.time);
                    }
                } else if (hit.type == HitType.WrongTargetHit) {
                    currentLevelData.errorCount++;

                    if (hit.xPos > 0.5f) {
                        currentLevelData.levelErrorsRight++;
                    } else {
                        currentLevelData.levelErrorsLeft++;
                    }
                }

                if (hit.time > -1.0f) {
                    fieldTimes.Add(hit.time);
                }
                if (hit.distance > -1.0f) {
                    levelDistancesList.Add(hit.distance);
                }
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

        currentLevelData.levelHits = levelHitsList;
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

    public void AddHit(Vector2 viewportPos, float timeValue, float dist, HitType hitType, bool assistanceValue)
    {
        Field cell = matchPosToCell(viewportPos);
        Hit hit = new Hit { xPos = viewportPos.x, yPos = viewportPos.y, 
                            time = timeValue, distance = dist, type = hitType,
							assistanceWasActive = assistanceValue};
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
                    //Debug.Log("[" + field.xMin + "] " + posX + " [" + field.xMax + "]");
                    //Debug.Log("[" + field.yMin + "] " + posY + " [" + field.yMax + "]");
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
