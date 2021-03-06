using UnityEngine;
using System.Collections;
using System.IO;
using System.Collections.Generic;

public class LoggingManager : MonoBehaviour {

	private GameManager gameManager;
	private GameLevel gameLevel;

    [SerializeField]
    private DataManager dataManager;

	private Tutorial tutorial;
	[SerializeField]
	private ConnectToMySQL mySQL;

	[SerializeField]
	private ProfileManager profileManager;

	private List<string> logEntries;
	private static List<string> logsToUpload;
	private static bool init = false;

	private StreamWriter writer;
	private string directory;
	private string fileName;
	private string sep = ",";
	private string currentLine;


	// Use this for initialization
	void Start () {
		if (init == false) {
			logsToUpload = new List<string> ();
			init = true;
		}
		logEntries = new List<string>();
		gameManager = this.GetComponent<GameManager> ();

		directory = Application.persistentDataPath + "/Data/";

		if(!Directory.Exists(directory)){
			Directory.CreateDirectory(directory);
		}

		DetectLogs ();
		UploadLogs ();
		NewLog ();
	}

    public void WriteLevelLog(string inputEvent)
    {
        var levelData = dataManager.GetLevelData();
        var date = System.DateTime.Now.ToString("yyyy-MM-dd");
        var time = System.DateTime.Now.ToString("HH:mm:ss.ffff");
        var eventLabel = inputEvent; // fx "Target Hit" or "Game Loaded"
        var levelNumber = levelData.levelNumber.ToString();
        var assistanceWasActive = Utils.BoolToNumberString(levelData.assistanceWasActive);
        var usedLineDrawing = Utils.BoolToNumberString(levelData.usedLineDrawing);
        var levelHitsTotal = levelData.hitCount.ToString();
        var levelHitsLeft = levelData.hitCountLeft.ToString();
        var levelHitsRight = levelData.hitCountRight.ToString();
        var levelErrorsTotal = levelData.errorCount.ToString();
        var levelErrorsLeft = levelData.levelErrorsLeft.ToString();
        var levelErrorsRight = levelData.levelErrorsRight.ToString();
        var levelReactionTime = levelData.reactionTime.ToString();
        var levelAvgDistance = levelData.distanceAverage.ToString();
        var levelTimeTotal = levelData.completionTime.ToString();
        var centerOfHitX = levelData.centerOfHit.x.ToString();
        var centerOfHitY = levelData.centerOfHit.y.ToString();
        var timestampLevelStart = levelData.timestampStart.ToString("HH:mm:ss.ffff");
        var timestampLevelEnd = levelData.timestampEnd.ToString("HH:mm:ss.ffff");
        var sessionTimeCurrent = levelData.sessionTime.ToString();
        var levelReactionTimeLeft = levelData.reactionTimeLeft.ToString();
        var levelReactionTimeRight = levelData.reactionTimeRight.ToString();

        currentLine =
                  date + sep
                + time + sep
                + eventLabel + sep
                + levelNumber + sep
                + assistanceWasActive + sep
                + usedLineDrawing + sep
                + levelHitsTotal + sep
                + levelHitsLeft + sep
                + levelHitsRight + sep
                + levelErrorsTotal + sep
                + levelErrorsLeft + sep
                + levelErrorsRight + sep
                + levelReactionTime + sep
                + levelReactionTimeLeft + sep
                + levelReactionTimeRight + sep
                + levelAvgDistance + sep
                + levelTimeTotal + sep
                + centerOfHitX + sep
                + centerOfHitY + sep
                + timestampLevelStart + sep
                + timestampLevelEnd + sep
                + sessionTimeCurrent;


        string debugLine =
                  "date: " + date + sep
                + "time: " + time + sep
                + "eventLabel: " + eventLabel + sep
                + "currentProgress: " + levelNumber + sep
                + "assistanceWasActive: " + assistanceWasActive + sep
                + "usesLineDrawing: " + usedLineDrawing + sep
                + "levelHitsTotal: " + levelHitsTotal + sep
                + "levelHitsLeft: " + levelHitsLeft + sep
                + "levelHitsRight: " + levelHitsRight + sep
                + "levelErrorsTotal: " + levelErrorsTotal + sep
                + "levelErrorsLeft: " + levelErrorsLeft + sep
                + "levelErrorsRight: " + levelErrorsRight + sep
                + "levelReactionTime: " + levelReactionTime + sep
                + "levelReactionTimeLeft: " + levelReactionTimeLeft + sep
                + "levelReactionTimeRight: " + levelReactionTimeRight + sep
                + "levelAvgDistance: " + levelAvgDistance + sep
                + "levelTimeTotal: " + levelTimeTotal + sep
                + "centerOfHitX: " + centerOfHitX + sep
                + "centerOfHitY: " + centerOfHitY + sep
                + "timestampLevelStart: " + timestampLevelStart + sep
                + "timestampLevelEnd: " + timestampLevelEnd + sep
                + "sessionTimeCurrent: " + sessionTimeCurrent + sep;

        Debug.Log(debugLine);
        logEntries.Add(currentLine);
		using (StreamWriter writer = File.AppendText(directory + fileName))
		{
			writer.WriteLine(currentLine);
		}

	}

