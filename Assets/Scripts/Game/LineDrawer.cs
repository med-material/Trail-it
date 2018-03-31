using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class LineDrawer : MonoBehaviour
{

    public GameObject linePrefab;
    public float minDist;
    public int nextTarget;
    public Color normalColor;
    public Color correctColor;
    public Color errorColor;

    private List<LineRenderer> _lines; // All the lines 

    private float lineSize;
    [SerializeField]
    private float lineScalar = 75f;

    [SerializeField]
    private float fadeTimeScaler = 10f;

    private int vertexIndex;

    // Use this for initialization
    void Start()
    {
        _lines = new List<LineRenderer>();
        lineSize = Camera.main.orthographicSize / lineScalar;
    }

    public void StartLine(Vector3 startPos)
    {
        LineRenderer tmpLR;
        tmpLR = Instantiate(linePrefab).GetComponent<LineRenderer>();
        tmpLR.transform.parent = this.transform;
        tmpLR.startWidth = lineSize;
        tmpLR.endWidth = lineSize;
        tmpLR.startColor = normalColor;
        tmpLR.endColor = normalColor;

        vertexIndex = 0;
        tmpLR.positionCount++;
        tmpLR.SetPosition(vertexIndex, startPos);
        _lines.Add(tmpLR);
    }

    public void DrawLine(Vector3 linePos, HitType hit)
    {
        int curIndex = _lines.Count - 1;

        linePos.z = 1f; // This is kinda hacky, I know, but we want the line to appear behind the targets. 

        vertexIndex++;
        _lines[curIndex].positionCount++;
        _lines[curIndex].SetPosition(vertexIndex, linePos);

        // If hit is a correct hit
        if (hit == HitType.TargetHit || hit == HitType.TargetHitLevelComplete)
        {
            _lines[curIndex].startColor = correctColor;
            _lines[curIndex].endColor = correctColor;
            StartLine(linePos); 
        } 
        else if (hit == HitType.Backtracking)
        {
            EndLine();
        }
        else if (hit == HitType.ObstacleHit || hit == HitType.WrongTargetHit || hit == HitType.LastValidHit) // If hit is -1, it was an incorrect hit
        {
            _lines[curIndex].startColor = errorColor;
            _lines[curIndex].endColor = errorColor;
            EndLine();
            StartLine(linePos); 
        }
    }

    public void EndLine()
    {
        StartCoroutine(FadeLine(_lines[_lines.Count - 1]));
    }

    public void EndLine(LineRenderer LR)
    {
        StartCoroutine(FadeLine(LR));
    }

    IEnumerator FadeLine(LineRenderer curLine)
    {
        float t = 1f;

        while (t > 0f)
        {
			if (curLine != null) {
				curLine.startColor = new Color(curLine.startColor.r, curLine.startColor.g, curLine.startColor.b, t);
	            curLine.endColor = new Color(curLine.startColor.r, curLine.startColor.g, curLine.startColor.b, t);
			}
	            t -= (Time.deltaTime * Time.deltaTime * (3 - 2 * Time.deltaTime)) * fadeTimeScaler; // Smoothstep x * x * (3 - 2 * x)
            yield return null;
        }

		if (curLine != null) {
	        curLine.startColor = new Color(curLine.startColor.r, curLine.startColor.g, curLine.startColor.b, 0f);
	        curLine.endColor = new Color(curLine.startColor.r, curLine.startColor.g, curLine.startColor.b, 0f);

	        Destroy(curLine.gameObject);
		}
    }

    public void ClearAll()
    {
        //alreadyHit = 0;
		if (_lines != null && _lines.Count > 0 && transform != null) {
			StopCoroutine ("FadeLine"); 
			_lines.Clear ();
			for (int i = 0; i < transform.childCount; i++) {
				Destroy (transform.GetChild (i).gameObject);
			}
		}
    }
}
