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

    int currentSessionIndex = 0;
    DataManager.SessionData currentSession;

    [SerializeField]
    HeatMapField[] upperFields;
    [SerializeField]
    HeatMapField[] lowerFields;

    public void Start()
    {
        sessionDataList = dataManager.GetSessionDataList();
        currentSessionIndex = sessionDataList.Count -1;

        if (sessionDataList.Count > 1) {
            sessionSlider.gameObject.SetActive(true);
            sessionSlider.minValue = 1;
            sessionSlider.maxValue = sessionDataList.Count-1;
            sessionSlider.value = sessionDataList.Count - 1;
        }
        currentSession = sessionDataList[currentSessionIndex];
        PopulateHeatmap();
        UpdateDay();
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
            dateText.text = string.Format("{0}. {1}", timestamp.Day, timestamp.ToString("MMMM").ToUpper());
        } else {
            weekdayText.text = "???";
            dateText.text = "???";
        }
    }

    public void PopulateHeatmap()
    {
        try {
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
                        upperFields[j].SetHeatMapColor(color);
                        upperFields[j].SetHeatMapValue(heatMapValues[j, i]);
                        upperFields[j].SetHeatMapDetails(currentSession.fieldOutlierCount[j, i], currentSession.fieldAssistanceCount[j, i]);
                    } else if (i == 0) {
                        lowerFields[j].SetHeatMapColor(color);
                        lowerFields[j].SetHeatMapValue(heatMapValues[j, i]);
                        lowerFields[j].SetHeatMapDetails(currentSession.fieldOutlierCount[j, i], currentSession.fieldAssistanceCount[j, i]);
                    }
                }
            }

        } catch (System.NullReferenceException e) {
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
        currentSession = sessionDataList[currentSessionIndex];
        PopulateHeatmap();
        UpdateDay();
    }

}