    public void WriteSessionLog()
    {
        var sD = dataManager.GetSessionData();
        var difficultyLevel = PlayerPrefs.GetInt("Settings:" + sD.currentProfileID + ":DifficultyLevel", 1);
        var circleAmount = Utils.TargetAmountFromDifficulty(sD.difficultyLevel).ToString();
		string seenHeatMap = Utils.BoolToNumberString(gameManager.GetHeatMapSeen());               
		string seenTimeVis = Utils.BoolToNumberString(gameManager.GetTimeVisSeen());
		string deviceModel = sD.deviceModel.Replace (',', '_');
		deviceModel = deviceModel.Replace (';', '_');
		Debug.Log ("seenTimeVis: " + seenTimeVis + ", seenHeatMap: " + seenHeatMap);

        for (int i = 0; i < logEntries.Count; i++){
            logEntries[i] = logEntries[i] + sep
                    + sD.currentProfileID + sep
                    + sD.version + sep
                    + deviceModel + sep
                    + sD.playerName + sep
                    + sD.email + sep
                    + sD.playContext + sep
                    + sD.trainingReason + sep
                    + sD.ageGroup + sep
                    + sD.gameType + sep
                    + circleAmount + sep
                    + sD.sessionLength + sep
					+ Utils.BoolToNumberString(sD.tutorialSeen) + sep
					+ Utils.BoolToNumberString(sD.laneSetting) + sep
					+ Utils.BoolToNumberString(sD.pulseSetting) + sep
					+ Utils.BoolToNumberString(sD.voiceSetting) + sep
					+ Utils.BoolToNumberString(sD.repeatVoiceSetting) + sep
					+ Utils.BoolToNumberString(sD.dataVisEnabled) + sep
                    + sD.worstReactionTime + sep
                    + sD.bestReactionTime + sep
                    + sD.medianReactionTime + sep
                    + seenHeatMap + sep
                    + seenTimeVis + sep
                    + sD.fieldReactionTimes[0, 0].ToString() + sep
                    + sD.fieldReactionTimes[1, 0].ToString() + sep
                    + sD.fieldReactionTimes[2, 0].ToString() + sep
                    + sD.fieldReactionTimes[0, 1].ToString() + sep
                    + sD.fieldReactionTimes[1, 1].ToString() + sep
                    + sD.fieldReactionTimes[2, 1].ToString() + sep
                    + sD.fieldDistances[0, 0].ToString() + sep
                    + sD.fieldDistances[1, 0].ToString() + sep
                    + sD.fieldDistances[2, 0].ToString() + sep
                    + sD.fieldDistances[0, 1].ToString() + sep
                    + sD.fieldDistances[1, 1].ToString() + sep
                    + sD.fieldDistances[2, 1].ToString() + sep
                    + sD.fieldAssistanceCount[0, 0].ToString() + sep
                    + sD.fieldAssistanceCount[1, 0].ToString() + sep
                    + sD.fieldAssistanceCount[2, 0].ToString() + sep
                    + sD.fieldAssistanceCount[0, 1].ToString() + sep
                    + sD.fieldAssistanceCount[1, 1].ToString() + sep
                    + sD.fieldAssistanceCount[2, 1].ToString() + sep
                    + sD.fieldOutlierCount[0, 0].ToString() + sep
                    + sD.fieldOutlierCount[1, 0].ToString() + sep
                    + sD.fieldOutlierCount[2, 0].ToString() + sep
                    + sD.fieldOutlierCount[0, 1].ToString() + sep
                    + sD.fieldOutlierCount[1, 1].ToString() + sep
                    + sD.fieldOutlierCount[2, 1].ToString();
        }

        string debugLine =
                "currentProfileID :" + sD.currentProfileID + sep
                + "version: " + sD.version + sep
                + "deviceModel: " + sD.deviceModel + sep
                + "playerName: " + sD.playerName + sep
                + "email: " + sD.email + sep
                + "playContext: " + sD.playContext + sep
                + "trainingReason: " + sD.trainingReason + sep
                + "ageGroup: " + sD.ageGroup + sep
                + "gameType: " + sD.gameType + sep
                + "circleAmount: " + circleAmount + sep
                + "sessionLength: " + sD.sessionLength + sep
                + "sessionReactionTime_0_0: " + sD.fieldReactionTimes[0, 0].ToString() + sep
                + "sessionReactionTime_1_0: " + sD.fieldReactionTimes[1, 0].ToString() + sep
                + "sessionReactionTime_2_0: " + sD.fieldReactionTimes[2, 0].ToString() + sep
                + "sessionReactionTime_0_1: " + sD.fieldReactionTimes[0, 1].ToString() + sep
                + "sessionReactionTime_1_1: " + sD.fieldReactionTimes[1, 1].ToString() + sep
                + "sessionReactionTime_2_1: " + sD.fieldReactionTimes[2, 1].ToString() + sep
                + "sessionDistance_0_0: " + sD.fieldDistances[0, 0].ToString() + sep
                + "sessionDistance_1_0: " + sD.fieldDistances[1, 0].ToString() + sep
                + "sessionDistance_2_0: " + sD.fieldDistances[2, 0].ToString() + sep
                + "sessionDistance_0_1: " + sD.fieldDistances[0, 1].ToString() + sep
                + "sessionDistance_1_1: " + sD.fieldDistances[1, 1].ToString() + sep
                + "sessionDistance_2_1: " + sD.fieldDistances[2, 1].ToString() + sep
                + "sessionAssistance_0_0: " + sD.fieldAssistanceCount[0, 0].ToString() + sep
                + "sessionAssistance_1_0: " + sD.fieldAssistanceCount[1, 0].ToString() + sep
                + "sessionAssistance_2_0: " + sD.fieldAssistanceCount[2, 0].ToString() + sep
                + "sessionAssistance_0_1: " + sD.fieldAssistanceCount[0, 1].ToString() + sep
                + "sessionAssistance_1_1: " + sD.fieldAssistanceCount[1, 1].ToString() + sep
                + "sessionAssistance_2_1: " + sD.fieldAssistanceCount[2, 1].ToString() + sep
                + "sessionOutliers_0_0: " + sD.fieldOutlierCount[0, 0].ToString() + sep
                + "sessionOutliers_1_0: " + sD.fieldOutlierCount[1, 0].ToString() + sep
                + "sessionOutliers_2_0: " + sD.fieldOutlierCount[2, 0].ToString() + sep
                + "sessionOutliers_0_1: " + sD.fieldOutlierCount[0, 1].ToString() + sep
                + "sessionOutliers_1_1: " + sD.fieldOutlierCount[1, 1].ToString() + sep
                + "sessionOutliers_2_1: " + sD.fieldOutlierCount[2, 1].ToString()+ sep
                + "tutorialSeen: " + sD.tutorialSeen + sep
                + "laneSetting: " + sD.laneSetting + sep
                + "pulseSetting: " + sD.pulseSetting + sep
                + "voiceSetting: " + sD.voiceSetting + sep
                + "repeatVoiceSetting: " + sD.repeatVoiceSetting + sep
                + "dataVisEnabled: " + sD.dataVisEnabled;

        Debug.Log(debugLine);
    }

