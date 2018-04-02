using UnityEngine;
using System.Collections;

public class Tutorial : MonoBehaviour {

	public GameObject targetPrefab;
	public GameObject handPrefab;
	public GameObject phase2Menu;
	public GameObject phase0A;
	public GameObject phase1A;
	public GameObject phase0B;
	public GameObject phase1B;
	public AudioClip correctClip;
	public AudioClip errorClip;
	public AudioClip a1Clip;
	public AudioClip a2Clip;
	public AudioClip b1Clip;
	public AudioClip b2Clip;
	public AudioClip endClip;
	public float delayTime;
	public Vector3[] targetPositions;
	public Vector3 targetScale;
	public float handSpeed;
	public float handDistTolerance;
	public float handAwayTime;
	public float handStillTime;
	public LineDrawer lineDrawer;

	private GameManager gameManager;
	private bool gameA;
	private string gameType;
	private int stage;
	private bool delay;

	private Camera mainCam;

	private Target[] targets;
	private GameObject[] targetObjects;

	private AudioSource correctSound;
	private AudioSource errorSound;
	private AudioSource a1Sound;
	private AudioSource a2Sound;
	private AudioSource b1Sound;
	private AudioSource b2Sound;
	private AudioSource endSound;

	private Collider2D colliderHit;
	private Collider2D tempHit;

	private int outset;
	private int currentTarget;
	private int hit;
	private int lastValid;
	private bool correctingError;
	private int errorsInRow;
	private float completionTime;
	private float startTime;

	private GameObject hand;
	private int handStage;
	private float handStartTime;
	private int handAt;

	// Use this for initialization
/*	void Start () {

		gameManager = GameObject.Find("Managers").GetComponent<GameManager>();
		loggingManager = GameObject.Find("Managers").GetComponent<LoggingManager>();

		mainCam = GameObject.Find ("Main Camera").GetComponent<Camera> ();

		gameA = gameManager.GetGameType ();

		if(gameA) {

			gameManager.SetTutorialASeen(true);
		}
		else {

			gameManager.SetTutorialBSeen(true);
		}
		
		hand = (GameObject)Instantiate (handPrefab, new Vector3(0,-5,0), Quaternion.identity);

		LoadSounds ();

		StartStage0 ();
	}*/

	public void Init (GameManager gm) {

		gameManager = gm;

		mainCam = GameObject.Find ("Main Camera").GetComponent<Camera> ();

		gameType = gameManager.GetGameType ();

/*		if(gameA) {

			gameManager.SetTutorialASeen(true);
		}
		else {

			gameManager.SetTutorialBSeen(true);
		}*/

		hand = (GameObject)Instantiate (handPrefab, new Vector3(0,-5,0), Quaternion.identity);

		LoadSounds ();

		StartStage0 (); 
	}

	
	// Update is called once per frame
	void Update () {

		if(delay) {
			
			if(Time.time - completionTime > delayTime) {

				delay = false;

				for(int i = 0; i < targetObjects.Length; i++) {

					Destroy(targetObjects[i]);
				}

				if(stage == 1) {

					StartStage1();
				}
				else if(stage == 2) {
					
					StartStage2();
				}
			}
		}
		else if(stage == 0 || stage == 1) {

			RunGame();
			RunHand(); 
		}
	}

	private void LoadSounds () {

		correctSound = gameObject.AddComponent<AudioSource>();
		correctSound.clip = correctClip;
		correctSound.playOnAwake = false;
		
		errorSound = gameObject.AddComponent<AudioSource>();
		errorSound.clip = errorClip;
		errorSound.playOnAwake = false;
		
		a1Sound = gameObject.AddComponent<AudioSource>();
		a1Sound.clip = a1Clip;
		a1Sound.playOnAwake = false;
		
		a2Sound = gameObject.AddComponent<AudioSource>();
		a2Sound.clip = a2Clip;
		a2Sound.playOnAwake = false;
		
		b1Sound = gameObject.AddComponent<AudioSource>();
		b1Sound.clip = b1Clip;
		b1Sound.playOnAwake = false;
		
		b2Sound = gameObject.AddComponent<AudioSource>();
		b2Sound.clip = b2Clip;
		b2Sound.playOnAwake = false;

		endSound = gameObject.AddComponent<AudioSource>();
		endSound.clip = endClip;
		endSound.playOnAwake = false;
	}

	private void StartStage0 () {

		startTime = Time.time;
		handStartTime = Time.time;
		handStage = 0;
		hand.transform.position = new Vector3(0, -5, 0);
		hand.GetComponent<Renderer> ().enabled = true; 
		handAt = 0;

		targetObjects = new GameObject[2];
		targets = new Target[2];

		targetObjects [0] = (GameObject)Instantiate (targetPrefab, targetPositions[0], Quaternion.identity);
		targetObjects [1] = (GameObject)Instantiate (targetPrefab, targetPositions[1], Quaternion.identity);
		targetObjects [0].transform.localScale = targetScale;
		targetObjects [1].transform.localScale = targetScale;
		targets [0] = targetObjects [0].GetComponent<Target> ();
		targets [1] = targetObjects [1].GetComponent<Target> ();
		targets [0].SetID (0);
		targets [1].SetID (1);
		
		if(gameType == "gameA") {

			targets[0].SetLabel("1");
			targets[1].SetLabel("2");
			a1Sound.Play();
			phase0A.SetActive(true);
		}
		else {

			targets[0].SetLabel("1");
			targets[1].SetLabel("A");
			b1Sound.Play();
			phase0B.SetActive(true);
		}
	}

