using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ResultsButton : MonoBehaviour {

    [SerializeField]
    private TimeVisController timeVisController;

    [SerializeField]
    private HeatMapController heatMapController;

    [SerializeField]
    Text dataDescription;
    private string dataDescTemplate = null;

    private string gameType;
    private int difficultyLevel;
    private int sessionAmount;

    // Use this for initialization
	void Awake () {
        dataDescTemplate = dataDescription.text;
	}

    public void SetData(string gameType, int difficultyLevel, int sessionAmount)
    {
        string gameTypeText = "???";
        if (gameType == "gameA") {
            gameTypeText = "1-2-3-4";
        } else if (gameType == "gameB") {
            gameTypeText = "1-A-2-B";
        }
        if (dataDescTemplate == null) {
            dataDescTemplate = dataDescription.text;
        }
        this.gameType = gameType;
        this.difficultyLevel = difficultyLevel;
        this.sessionAmount = sessionAmount;
        Debug.Log("Set Data difficultyLevel: " + difficultyLevel);
        int circleAmountNumber = Utils.TargetAmountFromDifficulty(difficultyLevel);
        string circleAmount;
        Debug.Log("circleAmountNumber: " + circleAmountNumber);
        if (circleAmountNumber > -1) {
            circleAmount = circleAmountNumber.ToString();
        } else {
            circleAmount = "????";
        }

        Debug.Log("SetData: gameType:" + gameTypeText + ", circleAmount:" + circleAmount + ", sessionAmount:" + sessionAmount + ", template:" + dataDescTemplate);
        if (sessionAmount > 1) {
            dataDescription.text = string.Format(dataDescTemplate, gameTypeText, circleAmount, sessionAmount);
        } else {
            dataDescription.text = string.Format(dataDescTemplate.Remove(dataDescTemplate.Length - 1), gameTypeText, circleAmount, sessionAmount);
        }
    }

    public void TimeVisButton_Clicked()
    {
        Debug.Log("ResultsButton: gameType(" + gameType + ") difficultyLevel(" + difficultyLevel + ")");
        timeVisController.Init(gameType, difficultyLevel);
    }

    public void HeatMapButton_Clicked()
    {
        Debug.Log("ResultsButton: gameType(" + gameType + ") difficultyLevel(" + difficultyLevel + ")");
        heatMapController.Init(gameType, difficultyLevel);
    }

}
