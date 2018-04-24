using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public enum AxisType
{
    x,
    y
}

public struct AxisLabel {
	public Text textComp;
    public Text subTextComp;
	public float  rawValue;
	public GameObject obj;
}

public class Axis : MonoBehaviour
{

    private List<AxisLabel> labels;

    private List<string> axisLabels;

    [SerializeField]
    private GameObject labelTemplate;
    [SerializeField]
    private GameObject labelParent;

    [SerializeField]
    private GameObject visualAxis;


    [SerializeField]
    private RectTransform scrollRect;

    [SerializeField]
    private RectTransform timeVisCanvas;

    private float labelSpacing = 0.0f;
    private float labeloffset = 0.0f;

    //[SerializeField]
    //private float MinimumSpacing = 0.25f;
    //[SerializeField]
    //private float MaximumSpacing = 1.00f;

    private GameObject visualAxisHolder;
    private RectTransform visualAxisRect;
    private bool showAxis = false;

    // this is the range we currently are display.
    private float[] rawDisplayRange = { 0.00f, 0.00f };
    private float labelFrequency = 1.0f;
    private float currentSpacing = -1.0f;
    private float maximumSpacing = 300.0f;



    [SerializeField]
    private AxisType axisType = AxisType.x;

    HorizontalLayoutGroup horLayoutGroup;
    VerticalLayoutGroup verLayoutGroup;

    // Use this for initialization
    void Awake()
    {
        labels = new List<AxisLabel>();
        visualAxisHolder = this.gameObject;
        visualAxisRect = visualAxisHolder.GetComponent<RectTransform>();
        labelParent.SetActive(false);
        visualAxis.SetActive(false);
    }

    public void SetShowAxis(bool showTheAxis)
    {
        labelParent.SetActive(true);
        visualAxis.SetActive(true);
        showAxis = showTheAxis;
        RectTransform labelRect = labelTemplate.GetComponent<RectTransform>();
        labeloffset = labelRect.rect.width;
        labelSpacing = 100.0f;
    }

    public void SetAxisType(AxisType type)
    {
        axisType = type;
    }

    public void SetAxisLabels(List<string> newAxisLabels, float frequency, List<string> newAxisSubLabels = null)
    {
        // axisLabels should contain every single possible label from start to end, by the frequency specified
        labelFrequency = frequency;

        labels.Clear();

        // calculate whether we need to adjust width of scroll rect.
        float labelAmount = (rawDisplayRange[1] - rawDisplayRange[0]) / labelFrequency;
        RectTransform labelRect = labelTemplate.GetComponent<RectTransform>();
        if (axisType == AxisType.x) {
            if (labelAmount * (labelRect.rect.width + labelSpacing) > timeVisCanvas.rect.width) {
                float height = scrollRect.sizeDelta.y;
                scrollRect.sizeDelta = new Vector2(labelAmount * (labelRect.rect.width + labelSpacing), height);
            }
        }

		for (float i = rawDisplayRange[0]; i <= rawDisplayRange[1]; i += frequency) {
			string currentText = newAxisLabels[0];

            string currentSubText = null;
            if (newAxisSubLabels != null) {
                currentSubText = newAxisSubLabels[0];
                newAxisSubLabels.RemoveAt(0);
            }

			CreateAxisLabel(currentText, i, currentSubText);
			newAxisLabels.RemoveAt(0);
		}

        Debug.Log("Axis: Created " + labels.Count + " labels.");
    }

