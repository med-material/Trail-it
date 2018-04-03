using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public enum Tool {pulse, lane, audio};

public class AssistanceManager : MonoBehaviour {

	public float toolDelay;
	public bool offsetTools = false;
	public bool repeatAudio = false;
	public bool queueAudio = false;
	public float offset;
	public float repeatDelay;
	public AudioClip chimeClip;
	public AudioClip[] voiceClipsA;
	public AudioClip[] voiceClipsB;
	//public bool laneType;

	public GameObject TopPanelCanvas;
	public GameObject BottomPanelCanvas;
	public GameObject arrowLeftTop;
	public GameObject arrowLeftBottom;
	public GameObject arrowRightTop;
	public GameObject arrowRightBottom;
	public Texture arrow;
	public int arrowCount;
	public Vector2 laneCornerOffset;
	public Vector2 arrowSize;
	public float arrowDistance;
	public Color[] arrowColors;
	public float laneFramerate;
	public int guiDepth;
	public TextAsset orderSheet;

	private List <GameObject> LeftArrowObjects = new List<GameObject>();
	private List <GameObject> RightArrowObjects = new List<GameObject>();

	[SerializeField]
	private ProfileManager profileManager;

	//private Camera mainCam; // Never used

	//private float nativeWidth = 1024; // Never used
	//private float nativeHeight = 768;

	private float toolStartTime;
	private float repeatStartTime;

	private bool audioActive = false;
	private bool laneActive = false;
	private bool pulseActive = false;
	private bool oneShot = false;
	private int lastStarter;
	private int audioShots;
	private bool assistanceWasActive = false;

	private int currentFrame;
	private int currentColor;
	private bool laneRight;
    //private float targetX; // Assigned to but never used

    private Target currentTarget;

	private GameLevel gameLevel;
	private GameManager gameManager;
	private LoggingManager loggingManager;

	private bool pulseOn = false;
	private bool audioOn = false;
	private bool laneOn = false;

	private int toolsOn;
	private int orderColumn;
	private int[,] orderMatrix;
	private string[] orderStrings;

	private bool gameA;
	private string gameType;

	private AudioSource chime;
	private AudioSource voice;

	// Use this for initialization
	void Start () {

		//mainCam = GameObject.Find ("Main Camera").GetComponent<Camera> (); // Never used

		gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
		gameLevel = this.GetComponent<GameLevel>();

		LoadPlayerPrefs ();		

		arrowCount = 7;

		Canvas.ForceUpdateCanvases ();

		GameObject arrowObject;

		for (int i = 0; i < arrowCount; i++) {
			arrowObject = (GameObject)Instantiate (arrowRightTop, TopPanelCanvas.transform);
			arrowObject.GetComponent<landingsBane> ().arrowOffset = i;
			RightArrowObjects.Add(arrowObject);

			arrowObject = (GameObject)Instantiate(arrowRightBottom,BottomPanelCanvas.transform);
			arrowObject.GetComponent<landingsBane> ().arrowOffset = i;
			RightArrowObjects.Add(arrowObject);

			arrowObject = (GameObject)Instantiate(arrowLeftTop, TopPanelCanvas.transform);
			arrowObject.GetComponent<landingsBane>().arrowOffset = i;
			LeftArrowObjects.Add(arrowObject);

			arrowObject = (GameObject)Instantiate(arrowLeftBottom,BottomPanelCanvas.transform);
			arrowObject.GetComponent<landingsBane> ().arrowOffset = i;
			LeftArrowObjects.Add (arrowObject);
		}

		arrowRightTop.SetActive(false);
		arrowRightBottom.SetActive(false);
		arrowLeftTop.SetActive(false);
		arrowLeftBottom.SetActive(false);

		gameType = gameManager.GetGameType ();

		voice = gameObject.AddComponent<AudioSource>();
		voice.playOnAwake = false;
		chime = gameObject.AddComponent<AudioSource>();
		chime.clip = chimeClip;
		chime.playOnAwake = false;

		toolStartTime = Time.time;
	}

	public void LoadPlayerPrefs() {
		toolsOn = 0;
		string currentProfileID = profileManager.GetCurrentProfileID();
		pulseOn = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Pulse", 0) == 1;
		audioOn = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Stemme", 0) == 1; //settingsManager.GetSetting (Settings.Voice);
		laneOn =  PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Landingsbane", 0) == 1; //settingsManager.GetSetting (Settings.Lane);
		repeatAudio = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":GentagStemme", 0) == 1;
		//laneType = settingsManager.GetSetting (Settings.LaneType);

		gameType = gameManager.GetGameType ();

