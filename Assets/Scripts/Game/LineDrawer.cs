using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class LineDrawer : MonoBehaviour
{

    public GameObject linePrefab;
    //public float lineWidth;
    //public float lineZPos;
    public float minDist;
    public int nextTarget;
    public Color normalColor;
    public Color correctColor;
    public Color errorColor;
    //public GameLevel gameLevel;

    //private int alreadyHit = 0;
    //private bool needNewLine = true;
    //private GameObject newLine;
    //private List<LineRenderer> lines = new List<LineRenderer>();
    // private LineRenderer fadeLine;
    // private LineRenderer oldLine;
    //private int vertices;

    //private Camera mainCam;

    //private Vector3 newPos;
    //private Vector3 tempPos;

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
        tmpLR.numPositions++;
        tmpLR.SetPosition(vertexIndex, startPos);
        _lines.Add(tmpLR);
    }

    public void DrawLine(Vector3 linePos, HitType hit)
    {
        int curIndex = _lines.Count - 1;

       // if (Vector3.Distance(linePos, tempPos) > minDist)
       // {
            vertexIndex++;
            _lines[curIndex].numPositions++;
            _lines[curIndex].SetPosition(vertexIndex, linePos);
       // }

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

    //// Update is called once per frame
    //void Update()
    //{
    //    return;

    //    if (Input.GetKeyUp(KeyCode.Return))
    //    {

    //        ClearAll();
    //    }

    //    if (Input.GetMouseButtonDown(0))
    //    {

    //        NewLine();
    //        lines[lines.Count - 1].startColor = normalColor;
    //        lines[lines.Count - 1].endColor = normalColor;
    //    }

    //    // If mouse is released
    //    // is our position a circle?
    //    // then take the coordinates in vertices and redraw them as light green. 

    //    if (Input.GetMouseButton(0))
    //    {

    //        if (needNewLine)
    //        {

    //            NewLine();
    //            needNewLine = false;
    //        }

    //        LineRenderer curLine = lines[lines.Count - 1];
    //        newPos = mainCam.ScreenToViewportPoint(Input.mousePosition);

    //        if (Vector3.Distance(newPos, tempPos) > minDist)
    //        {

    //            tempPos = newPos;

    //            vertices++;
    //            //currentLine.SetVertexCount(vertices);
    //            curLine.numPositions = vertices;
    //            curLine.SetPosition(vertices - 1, mainCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, lineZPos)));
    //        }

    //        RaycastHit2D hit = Physics2D.Raycast(mainCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, lineZPos)), -Vector2.up);

    //        if (hit)
    //        {
    //            //Debug.Log ("Hit: " + hit.collider.GetComponent<Target> ().GetID () + "Target " + gameLevel.GetCurrent ());
    //            Target target = hit.collider.GetComponent<Target>();
    //            int hitID = target.GetID();
    //            if (target.IsGreen() && hitID > alreadyHit)
    //            {
    //                Debug.Log("Color Time");
    //                curLine.startColor = correctColor;
    //                curLine.endColor = correctColor;
    //                curLine.numPositions = vertices;
    //                curLine.SetPosition(vertices - 1, target.transform.position);

    //                needNewLine = true;

    //                alreadyHit++;
    //            }
    //            else if (target.IsRed() || target.GetObstacle())
    //            {
    //                curLine.startColor = errorColor;
    //                curLine.endColor = errorColor;
    //                curLine.numPositions = vertices;
    //                curLine.SetPosition(vertices - 1, target.transform.position);
    //                Debug.Log("IM here ready to start");
    //                StartCoroutine("FadeLine", curLine);
    //                needNewLine = true;
    //                // TODO: else if mouse button GetMouseButtonDown is false, then start co-routine to iteratively delete the line again.
    //            }
    //            else
    //            {
    //                Debug.Log("OFF");
    //                curLine.startColor = normalColor;
    //                curLine.endColor = normalColor;
    //            }
    //        }
    //    }
    //    else if (Input.GetMouseButtonUp(0) && lines.Count > 0)
    //    {
    //        if (lines[lines.Count - 1].startColor.a > 0.8f)
    //        {
    //            StartCoroutine("FadeLine", lines[lines.Count - 1]);
    //            needNewLine = true;
    //        }
    //    }
    //}

    IEnumerator FadeLine(LineRenderer curLine)
    {
        float t = 1f;

        while (t > 0f)
        {
            curLine.startColor = new Color(curLine.startColor.r, curLine.startColor.g, curLine.startColor.b, t);
            curLine.endColor = new Color(curLine.startColor.r, curLine.startColor.g, curLine.startColor.b, t);

            t -= (Time.deltaTime * Time.deltaTime * (3 - 2 * Time.deltaTime)) * fadeTimeScaler; // Smoothstep x * x * (3 - 2 * x)
            yield return null;
        }

        curLine.startColor = new Color(curLine.startColor.r, curLine.startColor.g, curLine.startColor.b, 0f);
        curLine.endColor = new Color(curLine.startColor.r, curLine.startColor.g, curLine.startColor.b, 0f);

        Destroy(curLine.gameObject);
    }


    //private void NewLine()
    //{

    //    newLine = (GameObject)Instantiate(linePrefab);
    //    newLine.transform.parent = this.transform;
    //    vertices = 0;

    //    LineRenderer newLineComp = newLine.GetComponent<LineRenderer>();
    //    newLineComp.startWidth = mainCam.orthographicSize / 100 * lineWidth;
    //    newLineComp.endWidth = mainCam.orthographicSize / 100 * lineWidth;
    //    //currentLine.SetWidth(mainCam.orthographicSize/100*lineWidth, mainCam.orthographicSize/100*lineWidth);

    //    tempPos = mainCam.ScreenToViewportPoint(Input.mousePosition);

    //    vertices++;
    //    //currentLine.SetVertexCount(vertices);
    //    newLineComp.numPositions = vertices;
    //    newLineComp.SetPosition(vertices - 1, mainCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, lineZPos)));
    //    lines.Add(newLineComp);
    //}

    public void ClearAll()
    {
        //alreadyHit = 0;
        StopCoroutine("FadeLine"); 
        _lines.Clear();
        for (int i = 0; i < transform.childCount; i++)
        {
            Destroy(transform.GetChild(i).gameObject);
        }
    }
}
