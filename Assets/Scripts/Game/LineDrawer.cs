using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class LineDrawer : MonoBehaviour {

	public GameObject linePrefab;
	public float lineWidth;
	public float lineZPos;
	public float minDist;
	public int nextTarget;
	public Color normalColor;
	public Color correctColor;
	public Color errorColor;
	public GameLevel gameLevel;

	private int alreadyHit = 0;
	private bool needNewLine = true;
	private GameObject newLine;
	private List <LineRenderer> lines = new List<LineRenderer>();
	private LineRenderer fadeLine;
	private LineRenderer oldLine;
	private int vertices;

	private Camera mainCam;

	private Vector3 newPos;
	private Vector3 tempPos;

	// Use this for initialization
	void Start () {

		mainCam = GameObject.Find ("Main Camera").GetComponent<Camera> ();
		lineZPos = lineZPos - mainCam.transform.position.z;
	}
	
	// Update is called once per frame
	void Update () {

		if(Input.GetKeyUp(KeyCode.Return)) {

			ClearAll();
		}

		if(Input.GetMouseButtonDown(0)) {

			NewLine();
			lines[lines.Count-1].startColor = normalColor;
			lines[lines.Count-1].endColor = normalColor;
		}

		// If mouse is released
		// is our position a circle?
		// then take the coordinates in vertices and redraw them as light green. 

		if (Input.GetMouseButton (0)) {

			if (needNewLine) {

				NewLine ();
				needNewLine = false;
			}

			LineRenderer curLine = lines [lines.Count - 1];
			newPos = mainCam.ScreenToViewportPoint (Input.mousePosition);

			if (Vector3.Distance (newPos, tempPos) > minDist) {

				tempPos = newPos;

				vertices++;
				//currentLine.SetVertexCount(vertices);
				curLine.numPositions = vertices; 
				curLine.SetPosition (vertices - 1, mainCam.ScreenToWorldPoint (new Vector3 (Input.mousePosition.x, Input.mousePosition.y, lineZPos)));
			}

			RaycastHit2D hit = Physics2D.Raycast (mainCam.ScreenToWorldPoint (new Vector3 (Input.mousePosition.x, Input.mousePosition.y, lineZPos)), -Vector2.up);

			if (hit) {
				Debug.Log ("Hit: " + hit.collider.GetComponent<Target> ().GetID () + "Target " + gameLevel.GetCurrent ());
				Target target = hit.collider.GetComponent<Target> ();
				int hitID = target.GetID ();
				if (target.IsGreen () && hitID > alreadyHit) {
					Debug.Log ("Color Time");
					curLine.startColor = correctColor;
					curLine.endColor = correctColor;
					curLine.numPositions = vertices;
					curLine.SetPosition (vertices - 1, target.transform.position);

					needNewLine = true;

					alreadyHit++;
				} else if (target.IsRed () || target.GetObstacle ()) {
					curLine.startColor = errorColor;
					curLine.endColor = errorColor;
					curLine.numPositions = vertices;
					curLine.SetPosition (vertices - 1, target.transform.position);
					StartCoroutine ("FadeLine", curLine);
					needNewLine = true;
					// TODO: else if mouse button GetMouseButtonDown is false, then start co-routine to iteratively delete the line again.
				} else {
					Debug.Log ("OFF");
					curLine.startColor = normalColor;
					curLine.endColor = normalColor;
				}

			}
		} else if (Input.GetMouseButtonUp(0) && lines.Count > 0) {
			if (lines [lines.Count - 1].startColor.a > 0.8f) {
				StartCoroutine ("FadeLine", lines [lines.Count - 1]);
				needNewLine = true;
			}
		}
			
	}

	IEnumerator FadeLine(LineRenderer curLine) {
		for (float f = 1f; f >= 0; f -= 0.03f) {
			curLine.startColor = new Color(curLine.startColor.r, curLine.startColor.g, curLine.startColor.b, f);
			curLine.endColor = new Color(curLine.startColor.r, curLine.startColor.g, curLine.startColor.b, f);
			//Debug.Log ("alpha is: " + f);
			yield return null;
		}
	}


	private void NewLine() {

		newLine = (GameObject)Instantiate(linePrefab);
		newLine.transform.parent = this.transform;
		vertices = 0;
		
		LineRenderer newLineComp = newLine.GetComponent<LineRenderer>();
		newLineComp.startWidth = mainCam.orthographicSize / 100 * lineWidth;
		newLineComp.endWidth  = mainCam.orthographicSize / 100 * lineWidth;
		//currentLine.SetWidth(mainCam.orthographicSize/100*lineWidth, mainCam.orthographicSize/100*lineWidth);

		tempPos = mainCam.ScreenToViewportPoint(Input.mousePosition);
		
		vertices++;
		//currentLine.SetVertexCount(vertices);
		newLineComp.numPositions = vertices; 
		newLineComp.SetPosition(vertices-1, mainCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, lineZPos)));
		lines.Add (newLineComp);
	}

	public void ClearAll() {
		alreadyHit = 0;
		lines.Clear ();
		for(int i = 0; i < transform.childCount; i++) {

			Destroy(transform.GetChild(i).gameObject);
		}
	}
}
