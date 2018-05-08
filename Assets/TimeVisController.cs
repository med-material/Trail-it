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
    private DataManager dataManager;
    List<DataManager.SessionData> sessionDataList;

	List<VisualDataPoint> visualDataPoints;

	[SerializeField]
	private GameObject visualDataPointPrefab;

    [SerializeField]
    private GameObject dataPointCanvas;

    [SerializeField]
	private GameObject axisYTemplate;
    private Axis axisY;

    [SerializeField]
	private GameObject axisXTemplate;
    private Axis axisX;

    [SerializeField]
    private LineRenderer lineRenderer;
    private int vertexIndex = -1;

    [SerializeField]
    private GameObject timeVisCanvas;

    private List<string> axisXLabels;
    private List<string> axisXSubLabels;

    private int highestDayOfYear;
    private int lowestDayOfYear;

    public void InitWithCurrentSettings()
    {
        this.Init();
    }

    public void Init(string gameType = null, int difficultyLevel = -1)
    {
        visualDataPoints = new List<VisualDataPoint>();
        axisXLabels = new List<string>();
        axisXSubLabels = new List<string>();
        vertexIndex = -1;

        // use some sensible defaults based on the data from the latest session (filtered).
        sessionDataList = dataManager.GetSessionDataList();

        if (sessionDataList.Count > 0) {
            // Instantiate data points based on the session data list
            List<List<DataPoint>> dataPointLists = new List<List<DataPoint>>();

            int dL;
            string gT;

            if (gameType == null && difficultyLevel == -1) {
                dL = sessionDataList.Last().difficultyLevel;
                gT = sessionDataList.Last().gameType;
            } else {
                dL = difficultyLevel;
                gT = gameType;
            }
				
            int currentDayOfYear = -1;
			List<System.DateTime> dates = new List<System.DateTime> ();
            List<DataPoint> dpList;
            dpList = new List<DataPoint>();
            dataPointLists.Add(dpList);
            lowestDayOfYear = currentDayOfYear;
            highestDayOfYear = currentDayOfYear;
            foreach (var session in sessionDataList) {
                if (session.medianReactionTime > -1.0f && session.gameType == gT && session.difficultyLevel == dL) {
                    if (session.timestamp.Year > 1 && session.medianReactionTime > -1.0f) {
						if (dates.Count > 0 && dates.Last().DayOfYear == session.timestamp.DayOfYear) {
                            DataPoint dataPoint = ScriptableObject.CreateInstance<DataPoint>();
                            dataPoint.x = session.timestamp.DayOfYear;
                            dataPoint.y = session.medianReactionTime;
                            dataPoint.sessionData = session;
                            dataPointLists.Last().Add(dataPoint);
                        } else {
                            dpList = new List<DataPoint>();
                            dataPointLists.Add(dpList);
                            DataPoint dataPoint = ScriptableObject.CreateInstance<DataPoint>();
                            dataPoint.x = session.timestamp.DayOfYear;
                            dataPoint.y = session.medianReactionTime;
                            dataPoint.sessionData = session;
                            dataPointLists.Last().Add(dataPoint);
							dates.Add (session.timestamp);
                        }
							
                    }
                }
            }
			dates = dates.OrderBy (x => x.Date).ToList ();
			highestDayOfYear = dates.Last ().DayOfYear;
			lowestDayOfYear = dates.First ().DayOfYear;
			Debug.Log ("lowestDayOfYear is " + lowestDayOfYear);
			Debug.Log ("highestDayOfYear is " + highestDayOfYear);

            Debug.Log("Created " + dataPointLists.Count + " lists with datapoints.");
            if (dataPointLists.Count > 0) {
                foreach (var list in dataPointLists) {
                    if (list.Count > 0) {
                        CreateVisualDataPoint(list);
                        Debug.Log("Created VisualDataPoint for " + list.Count + " datapoints.");
                    }

                }

                CalculateHighScores();

                // Highlight the latest training session
                visualDataPoints.Last().SetPrimary(true);



				for (var day = dates.First().Date; day.Date <= dates.Last().Date; day = day.AddDays(1)) {
					string labelString = day.DayOfWeek.ToString();
					if (day.DayOfYear == System.DateTime.Today.DayOfYear) {
						labelString = "i Dag";
					}
					string subLabelString = string.Format("{0}. {1}", day.Day, day.ToString("MMMM"));
					axisXLabels.Add(labelString);
					axisXSubLabels.Add(subLabelString);
				}


                CreateXAxis();
                CreateYAxis();

                // Calculate the mapping of our datapoints.
                CalculateMapping();
                StartCoroutine(SpawnDataPoints());
            }

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

    public void ClearTimeVis()
    {
        foreach (var dp in visualDataPoints) {
            Destroy(dp.gameObject);
        }

        Destroy(axisX.gameObject);
        Destroy(axisY.gameObject);

        if (lineRenderer.positionCount > 0) {
            lineRenderer.positionCount = 0;
            vertexIndex = -1;
        }
        timeVisCanvas.SetActive(false);
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
        GameObject axis = (GameObject)Instantiate(axisXTemplate, this.transform);
        axis.SetActive(true);
        axisX = axis.GetComponent<Axis>();
        axisX.SetShowAxis(true);
        // Set AxisLabels to use at every 1.0f step.
        axisX.SetRawDisplayRange(lowestDayOfYear, highestDayOfYear);
        axisX.SetAxisLabels(axisXLabels, 1.0f, axisXSubLabels);

        Debug.Log("axisX rawDiplayRange: (" + lowestDayOfYear + "," + highestDayOfYear + ")");
    }

    private void CreateYAxis()
    {
        GameObject axis = (GameObject)Instantiate(axisYTemplate, dataPointCanvas.transform);
        axis.SetActive(true);
        axisY = axis.GetComponent<Axis>();
		var currentSession = sessionDataList.Last();

        float maxLimit = -1.0f;
		foreach (var session in sessionDataList) {
			if (maxLimit < session.medianReactionTime) {
				maxLimit = session.medianReactionTime;
			}
		}

        // Y axis is not tied to any visual representation currently so we just instantiate a new Axis object.
        float upperY = currentSession.medianReactionTime * 2;

        // our Y axis should minimum show a 2 second range.
        if (upperY < 5.0f) {
            upperY = 5.0f;
        }

        axisY.SetRawDisplayRange(0.0f, upperY);
        //axisY.SetValueLimits(0.0f, maxLimit);
        Debug.Log("axisY rawDisplayRange: (" + 0.0f + "," + currentSession.medianReactionTime * 2 + ")");
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
