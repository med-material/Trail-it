using UnityEngine;
using System.Collections;

[ExecuteInEditMode]

public class LevelScreen : MonoBehaviour {

	public int totalRows;
	public int totalColumns;
	public Vector2 gridStart;
	public Vector2 gridDistance;
	public Vector2 buttonSize;
	public Rect rightArrowRect;
	public Rect leftArrowRect;
	public Texture rightArrowOff;
	public Texture leftArrowOff;
	public GUIStyle buttonA;
	public GUIStyle buttonB;
	public GUIStyle locked;
	public GUIStyle rightArrow;
	public GUIStyle leftArrow;
	public int guiDepth;

	private GameManager gameManager;
	private LoggingManager loggingManager;
	private int totalLevels;
	private bool gameA;
	private int progress;

	private GUIStyle currentStyle;

	private float nativeWidth = 1024;
	private float nativeHeight = 768;

	public int page = 1;
	public int totalPages;
	public int levelsPerPage;

	private Rect buttonRect;
	private float buttonPositionX;
	private float buttonPositionY;

	// Use this for initialization
	void Start () {

		gameManager = GameObject.Find("Managers").GetComponent<GameManager>();
		loggingManager = GameObject.Find("Managers").GetComponent<LoggingManager>();

		gameA = gameManager.GetGameType () == "gameA";

		if(gameA) {

			totalLevels = gameManager.GetTotalLevelsA();
			progress = gameManager.GetProgressA ();
			currentStyle = buttonA;
		}
		else {

			totalLevels = gameManager.GetTotalLevelsB();
			progress = gameManager.GetProgressB ();
			currentStyle = buttonB;
		}

		levelsPerPage = totalRows * totalColumns;
		totalPages = totalLevels / levelsPerPage;
		if(totalLevels % levelsPerPage != 0) {

			totalPages++;
		}
	}
	
	void OnGUI () {

		GUI.matrix = Matrix4x4.TRS (Vector3.zero, Quaternion.identity, new Vector3 (Screen.width / nativeWidth, Screen.height / nativeHeight, 1));

		GUI.depth = guiDepth;

		for (int i = 0; i < totalLevels; i++) {

			if(i >= page * levelsPerPage && i < page * levelsPerPage + levelsPerPage) {

				buttonPositionX = gridStart.x + gridDistance.x*((i - page * levelsPerPage) % totalColumns);
				buttonPositionY = gridStart.y + gridDistance.y*((i - page * levelsPerPage) / totalColumns);

				buttonRect = new Rect(buttonPositionX, buttonPositionY, buttonSize.x, buttonSize.y);

				if(i <= progress) {

					if(GUI.Button(buttonRect, (i+1).ToString(), currentStyle)) {

						gameManager.SetNextLevel(i);
						//TODO: I removed this check up on it later. //Application.LoadLevel("Level");
						loggingManager.WriteLog("Chose Level " + i.ToString());
					}
				}
				else {

					GUI.Label(buttonRect, (i+1).ToString(), locked);
				}
			}
		}

		if(page < totalPages - 1) {

			if(GUI.Button(rightArrowRect, "", rightArrow)) {

				page++;
			}
		}
		else {

			GUI.DrawTexture(rightArrowRect, rightArrowOff);
		}

		if(page > 0) {
			
			if(GUI.Button(leftArrowRect, "", leftArrow)) {
				
				page--;
			}
		}
		else {
			
			GUI.DrawTexture(leftArrowRect, leftArrowOff);
		}
	}
}
