using UnityEngine;
using System.Collections;
using UnityEngine.UI;

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
	public Text overlayText;
	public GameObject overlay;

	[SerializeField]
	private ProfileManager profileManager;

	[SerializeField]
	private GameManager gameManager;
	private bool gameA;
	private string gameType;
	private int stage;
	private bool delay;

	[SerializeField]
	private Camera mainCam;

	private Target[] targets;
	private GameObject[] targetObjects;

	//private AudioSource correctSound;
	//private AudioSource errorSound;
	//private AudioSource a1Sound;
	//private AudioSource a2Sound;
	//private AudioSource b1Sound;
	//private AudioSource b2Sound;
	//private AudioSource endSound;

	[SerializeField]
	private AudioSource tutorialVoice;
	[SerializeField]
	private AudioSource gameSounds;

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

	private string a1text = "Tryk på tallene efter hinanden.";
	private string a2text = "Tallene skal trykkes i den rigtige rækkefølge.";
	private string b1text = "Tryk skiftevis på tal og bogstav.";
	private string b2text = "Husk at skifte mellem tal og bogstaver i den rigtige rækkefølge.";
	private bool didInit = false;

	public void Init()
	{
		gameType = gameManager.GetGameType();
		StartCoroutine(startTutorial());
	}

	private IEnumerator startTutorial()
	{
		yield return new WaitForSeconds(0.5f);
		overlay.SetActive(true);
		hand = (GameObject)Instantiate(handPrefab, new Vector3(0, -5, 0), Quaternion.identity, this.gameObject.transform);
		StartStage0();
		didInit = true;
	}
	
	// Update is called once per frame
	void Update () {
		if (didInit)
		{
			if (delay)
			{

				if (Time.time - completionTime > delayTime)
				{

					delay = false;

					for (int i = 0; i < targetObjects.Length; i++)
					{

						Destroy(targetObjects[i]);
					}

					if (stage == 1)
					{

						StartStage1();
					}
					else if (stage == 2)
					{

						StartStage2();
					}
				}
			}
			else if (stage == 0 || stage == 1)
			{

				RunGame();
				RunHand();
			}
		}
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

		targetObjects [0] = (GameObject)Instantiate (targetPrefab, targetPositions[0], Quaternion.identity, this.gameObject.transform);
		targetObjects [1] = (GameObject)Instantiate (targetPrefab, targetPositions[1], Quaternion.identity, this.gameObject.transform);
		targetObjects [0].transform.localScale = targetScale;
		targetObjects [1].transform.localScale = targetScale;
		targets [0] = targetObjects [0].GetComponent<Target> ();
		targets [1] = targetObjects [1].GetComponent<Target> ();
		targets [0].SetID (0);
		targets [1].SetID (1);
		
		if(gameType == "gameA") {

			targets[0].SetLabel("1");
			targets[1].SetLabel("2");
			tutorialVoice.PlayOneShot(a1Clip);
			overlayText.text = a1text;
			phase0A.SetActive(true);
		}
		else {

			targets[0].SetLabel("1");
			targets[1].SetLabel("A");
			tutorialVoice.PlayOneShot(b1Clip);
			overlayText.text = b1text;
			phase0B.SetActive(true);
		}

        targetObjects[0].SetActive(true);
        targetObjects[1].SetActive(true);
	}

	private void StartStage1 () {

		startTime = Time.time;
		handStartTime = Time.time;
		handStage = 0;
		hand.transform.position = new Vector3(0, -5, 0);
		handAt = 0;

		currentTarget = 0;
		lastValid = 0;
		targetObjects = new GameObject[4];
		targets = new Target[4];

		targetObjects [0] = (GameObject)Instantiate (targetPrefab, targetPositions[2], Quaternion.identity, this.gameObject.transform);
		targetObjects [1] = (GameObject)Instantiate (targetPrefab, targetPositions[3], Quaternion.identity, this.gameObject.transform);
		targetObjects [2] = (GameObject)Instantiate (targetPrefab, targetPositions[4], Quaternion.identity, this.gameObject.transform);
		targetObjects [3] = (GameObject)Instantiate (targetPrefab, targetPositions[5], Quaternion.identity, this.gameObject.transform);
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
			tutorialVoice.Stop();
			tutorialVoice.PlayOneShot(a2Clip);
			overlayText.text = a2text;
			phase0A.SetActive(false);
			phase1A.SetActive(true);
		}
		else {

			targets [0].SetLabel("1");
			targets [1].SetLabel("A");
			targets [2].SetLabel("2");
			targets [3].SetLabel("B");
			tutorialVoice.Stop();
			tutorialVoice.PlayOneShot(b2Clip);
			overlayText.text = b2text;
			phase0B.SetActive(false);
			phase1B.SetActive(true);
		}

        targetObjects[0].SetActive(true);
        targetObjects[1].SetActive(true);
        targetObjects[2].SetActive(true);
        targetObjects[3].SetActive(true);
	}

	public void SkipButtonClicked()
	{
		string profileID = profileManager.GetCurrentProfileID();
		PlayerPrefs.SetInt("Settings:" + profileID + ":Intro", 0);
		StartStage2();
        this.gameObject.SetActive(false);
	}

	private void StartStage2 () {

		startTime = Time.time;
		tutorialVoice.Stop();
		tutorialVoice.PlayOneShot(endClip);
		//endSound.Play ();
		//Debug.Log ("I've reached the end");
		hand.transform.position = new Vector3(0, -5, 0);
		hand.GetComponent<Renderer> ().enabled = false; 
		phase2Menu.SetActive (true);
		phase0A.SetActive(false);
		phase0B.SetActive(false);
		phase1A.SetActive (false);
		phase1B.SetActive (false);
		overlay.SetActive(false);
		gameManager.StartGame();
	}

	private void RunGame() {

		if(gameManager.input.TouchActive) {

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
						gameSounds.PlayOneShot(correctClip);
						//correctSound.Play();
					}
					else if(hit == lastValid) {

						//loggingManager.WriteLog("LastValid Hit");
						correctingError = false;
						errorsInRow = 0;
						gameSounds.PlayOneShot(correctClip);
						//correctSound.Play();
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
						gameSounds.PlayOneShot(correctClip);
						//correctSound.Play();
					}
					else if(hit > currentTarget) {

						//loggingManager.WriteLog("Wrong Target Hit");

						targets[hit].SetRed();
						targets[hit].TurnLight();
						currentTarget = lastValid;
						outset = hit;
						correctingError = true;
						errorsInRow++;
						gameSounds.PlayOneShot(errorClip);
						//errorSound.Play();

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
		else if (gameManager.input.TouchUp) {
			
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
