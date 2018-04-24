using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class VisualDataPoint : MonoBehaviour {

    private List<DataPoint> rawDatapoints;

    public float x = 0.5f;
    public float y = 0.5f;

    public RectTransform canvas;
    private Text subText = null;
    private string subTextTemplate;

    // Use this for initialization
	void Awake () {
        if (subText == null) {
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
        subText = this.gameObject.GetComponentInChildren<Text>();
        subTextTemplate = subText.text;
        subText.text = "???";
    }

    public void UpdateText()
    {
        if (subText == null) {
            InitText();
        }
        subText.text = string.Format(subTextTemplate, GetRepresentedYValue().ToString("0.00"));
    }

    public void SetPrimary(bool isPrimary)
    {
        // change opacity of our labelBg
        // change color of our text
    }


    public void DataPoint_Clicked()
    {
        
    }

}