    public float RawPointToViewportPoint(float rawDataValue, bool isLabel = false)
    {
        float maxView = GetViewMax();
        float minView = GetViewMin();
        float viewWidth = (maxView - minView) - labeloffset;

		float relativeRawValue = (rawDataValue - rawDisplayRange[0]);
		float relativeMaxDisplayRange = rawDisplayRange[1] - rawDisplayRange[0];
		float dataPointPosition = (viewWidth / relativeMaxDisplayRange) * relativeRawValue;
		Debug.Log(dataPointPosition + " = (" + viewWidth + " / " + rawDisplayRange[1] + ") * " + relativeRawValue);

        if (showAxis == false) {
            return dataPointPosition;
        }
        else if (isLabel) {
            return dataPointPosition;
        } else {
            float result = (labeloffset / 2) + dataPointPosition;
            Debug.Log(result + "= (" + labeloffset + " / " + 2 + ") + " + dataPointPosition);
            return result;
        }


        //float rawRange = 1;
        //float perPointDistance = 0.0f;
        //rawRange = (rawDisplayRange[1] - rawDisplayRange[0]) + 1;
        //perPointDistance = (maxView - minView) / rawRange;
		//float viewportPoint = (labeloffset / 2) + ((rawDataValue - rawDisplayRange[0]) / (maxView - minView)) * perPointDistance;
        //Debug.Log("perPointDistance: " + perPointDistance + " = (" + maxView + " - " + minView + ") / (" + rawRange + " );");
		//Debug.Log(viewportPoint + " = " + (labeloffset / 2) + " + (" + rawDataValue + " - " + rawDisplayRange[0] + ") / ((" + maxView + " - " + minView + ") * " + perPointDistance + ");");
		//return viewportPoint;


    }

	public void CreateAxisLabel(string text, float labelRawValue, string subtext = null) {
			AxisLabel label = new AxisLabel();

    		label.rawValue = labelRawValue;	
            label.obj = (GameObject)Instantiate(labelTemplate, labelParent.transform);
            label.obj.SetActive(true);
            float viewPosition = RawPointToViewportPoint(labelRawValue, true);
            RectTransform labelRect = label.obj.GetComponent<RectTransform>();
            if (axisType == AxisType.x) {
                labelRect.anchoredPosition = new Vector3(viewPosition, 0.0f, 0.0f);
            }
            
            Text[] textComps = label.obj.GetComponentsInChildren<Text>();
            label.textComp = textComps[0];
			label.textComp.text = text;

            label.subTextComp = textComps[1];
            if (subtext != null) {
                label.subTextComp.text = subtext.ToUpper();
                label.subTextComp.gameObject.SetActive(true);
            } else {
                label.subTextComp.text = "";
                label.subTextComp.gameObject.SetActive(false);
            }


            labels.Add(label);
            
	}

    /*public void SetValueLimits(float minimum, float maximum)
    {
        displayLimit = new float[] {minimum, maximum};

        if (showAxis && labels.Count > 0) {
            // make the according zoom, so that the minimum and maximum is in view.
            // determine how many labels to show, based on how many labels there are and the frequency by which they are shown.
            int newLabelCount = (int)(labelFrequencyZoom1 / (displayRange[1] - displayRange[0]));

            if (labels.Count > newLabelCount) {
                // Destroy each label object that go past the range we display.
                for (int i = newLabelCount; i < labels.Count; i++) {
                    Destroy(labels[i]);
                }
            } else if (labels.Count < newLabelCount) {
                for (int i = labels.Count; i < newLabelCount; i++) {
                    GameObject label = (GameObject)Instantiate(labelTemplate, labelTemplate.transform);
                    Text labelText = label.GetComponent<Text>();
                    labelText.text = labelsZoom1[i];
                    labels.Add(label);
                }
            }

        }


    }*/

    // SetDisplayRange scales our canvas in such a way so that we can show the minimum and maximum values.
    public void SetRawDisplayRange(float minimum, float maximum)
    {
        rawDisplayRange = new float[] { minimum, maximum };

    }


    public float GetViewMax()
    {
        if (axisType == AxisType.x) {
            Debug.Log("AxisX ViewMax: " + visualAxisRect.rect.width);
            return visualAxisRect.rect.width;

        } else {
            Debug.Log("axisY ViewMax: " + visualAxisRect.rect.height);
            return visualAxisRect.rect.height;            
        }
    }

    public float GetViewMin()
    {
        if (axisType == AxisType.x) {
            Debug.Log("axisX ViewMin: " + 0.0f);
            return 0.0f;
        } else {
            Debug.Log("axisY ViewMin: " + 0.0f);
            return 0.0f;
        }
    }

    public void Zoom(ZoomType zoomType)
    {
        // Modify the spacing between labels until we hit a limit.
        // if we hit the spacing limit, we merge labels together and reset the spacing.

        // update the displayRange variable to keep it in sync with what is currently displayed.

        // check that labels are not null to determine maximum zooming levels.
    }
}
