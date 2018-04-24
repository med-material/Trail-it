using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public enum ZoomType
{
    ZoomIn,
    ZoomOut
}

public class TimeVisController : MonoBehaviour {

    [SerializeField]
    DataManager dataManager;
    List<DataManager.SessionData> sessionDataList;

	List<VisualDataPoint> visualDataPoints;

	[SerializeField]
	private GameObject visualDataPointPrefab;

    [SerializeField]
    private GameObject dataPointCanvas;

    [SerializeField]
	private Axis axisY;

    [SerializeField]
	private Axis axisX;

    [SerializeField]
    private LineRenderer lineRenderer;
    private int vertexIndex = -1;

    private List<string> axisXLabels;
    private List<string> axisXSubLabels;

    private int highestDayOfYear;
    private int lowestDayOfYear;

	// Use this for initialization
	void Start () {
        sessionDataList = dataManager.GetSessionDataList();
        visualDataPoints = new List<VisualDataPoint>();
        axisXLabels = new List<string>();
        axisXSubLabels = new List<string>();

        // use some sensible defaults based on the data from the latest session.

        if (sessionDataList.Count > 0) {
            // Instantiate data points based on the session data list
            List<List<DataPoint>> dataPointLists = new List<List<DataPoint>>();

            int currentDate = -1;
            lowestDayOfYear = currentDate;
            highestDayOfYear = currentDate;
            List<DataPoint> dpList = new List<DataPoint>();
            dataPointLists.Add(dpList);
            foreach (var session in sessionDataList) {
                if (session.timestamp.Year > 1 && session.reactionTime > -1.0f) {
                    if (currentDate == session.timestamp.DayOfYear || currentDate == -1) {
                        currentDate = session.timestamp.DayOfYear;
                        DataPoint dataPoint = ScriptableObject.CreateInstance<DataPoint>();
                        dataPoint.x = session.timestamp.DayOfYear;
                        dataPoint.y = session.reactionTime;
                        dataPoint.sessionData = session;
                        dataPointLists.Last().Add(dataPoint);
                    } else if (session.timestamp.Year > 1) {
                        dpList = new List<DataPoint>();
                        dataPointLists.Add(dpList);
                        DataPoint dataPoint = ScriptableObject.CreateInstance<DataPoint>();
                        dataPoint.x = session.timestamp.DayOfYear;
                        dataPoint.y = session.reactionTime;
                        dataPoint.sessionData = session;
                        dataPointLists.Last().Add(dataPoint);

                        currentDate = session.timestamp.DayOfYear;
                    }

                    if (lowestDayOfYear > currentDate || lowestDayOfYear == -1) {
                        lowestDayOfYear = currentDate;
                    }
                    if (highestDayOfYear < currentDate || highestDayOfYear == -1) {
                        highestDayOfYear = currentDate;
                    }
                }
            }
            Debug.Log("Created " + dataPointLists.Count + " lists with datapoints.");
            foreach (var list in dataPointLists) {
                CreateVisualDataPoint(list);
                Debug.Log("Created VisualDataPoint for " + list.Count + " datapoints.");
            }

            CalculateHighScores();

            // Highlight the latest training session
            visualDataPoints.Last().SetPrimary(true);

            for (int i = lowestDayOfYear; i <= highestDayOfYear; i++) {
                System.DateTime val = new System.DateTime(1111, 1, 1).AddDays(i - 1);


                string labelString = val.DayOfWeek.ToString();
                if (i == highestDayOfYear) {
                    labelString = "i Dag";
                }
                string subLabelString = string.Format("{0}. {1}", val.Day, val.ToString("MMMM"));
                axisXLabels.Add(labelString);
                axisXSubLabels.Add(subLabelString);
            }
            Debug.Log("highestDayOfYear is: " + highestDayOfYear + ", lowestDayOfYear is: " + lowestDayOfYear);

            CreateXAxis();
            CreateYAxis();

            // Calculate the mapping of our datapoints.
            CalculateMapping();
            StartCoroutine(SpawnDataPoints());

        } else {
            Debug.Log("Not enough data!");
        }

	}
	
