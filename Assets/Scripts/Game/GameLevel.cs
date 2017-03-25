using UnityEngine;
using System.Collections;

public class GameLevel : MonoBehaviour {
	
	public GameObject targetPrefab;
	public string[] labelsA;
	public string[] labelsB;
	public string[] obstacleLabels;
	public AudioClip correctClip;
	public AudioClip errorClip;
	public float endDelay;

	private GameObject[] targetObjects;
	private GameObject[] obstacleObjects;
	private Target[] targets;
	private Target[] obstacles;

	private GameManager gameManager;
	private bool gameA;
	private int currentLevel;
	public string[] levelData;

	private Transform camTransform;
	private Camera mainCam;

	private int outset;
	private int currentTarget;
	private int hit;
	private int lastValid;
	private bool correctingError;
	private int errorsInRow;
	private bool levelComplete = false;
	private float completionTime;

	private Collider2D colliderHit;
	private Collider2D tempHit;

	private AudioSource correctSound;
	private AudioSource errorSound;

	private AssistanceManager assistanceManager;
	private LoggingManager loggingManager;

	private float startTime;

	// Use this for initialization
	void Start () {

		gameManager = GameObject.Find("Managers").GetComponent<GameManager>();
		loggingManager = GameObject.Find("Managers").GetComponent<LoggingManager>();
		assistanceManager = this.GetComponent<AssistanceManager>();

		LoadLevel ();

		correctSound = gameObject.AddComponent<AudioSource>();
		correctSound.clip = correctClip;
		correctSound.playOnAwake = false;

		errorSound = gameObject.AddComponent<AudioSource>();
		errorSound.clip = errorClip;
		errorSound.playOnAwake = false;

		startTime = Time.time;
	}
	
	// Update is called once per frame
	void Update () {

		if(levelComplete) {

			if(Time.time - completionTime > endDelay) {

				Application.LoadLevel("LevelComplete");
			}
		}
		else {

			if(Input.GetMouseButton(0)) {

				colliderHit = Physics2D.OverlapPoint(mainCam.ScreenToWorldPoint(Input.mousePosition));

				if(colliderHit != null) {

					if(colliderHit != tempHit) {

						tempHit = colliderHit;

						hit = colliderHit.GetComponent<Target>().GetID();

						if(colliderHit.GetComponent<Target>().GetObstacle()) {

							obstacles[hit].SetRed();
							obstacles[hit].TurnLight();

							hit = (hit * -1)-1;

							loggingManager.WriteLog("Obstacle Hit");

							currentTarget = lastValid;
							outset = hit;
							errorsInRow++;
							correctingError = true;
							errorSound.Play();

							for(int i = 0; i < targets.Length; i++) {
								if(!targets[i].IsRed() && i != currentTarget)
									targets[i].TurnDark();
							}
							for(int i = 0; i < obstacles.Length; i++)
								if(!obstacles[i].IsRed())
									obstacles[i].TurnDark();
						}
						else {

							if(hit == currentTarget) {

								if(hit == targets.Length-1){
									CompeleteLevel();
									loggingManager.WriteLog("Target Hit - Level Complete");
								}
								else {
									loggingManager.WriteLog("Target Hit");
								}

								for(int i = hit + 1; i < targets.Length; i++)
									targets[i].SetWhite();
								for(int i = 0; i < targets.Length; i++)
									targets[i].TurnLight();
								if(obstacles != null) {
									for(int i = 0; i < obstacles.Length; i++) {
										
										obstacles[i].SetWhite();
										obstacles[i].TurnLight();
									}
								}
								targets[lastValid].SetGreen();
								targets[hit].SetGreenOutline();
								outset = currentTarget;
								lastValid = currentTarget;
								currentTarget++;
								correctingError = false;
								errorsInRow = 0;
								correctSound.Play();
							}
							else if(hit == lastValid) {

								loggingManager.WriteLog("LastValid Hit");

								correctingError = false;
								errorsInRow = 0;
								correctSound.Play();
							}
							else if(hit < lastValid) {

								loggingManager.WriteLog("Backtracking");

								for(int i = hit + 1; i < targets.Length; i++)
									targets[i].SetWhite();
								for(int i = 0; i < targets.Length; i++)
									targets[i].TurnLight();
								if(obstacles != null) {
									for(int i = 0; i < obstacles.Length; i++) {
										
										obstacles[i].SetWhite();
										obstacles[i].TurnLight();
									}
								}
								targets[hit].SetGreenOutline();
								outset = hit;
								lastValid = hit;
								currentTarget = hit + 1;
								correctingError = false;
								errorsInRow = 0;
								correctSound.Play();
							}
							else if(hit > currentTarget) {

								loggingManager.WriteLog("Wrong Target Hit");

								targets[hit].SetRed();
								targets[hit].TurnLight();
								currentTarget = lastValid;
								outset = hit;
								correctingError = true;
								errorsInRow++;
								errorSound.Play();

								for(int i = 0; i < targets.Length; i++) {
									if(!targets[i].IsRed() && i != currentTarget)
										targets[i].TurnDark();
								}
								if(obstacles != null) {
									for(int i = 0; i < obstacles.Length; i++)
										if(!obstacles[i].IsRed())
										   obstacles[i].TurnDark();
								}
							}
						}
						assistanceManager.ResetTimer();
					}
				}
				else {

					tempHit = null;
				}
			}
			else if(Input.GetMouseButtonUp(0)) {

				tempHit = null;
			}
		}
	}

