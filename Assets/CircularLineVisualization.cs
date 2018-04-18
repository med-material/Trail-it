using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CircularLineVisualization : MonoBehaviour {

    [SerializeField]
    LineRenderer lineRenderer;

    float theta = 0.0f;

    float centerX;
    float centerY;
    float radius;

    RectTransform rTransform;

    bool startDrawing = false;

    [SerializeField]
    float duration = 1.0f;

    [SerializeField]
    float delay = 1.0f;
    private float startTime;

    float numberIncrement = 0.0f;

    float fullNumber = -1;
    float countTarget = -1;
    float currentCount = -1.0f;
    int vertexIndex = -1;
    float startNumber = 0;
    float currentXPos = 0;
    float currentYPos = 0;
    bool shouldVis = false;

   //     -150    0      150
   //      300   300     300
   // +-------------------------+
   // |    |              |     |
   // |    |              |     |
   // |    |              |     |
   // +-150|      0       | 150 |
   // | 150|     150      | 150 |
   // |    |              |     |
   // |    |              |     |
   // |    |              |     |
   // +-------------------------+
   //
   //    -150     0      150
   //      0      0       0

    // Use this for initialization
	void Start () {
        startTime = Time.time;
        rTransform = this.gameObject.GetComponent<RectTransform>();
        Vector2 wRectCenter = rTransform.rect.center;
        Vector2 wRectMax = rTransform.rect.max;
        Vector2 wRectMin = rTransform.rect.min;
        centerX = wRectCenter.x;
        centerY = wRectCenter.y;

        radius = ((wRectMax.y - wRectMin.y) / 2.5f);

        Debug.Log("centerX: " + centerX + ", centerY: " + centerY);
        /*if (startNumber == 0.0f) {
            theta = (0.0f / fullNumber) * (2 * Mathf.PI);
            currentXPos = centerX + radius * (Mathf.Cos(theta));
            currentYPos = centerY - radius * (Mathf.Sin(theta));
            vertexIndex++;
            lineRenderer.positionCount++;
            lineRenderer.SetPosition(vertexIndex, new Vector3(currentXPos, currentYPos, 90.00f));
        }*/

	}
	
	// Update is called once per frame
    public void Update() {
        if (shouldVis) {
            if (currentCount < countTarget && delay < (Time.time - startTime)) {
                Debug.Log(numberIncrement);
                currentCount = Mathf.Lerp(startNumber, fullNumber, numberIncrement);
                theta = (currentCount / fullNumber) * (2 * Mathf.PI);
                Debug.Log(theta + " = " + "((float)" + currentCount + " / (float)" + fullNumber + ") * 360");
                currentXPos = centerX + radius * (Mathf.Cos(theta));
                currentYPos = centerY - radius * (Mathf.Sin(theta));
                vertexIndex++;
                lineRenderer.positionCount++;
                lineRenderer.SetPosition(vertexIndex, new Vector3(currentXPos, currentYPos, 90.00f));
                numberIncrement += Time.fixedDeltaTime / duration;
                Debug.Log("vertIndex[" + vertexIndex + "] x(" + currentXPos + ") y(" + currentYPos + ") positionCount[" + lineRenderer.positionCount + "] theta(" + theta + ")");
            } /*else if (currentCount >= countTarget) {
                theta = (countTarget / fullNumber) * (2 * Mathf.PI);
                currentXPos = centerX + radius * (Mathf.Cos(theta));
                currentYPos = centerY - radius * (Mathf.Sin(theta));
                vertexIndex++;
                lineRenderer.positionCount++;
                lineRenderer.SetPosition(vertexIndex, new Vector3(currentXPos, currentYPos, 90.00f));
                shouldVis = false;
            }*/
        }
	}


    public void SetTargetWholeNumber(int theTargetNumber, int theStartNumber, int theFullNumber)
    {
        fullNumber = theFullNumber;
        countTarget = theTargetNumber;
        currentCount = startNumber;
        startNumber = theStartNumber;
        shouldVis = true;
    }
}