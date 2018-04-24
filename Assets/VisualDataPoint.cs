using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class VisualDataPoint : MonoBehaviour
{

    private List<DataPoint> rawDatapoints;

    public float timeSpent = 0.0f;
    public int score = -1;

    public float x = 0.5f;
    public float y = 0.5f;

    [SerializeField]
    private GameObject defaultHolder;
    [SerializeField]
    private Text defaultText;

    [SerializeField]
    private GameObject primaryHolder;
    [SerializeField]
    private Text primaryText;

    [SerializeField]
    public Animator dataPointVisual;

    [SerializeField]
    private Text trainingSummaryText;
    private string trainingSummaryTemplate;

    [SerializeField]
    private Text trainingHighScoreText;
    private string trainingHighScoreTemplate;

    private bool primary = false;

    private string textTemplate = null;

    // Use this for initialization
    void Awake()
    {
        trainingSummaryTemplate = trainingSummaryText.text;
        trainingHighScoreTemplate = trainingHighScoreText.text;

        if (textTemplate == null) {
            InitText();
        }
    }

    public void SetRawDataPoints(List<DataPoint> newRawDataPoints)
    {
        rawDatapoints = newRawDataPoints;
        if (rawDatapoints.Count > 0) {
            UpdateText();
        }
    }

    public void AddRawDataPoint(DataPoint dataPoint)
    {
        rawDatapoints.Add(dataPoint);
        if (rawDatapoints.Count > 0) {
            UpdateText();
        }
    }

    public int GetDataPointCount()
    {
        return rawDatapoints.Count();
    }

    public float GetRepresentedXValue()
    {
        var xValues = new List<float>();

        foreach (var datapoint in rawDatapoints) {
            xValues.Add(datapoint.x);
        }
        return xValues.Average(item => (float)item);
    }

    public float GetRepresentedYValue()
    {
        var yValues = new List<float>();

        foreach (var datapoint in rawDatapoints) {
            yValues.Add(datapoint.y);
        }
        return yValues.Average(item => (float)item);
    }

    private void InitText()
    {
        Text text = this.gameObject.GetComponentInChildren<Text>();
        textTemplate = text.text;
    }

    public void UpdateText()
    {
        if (textTemplate == null) {
            InitText();
        }

        Text textToChange;

        if (primary) {
            defaultHolder.SetActive(false);
            primaryHolder.SetActive(true);
            textToChange = primaryText;
        } else {
            defaultHolder.SetActive(true);
            primaryHolder.SetActive(false);
            textToChange = defaultText;
        }

        textToChange.text = string.Format(textTemplate, GetRepresentedYValue().ToString("0.00"));
    }

    public bool GetPrimary()
    {
        return primary;
    }

    public void SetPrimary(bool isPrimary)
    {
        primary = isPrimary;
        UpdateText();
    }

    public void StartPrimaryAnimation()
    {
        dataPointVisual.SetBool("Primary", primary);
    }

    public void DataPoint_Clicked()
    {
        trainingSummaryText.text = string.Format(trainingSummaryTemplate, timeSpent);
        if (score > 1) {
            trainingHighScoreText.text = string.Format(trainingHighScoreTemplate, score.ToString() + ". ");
        } else {
            trainingHighScoreText.text = string.Format(trainingHighScoreTemplate, "");
        }

        // somehow connect annotation here?
    }

}