	private void LoadLevel () {

		camTransform = GameObject.Find ("Main Camera").transform;
		mainCam = camTransform.GetComponent<Camera> ();
		
		gameA = gameManager.GetGameType ();
		currentLevel = gameManager.GetNextLevel ();

		levelData = gameManager.GetLevelData ().text.Split("\n"[0]);

		camTransform.position = new Vector3 (float.Parse (levelData[0]),float.Parse (levelData[1]),float.Parse (levelData[2]));
		mainCam.orthographicSize = float.Parse (levelData[3]);
		
		targetObjects = new GameObject[int.Parse(levelData[4])];
		targets = new Target[targetObjects.Length];
		
		for(int i = 0; i < targetObjects.Length; i++) {
			
			targetObjects[i] = (GameObject)Instantiate(targetPrefab, new Vector3(float.Parse(levelData[i*6+5]), float.Parse (levelData[i*6+6]),float.Parse (levelData[i*6+7])), Quaternion.identity);
			targetObjects[i].transform.localScale = new Vector3(float.Parse(levelData[i*6+8]), float.Parse (levelData[i*6+9]),float.Parse (levelData[i*6+10]));
			targets[i] = targetObjects[i].GetComponent<Target>();
			targets[i].SetID(i);
			targets[i].SetObstacle(false);
			
			if(gameA) {
				targets[i].SetLabel(labelsA[i]);
			}
			else {
				targets[i].SetLabel(labelsB[i]);
			}
		}
		
		if(levelData[5+targetObjects.Length*6] != null && levelData[5+targetObjects.Length*6] != "") {
			
			obstacleObjects = new GameObject[int.Parse(levelData[5+targetObjects.Length*6])];
			obstacles = new Target[obstacleObjects.Length];
			
			for(int i = 0; i < obstacleObjects.Length; i++) {
				
				obstacleObjects[i] = (GameObject)Instantiate(targetPrefab, new Vector3(float.Parse(levelData[i*6+targetObjects.Length*6+6]), float.Parse (levelData[i*6+targetObjects.Length*6+7]),float.Parse (levelData[i*6+targetObjects.Length*6+8])), Quaternion.identity);
				obstacleObjects[i].transform.localScale = new Vector3(float.Parse(levelData[i*6+targetObjects.Length*6+9]), float.Parse (levelData[i*6+targetObjects.Length*6+10]),float.Parse (levelData[i*6+targetObjects.Length*6+11]));
				obstacles[i] = obstacleObjects[i].GetComponent<Target>();
				obstacles[i].SetID(i);
				obstacles[i].SetObstacle(true);
				obstacles[i].SetLabel(obstacleLabels[i]);
			}
		}
	}

	private void CompeleteLevel () {

		levelComplete = true;
		completionTime = Time.time;

		gameManager.SetLevelCompletionTime (Time.time - startTime);

		if (gameA) {

			if(currentLevel == gameManager.GetProgressA()) {

				gameManager.SetProgressA(gameManager.GetProgressA() + 1);
			}
		}
		else {

			if(currentLevel == gameManager.GetProgressB()) {
				
				gameManager.SetProgressB(gameManager.GetProgressB() + 1);
			}
		}
	}

	public Target GetCurrentTarget () {

		return targets [currentTarget];
	}

	public int GetCurrent() {

		return currentTarget;
	}
	public int GetHit() {
		
		return hit;
	}
	public int GetLastValid() {
		
		return lastValid;
	}
	public int GetOutset() {
		
		return outset;
	}
	public bool GetCorrectingError() {

		return correctingError;
	}
	public float GetGameTime () {

		return Time.time - startTime;
	}
	public int GetErrorsInRow () {
		
		return errorsInRow;
	}

	public Vector2 GetTargetLocation (int inputTargetID) {

		if(inputTargetID < 0)
			return mainCam.WorldToViewportPoint(obstacleObjects[(inputTargetID + 1)*-1].transform.position);
		else
			return mainCam.WorldToViewportPoint(targetObjects[inputTargetID].transform.position);
	}
}