	// Update is called once per frame
	void Update () {
		// if Interaction
            // Make calls to Axis to do Zoom (we handle pan through horizontal scroll rect)
            // Call CalculateMapping to re-calculate positions of the visualDatapoints.
	}

    private void CalculateHighScores()
    {
        List<VisualDataPoint> rankedDataPoints = visualDataPoints.OrderBy(p => p.GetRepresentedYValue()).ToList();
        for (int i = 0; i < rankedDataPoints.Count; i++) {
            rankedDataPoints[i].score = i + 1;
        }

    }

    // This function creates a visual representation based on 
    private void CreateVisualDataPoint(List<DataPoint> rawDataPoints)
    {
        // instantiate the prefab instead

        GameObject obj = Instantiate(visualDataPointPrefab, dataPointCanvas.transform);
		VisualDataPoint visualDataPoint = obj.GetComponent<VisualDataPoint>();
        visualDataPoint.SetRawDataPoints(rawDataPoints);

        Debug.Log("rawDataPoints length: " + rawDataPoints.Count);
        foreach (var dp in rawDataPoints) {
            visualDataPoint.timeSpent += dp.sessionData.sessionLength;
        }
        Debug.Log("visualDataPoint.timeSpent = " + visualDataPoint.timeSpent);

        visualDataPoints.Add(visualDataPoint);
    }

    private void CreateXAxis()
    {
        axisX.SetShowAxis(true);
        // Set AxisLabels to use at every 1.0f step.
        axisX.SetRawDisplayRange(lowestDayOfYear, highestDayOfYear);
        axisX.SetAxisLabels(axisXLabels, 1.0f, axisXSubLabels);

        Debug.Log("axisX rawDiplayRange: (" + lowestDayOfYear + "," + highestDayOfYear + ")");
    }

    private void CreateYAxis()
    {
		var currentSession = sessionDataList.Last();

        float maxLimit = -1.0f;
		foreach (var session in sessionDataList) {
			if (maxLimit < session.reactionTime) {
				maxLimit = session.reactionTime;
			}
		}

        // Y axis is not tied to any visual representation currently so we just instantiate a new Axis object.
        float upperY = currentSession.reactionTime * 2;

        // our Y axis should minimum show a 2 second range.
        if (upperY < 5.0f) {
            upperY = 5.0f;
        }

        axisY.SetRawDisplayRange(0.0f, upperY);
        //axisY.SetValueLimits(0.0f, maxLimit);
        Debug.Log("axisY rawDisplayRange: (" + 0.0f + "," + currentSession.reactionTime * 2 + ")");
    }

    public void Zoom(ZoomType zoomType)
    {
        // 1. We need to calculate mapping of visual data points
        // 2. We need to tell the axis to zoom a step in or out depending on the direction.
    }

    IEnumerator SpawnDataPoints()
    {
        float t = 0.05f;

        foreach (var dp in visualDataPoints) {
            dp.dataPointVisual.Play("dataPointPopUp");
            dp.gameObject.SetActive(true);
            if (dp.GetPrimary()) {
                dp.StartPrimaryAnimation();
            }
            yield return new WaitForSeconds(t);
        }

        yield return null;
    }

    private void CalculateMapping()
    {
        lineRenderer.positionCount = 0;
        foreach (var dp in visualDataPoints) {
            float x = axisX.RawPointToViewportPoint(dp.GetRepresentedXValue());
            float y = axisY.RawPointToViewportPoint(dp.GetRepresentedYValue());
            RectTransform dpRect = dp.GetComponent<RectTransform>();
            dpRect.anchoredPosition = new Vector3(x, y, 0.0f);


            RectTransform dpCanvasRect = dataPointCanvas.GetComponent<RectTransform>();
            float xoffset = dpCanvasRect.rect.width / 2;
            lineRenderer.positionCount++;
            vertexIndex++;
            lineRenderer.SetPosition(vertexIndex, new Vector3(x - xoffset, y, 90.0f));

        }

        // Here we measure the raw data points and map them to a corresponding set of visual data points
        // based on some parameters.

        // So to do this we basically need to understand how much width we have between each column per axis.
        // And we need to know the maximum raw value we should have.

        // We call this when we do any type of zooming and also initially.




    }

}
