using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HeatMapController : MonoBehaviour {

    [SerializeField]
    private Slider sessionSlider;

    [SerializeField]
    private Text weekdayText;

    [SerializeField]
    private Text dateText;

    [SerializeField]
    DataManager dataManager;

    List<DataManager.SessionData> sessionDataList;
    List<DataManager.SessionData> CompleteSessionDataList;

    int currentSessionIndex = 0;
    DataManager.SessionData currentSession;

    [SerializeField]
    HeatMapField[] upperFields;
    [SerializeField]
    HeatMapField[] lowerFields;

	bool hasInit = false;

    public void InitWithCurrentSettings()
    {
        this.Init();
    }

    public void Init(string gameType = null, int difficultyLevel = -1)
    {
		Debug.Log("Init called");
        CompleteSessionDataList = dataManager.GetSessionDataList();
        Debug.Log("CompleteSessionDataLength: " + CompleteSessionDataList.Count);

        if (gameType == null && difficultyLevel == -1) {
            currentSession = CompleteSessionDataList[CompleteSessionDataList.Count - 1];
            sessionDataList = CompleteSessionDataList.FindAll(s => s.difficultyLevel == currentSession.difficultyLevel && s.gameType == currentSession.gameType);
        } else {
            sessionDataList = CompleteSessionDataList.FindAll(s => s.difficultyLevel == difficultyLevel && s.gameType == gameType);
            currentSession = sessionDataList[sessionDataList.Count - 1];
        }

        currentSessionIndex = sessionDataList.Count - 1;

        Debug.Log("sessionDataListLength: " + sessionDataList.Count);

		if (sessionDataList.Count > 1) {
			sessionSlider.gameObject.SetActive (true);
			sessionSlider.minValue = 0;
			sessionSlider.maxValue = sessionDataList.Count - 1;
			sessionSlider.value = sessionDataList.Count - 1;
		} else {
			sessionSlider.gameObject.SetActive (false);
		}

        currentSession = sessionDataList[currentSessionIndex];
        PopulateHeatmap();
        UpdateDay();
		hasInit = true;
    }

    private void UpdateDay()
    {
        System.DateTime timestamp = currentSession.timestamp;
        if (timestamp.Year > 1) {
            if (timestamp.Date.Equals(System.DateTime.Today)) {
                weekdayText.text = "i Dag";
            } else {
                weekdayText.text = timestamp.DayOfWeek.ToString();
            }
            dateText.text = string.Format("{0}. {1}, KL. {2}", timestamp.Day, timestamp.ToString("MMMM").ToUpper(), timestamp.ToString("HH:mm"));
        } else {
            weekdayText.text = "???";
            dateText.text = "???";
        }
    }

    public void PopulateHeatmap()
    {
        try {
            Debug.Log("currentSession fieldReactionTimes: " + currentSession.fieldReactionTimes);
            float[,] heatMapValues = currentSession.fieldReactionTimes;
            float medianValue = currentSession.medianReactionTime;

            // TODO: When a "Poor" performance is found, downscale other performances that are better,
            // to Mediocre.

            for (int i = 0; i < heatMapValues.GetLength(1); i++) {
                for (int j = 0; j < heatMapValues.GetLength(0); j++) {
                    Debug.Log("adding value " + heatMapValues[j, i] + " to field[" + i + "," + j + "]");
                    HeatMapField.HeatMapColor color = HeatMapField.HeatMapColor.Unknown;
                    if (heatMapValues[j, i] > medianValue * 2.0f) {
                        color = HeatMapField.HeatMapColor.Poor;
                    } else if (heatMapValues[j, i] > 7.5f) {
                        color = HeatMapField.HeatMapColor.Poor;
                    } else if (heatMapValues[j, i] > medianValue * 1.5f) {
                        color = HeatMapField.HeatMapColor.Mediocre;
                    } else if (heatMapValues[j, i] > 5.0f) {
                        color = HeatMapField.HeatMapColor.Mediocre;
                    } else {
                        color = HeatMapField.HeatMapColor.Good;
                    }

                    if (i == 1) {
                        upperFields[j].ResetField();
                        upperFields[j].SetHeatMapColor(color);
                        upperFields[j].SetHeatMapValue(heatMapValues[j, i]);
                        upperFields[j].SetHeatMapDetails(currentSession.fieldOutlierCount[j, i], currentSession.fieldAssistanceCount[j, i]);
                    } else if (i == 0) {
                        lowerFields[j].ResetField();
                        lowerFields[j].SetHeatMapColor(color);
                        lowerFields[j].SetHeatMapValue(heatMapValues[j, i]);
                        lowerFields[j].SetHeatMapDetails(currentSession.fieldOutlierCount[j, i], currentSession.fieldAssistanceCount[j, i]);
                    }
                }
            }

        } catch (System.NullReferenceException e) {
            Debug.LogError(e);
            foreach (var field in upperFields) {
                field.SetHeatMapColor(HeatMapField.HeatMapColor.Unknown);
                field.SetHeatMapValue(-1.0f);
                field.SetHeatMapDetails(-1, -1);
            }

            foreach (var field in lowerFields) {
                field.SetHeatMapColor(HeatMapField.HeatMapColor.Unknown);
                field.SetHeatMapValue(-1.0f);
                field.SetHeatMapDetails(-1, -1);
            }
        }
    }

    public void SessionSlider_OnValueChanged()
    {
		currentSessionIndex = (int)sessionSlider.value;
		if (currentSessionIndex < sessionDataList.Count) {
			currentSession = sessionDataList [currentSessionIndex];
			PopulateHeatmap ();
			UpdateDay ();
		}
    }

}