	private void StartStage1 () {

		lineDrawer.ClearAll ();

		startTime = Time.time;
		handStartTime = Time.time;
		handStage = 0;
		hand.transform.position = new Vector3(0, -5, 0);
		handAt = 0;

		currentTarget = 0;
		lastValid = 0;
		targetObjects = new GameObject[4];
		targets = new Target[4];

		targetObjects [0] = (GameObject)Instantiate (targetPrefab, targetPositions[2], Quaternion.identity);
		targetObjects [1] = (GameObject)Instantiate (targetPrefab, targetPositions[3], Quaternion.identity);
		targetObjects [2] = (GameObject)Instantiate (targetPrefab, targetPositions[4], Quaternion.identity);
		targetObjects [3] = (GameObject)Instantiate (targetPrefab, targetPositions[5], Quaternion.identity);
		targetObjects [0].transform.localScale = targetScale;
		targetObjects [1].transform.localScale = targetScale;
		targetObjects [2].transform.localScale = targetScale;
		targetObjects [3].transform.localScale = targetScale;
		targets [0] = targetObjects [0].GetComponent<Target> ();
		targets [1] = targetObjects [1].GetComponent<Target> ();
		targets [2] = targetObjects [2].GetComponent<Target> ();
		targets [3] = targetObjects [3].GetComponent<Target> ();
		targets [0].SetID (0);
		targets [1].SetID (1);
		targets [2].SetID (2);
		targets [3].SetID (3);
		
		if(gameType == "gameA") {

			targets [0].SetLabel("1");
			targets [1].SetLabel("2");
			targets [2].SetLabel("3");
			targets [3].SetLabel("4");
			a2Sound.Play();
			a1Sound.Stop();
			phase0A.SetActive(false);
			phase1A.SetActive(true);
		}
		else {

			targets [0].SetLabel("1");
			targets [1].SetLabel("A");
			targets [2].SetLabel("2");
			targets [3].SetLabel("B");
			b2Sound.Play();
			b1Sound.Stop();
			phase0B.SetActive(false);
			phase1B.SetActive(true);
		}
	}

	private void StartStage2 () {

		startTime = Time.time;
		lineDrawer.ClearAll ();
		lineDrawer.gameObject.SetActive (false);

		endSound.Play ();
		//Debug.Log ("I've reached the end");
		a2Sound.Stop();
		b2Sound.Stop();
		hand.transform.position = new Vector3(0, -5, 0);
		hand.GetComponent<Renderer> ().enabled = false; 
		phase2Menu.SetActive (true);
		phase1A.SetActive (false);
		phase1B.SetActive (false);
		gameManager.StartGame();
	}

	private void RunGame() {
		
		if(Input.GetMouseButton(0)) {
			
			colliderHit = Physics2D.OverlapPoint(mainCam.ScreenToWorldPoint(Input.mousePosition));
			
			if(colliderHit != null) {
				
				if(colliderHit != tempHit) {
					
					tempHit = colliderHit;
					
					hit = colliderHit.GetComponent<Target>().GetID();
					
					if(hit == currentTarget) {

						if(hit == targets.Length-1){
							//loggingManager.WriteLog("Target Hit - Level Complete");
							completionTime = Time.time;
							delay = true;
							stage++;
						}
						else {
							//loggingManager.WriteLog("Target Hit");
						}
						
						for(int i = hit + 1; i < targets.Length; i++)
							targets[i].SetWhite();
						for(int i = 0; i < targets.Length; i++)
							targets[i].TurnLight();

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

						//loggingManager.WriteLog("LastValid Hit");
						correctingError = false;
						errorsInRow = 0;
						correctSound.Play();
					}
					else if(hit < lastValid) {

						//loggingManager.WriteLog("Backtracking");

						for(int i = hit + 1; i < targets.Length; i++)
							targets[i].SetWhite();
						for(int i = 0; i < targets.Length; i++)
							targets[i].TurnLight();
						targets[hit].SetGreenOutline();
						outset = hit;
						lastValid = hit;
						currentTarget = hit + 1;
						correctingError = false;
						errorsInRow = 0;
						correctSound.Play();
					}
					else if(hit > currentTarget) {

						//loggingManager.WriteLog("Wrong Target Hit");

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
					}
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
	
	private void RunHand() {
		
		if (handStage == 0) {

			if(Time.time - handStartTime > handAwayTime) {

				handStage++;
				handStartTime = Time.time;
				hand.transform.position = targetObjects[0].transform.position + new Vector3(0,0,-1);
			}
		}
		else if(handStage == 1) {

			if(Time.time - handStartTime > handStillTime) {
				
				handStage++;
				handStartTime = Time.time;
			}
		}
		else if(handStage == 2) {
			
			if(handAt < targetObjects.Length - 1) {

				if(Vector3.Distance(hand.transform.position, targetObjects[handAt+1].transform.position + new Vector3(0,0,-1)) > handDistTolerance) {

					hand.transform.position = Vector3.MoveTowards(hand.transform.position, targetObjects[handAt+1].transform.position + new Vector3(0,0,-1), handSpeed*Time.deltaTime);
				}
				else {

					handAt++;
				}
			}
			else {

				handAt = 0;
				handStage++;
				handStartTime = Time.time;
			}
		}
		else if(handStage == 3) {
			
			if(Time.time - handStartTime > handStillTime) {
				
				handStage = 0;
				handStartTime = Time.time;
				hand.transform.position = new Vector3(0, -5, 0);
			}
		}
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
}
