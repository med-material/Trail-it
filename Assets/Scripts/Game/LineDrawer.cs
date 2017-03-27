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
	private GameObject newLine;
	private LineRenderer currentLine;
	private LineRenderer fadeLine;
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
			currentLine.startColor = normalColor;
			currentLine.endColor = normalColor;
		}

		// If mouse is released
		// is our position a circle?
		// then take the coordinates in vertices and redraw them as light green. 


		if(Input.GetMouseButton(0)) {

			if(currentLine == null) {

				NewLine();
			}

			newPos = mainCam.ScreenToViewportPoint(Input.mousePosition);

			if(Vector3.Distance(newPos, tempPos) > minDist) {

				tempPos = newPos;

				vertices++;
				//currentLine.SetVertexCount(vertices);
				currentLine.numPositions = vertices; 
				currentLine.SetPosition(vertices-1, mainCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, lineZPos)));
			}

			RaycastHit2D hit = Physics2D.Raycast (mainCam.ScreenToWorldPoint (new Vector3 (Input.mousePosition.x, Input.mousePosition.y, lineZPos)), -Vector2.up);

			if (hit) {
				Debug.Log ("Hit: " + hit.collider.GetComponent<Target> ().GetID () + "Target " + gameLevel.GetCurrent ());
				Target target = hit.collider.GetComponent<Target> ();
				int hitID = target.GetID ();
				if (target.IsGreen () && hitID > alreadyHit) {
					Debug.Log ("Color Time");
					currentLine.startColor = correctColor;
					currentLine.endColor = correctColor;
					currentLine.numPositions = vertices;
					currentLine.SetPosition (vertices - 1, target.transform.position);

					currentLine = null;
					alreadyHit++;
				} else if (target.IsRed() || target.GetObstacle ()) {
					currentLine.startColor = errorColor;
					currentLine.endColor = errorColor;
					currentLine.numPositions = vertices;
					currentLine.SetPosition (vertices - 1, target.transform.position);
					currentLine = null;
					// TODO: remove the wrong line slowly and gradually.
					// TODO: else if mouse button GetMouseButtonDown is false, then start co-routine to iteratively delete the line again.
				} else {
					Debug.Log ("OFF");
					currentLine.startColor = normalColor;
					currentLine.endColor = normalColor;
				}

			}
		}



	}

	private void NewLine() {

		newLine = (GameObject)Instantiate(linePrefab);
		newLine.transform.parent = this.transform;
		vertices = 0;
		
		currentLine = newLine.GetComponent<LineRenderer>();
		currentLine.startWidth = mainCam.orthographicSize / 100 * lineWidth;
		currentLine.endWidth  = mainCam.orthographicSize / 100 * lineWidth;
		//currentLine.SetWidth(mainCam.orthographicSize/100*lineWidth, mainCam.orthographicSize/100*lineWidth);
		
		tempPos = mainCam.ScreenToViewportPoint(Input.mousePosition);
		
		vertices++;
		//currentLine.SetVertexCount(vertices);
		currentLine.numPositions = vertices; 
		currentLine.SetPosition(vertices-1, mainCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, lineZPos)));
	}

	public void ClearAll() {
		alreadyHit = 0;
		for(int i = 0; i < transform.childCount; i++) {

			Destroy(transform.GetChild(i).gameObject);
		}
	}
}