	public void NewLog() {
		logEntries.Clear ();
		fileName = "User" + profileManager.GetCurrentProfileID() + " - " + System.DateTime.Now.ToString() + ".txt";
		fileName = fileName.Replace ('/', '-');
		fileName = fileName.Replace (':', '-');
	}

	public void UploadLogs() {
		bool shouldUpload = profileManager.GetUploadPolicy ();
		if (shouldUpload && logsToUpload.Count > 0) {
			Debug.Log ("Attempting to upload " + logsToUpload.Count + " logs.");
			mySQL.UploadLog(logsToUpload);
		}
	}

	public void SetCurrentLogsToUpload() {
		if (logEntries.Count > 0) {
			logsToUpload.AddRange (logEntries);
			Debug.Log ("logEntries added to logsToUpload, logsToUpload is now " + logsToUpload.Count + " in size.");
		}
	}

	public void ClearLogsToUpload() {
		//logsToUpload.Clear ();
	}

	public void DumpLogsToUpload() {
		if (logsToUpload.Count > 0) {
			for (int i = 0; i < logsToUpload.Count; i++) {
				using (StreamWriter writer = File.AppendText (directory + "offlinelogs")) {
					writer.WriteLine (logsToUpload [i]);
				}
			}

			Debug.Log ("Writing " + logsToUpload.Count + "logs to disk.");
		}
	}

	public void DetectLogs() {
		if (File.Exists (directory + "offlinelogs")) {
			string line;
			using (StreamReader reader = new StreamReader(directory + "offlinelogs")) {
				while((line = reader.ReadLine()) != null)  
				{  
					logsToUpload.Add (line);
				}
			}
			File.Delete (directory + "offlinelogs");
			Debug.Log ("Detected " + logsToUpload.Count + " dumped entries");
		}

	}
}