		if(pulseOn)
			toolsOn++;
		if(audioOn)
			toolsOn++;
		if(laneOn)
			toolsOn++;
	}

	// Update is called once per frame
	public void Update () {

		if (gameManager.GetLevelActive ()) {
			if (toolsOn > 0 && Time.time - toolStartTime > toolDelay) {
				if (currentTarget == null) {
					currentTarget = gameLevel.GetCurrentTarget ();
				}
						
				if (!oneShot) {

					if (pulseOn)
						ActivatePulse ();
					if (laneOn && !laneActive)
						ActivateLane ();
					if (audioOn)
						ActivateAudio ();

					oneShot = true;
				} else if (queueAudio && audioActive && repeatAudio && Time.time - repeatStartTime > repeatDelay) {
					
					ActivateAudio ();
				}

				if (!queueAudio && audioActive && repeatAudio && Time.time - repeatStartTime > repeatDelay) {
					
					ActivateAudio ();
				}

				if (laneOn && !laneActive) {
					ActivateLane ();
				}

				assistanceWasActive = true;

			}
		} else {
			ResetTimer();
		}
	}

	public void resetAssistanceWasActive()
	{
		assistanceWasActive = false;
	}

	public bool GetAssistanceWasActive()
	{
		return assistanceWasActive;
	}

	private void ActivateAudio () {

		audioActive = true;
		repeatStartTime = Time.time;

		if(gameType == "gameA") {
			
			voice.clip = voiceClipsA[currentTarget.GetID()];
		}
		else {
			
			voice.clip = voiceClipsB[currentTarget.GetID()];
		}
		
		voice.PlayDelayed(0.6f);
		chime.Play();

		audioShots++;

		//loggingManager.WriteLog ("Voice Activated");
	}

	private void ActivateLane () {

		if (laneActive) {
			return;
		}

		if(currentTarget.GetSide()) {
			
			laneRight = true;
		}
		else {
			
			laneRight = false;
		}

		//targetX = mainCam.WorldToScreenPoint (new Vector3 (currentTarget.GetX (), 0, 0)).x / Screen.width * nativeWidth; // Assigned to butn never used
		StartLane();
		//loggingManager.WriteLog ("Lane Activated");
		//Debug.Log ("Lane Activated");
	}

	private void ActivatePulse () {

		pulseActive = true;

		currentTarget.PlayPulse();

		//loggingManager.WriteLog ("Pulse Activated");
	}

	private void StartLane () {
		laneActive = true;
		//Debug.Log ("Lane is Drawing!");
		TopPanelCanvas.SetActive (true);
		BottomPanelCanvas.SetActive(true);
		//GameObject arrowObject; // Declared, but never used
		//Debug.Log("LaneRight: " + laneRight);
		if (laneRight) {
			//Debug.Log ("Activating RightArrowObjects!");
			for (int i = 0; i < RightArrowObjects.Count; i++) {
				RightArrowObjects[i].SetActive (true);
				RightArrowObjects[i].GetComponent<Fadein>().ResetFade();
				RightArrowObjects[i].GetComponent<Fadein>().StartFade();
			}
		} else {
			//Debug.Log ("Activating LeftArrowObjects!");
			for (int i = 0; i < LeftArrowObjects.Count; i++) {
				LeftArrowObjects[i].SetActive (true);
				LeftArrowObjects[i].GetComponent<Fadein>().ResetFade();
				LeftArrowObjects[i].GetComponent<Fadein>().StartFade();
			}
		}

		/*
		for(int i = 0; i < arrowCount; i++) {
			
			currentColor = arrowColors.Length - 1 - currentFrame - i;
			
			while(currentColor < 0)
				currentColor = currentColor + arrowColors.Length;
			
			GUI.color = arrowColors[currentColor];
			
			if(!laneType) {
				if(laneRight) {
					
					GUI.DrawTexture(new Rect(nativeWidth-(laneCornerOffset.x + i*arrowDistance), laneCornerOffset.y, -arrowSize.x, arrowSize.y), arrow);
					GUI.DrawTexture(new Rect(nativeWidth-(laneCornerOffset.x + i*arrowDistance), nativeHeight - arrowSize.y - laneCornerOffset.y, -arrowSize.x, arrowSize.y), arrow);
				}
				else {
					
					GUI.DrawTexture(new Rect(laneCornerOffset.x + i*arrowDistance, laneCornerOffset.y, arrowSize.x, arrowSize.y), arrow);
					GUI.DrawTexture(new Rect(laneCornerOffset.x + i*arrowDistance, nativeHeight - arrowSize.y - laneCornerOffset.y, arrowSize.x, arrowSize.y), arrow);
				}
			}
			else {
				
				if(laneRight) {
					
					GUI.DrawTexture(new Rect(targetX-(laneCornerOffset.x + i*arrowDistance), laneCornerOffset.y, -arrowSize.x, arrowSize.y), arrow);
					GUI.DrawTexture(new Rect(targetX-(laneCornerOffset.x + i*arrowDistance), nativeHeight - arrowSize.y - laneCornerOffset.y, -arrowSize.x, arrowSize.y), arrow);
				}
				else {
					
					GUI.DrawTexture(new Rect(targetX + i*arrowDistance, laneCornerOffset.y, arrowSize.x, arrowSize.y), arrow);
					GUI.DrawTexture(new Rect(targetX + i*arrowDistance, nativeHeight - arrowSize.y - laneCornerOffset.y, arrowSize.x, arrowSize.y), arrow);
				}
			}
		}
		*/
	}

	private void StopLane () {
		laneActive = false;
		if (laneRight) {
			for (int i = 0; i < RightArrowObjects.Count; i++) {
				RightArrowObjects[i].GetComponent<FadeOut>().StartFade();
			}
		} else {
			for (int i = 0; i < LeftArrowObjects.Count; i++) {
				LeftArrowObjects[i].GetComponent<FadeOut>().StartFade();
			}
		}
	}

	public string GetLaneType () {
		if (laneRight && laneActive) {
			return "Look Right";
		} else if (!laneRight && laneActive) {
			return "Look Left";
		} else {
			return "";
		}

	}

	public void ResetTimer () {
		//Debug.Log ("ResetTimer is called");
		toolStartTime = Time.time;
		audioActive = false;
		if (laneActive) {
			StopLane ();
		}
		pulseActive = false;
		oneShot = false;
		voice.Stop ();
		chime.Stop ();
		audioShots = 0;

		if(orderColumn > 0) {
			orderColumn = 0;
		}

		if(currentTarget != null) {

			currentTarget.StopPulse();
		}
		currentTarget = null;
	}

	public bool GetToolActive (Tool inputTool) {

		switch(inputTool) {
		case Tool.pulse:
			return pulseActive;
		case Tool.lane:
			return laneActive;
		case Tool.audio:
			return audioActive;
		default:
			return false;
		}
	}

	public int GetAudioShots () {

		return audioShots;
	}
}
