using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class VisualDataPoint : MonoBehaviour {

    public List<DataPoint> rawDatapoints;

    public float x = 0.5f;
    public float y = 0.5f;

    public RectTransform canvas;

    // Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
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


    public void DataPoint_Clicked()
    {
        
    }

}
