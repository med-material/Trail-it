using UnityEngine;
using System.Collections;

public enum Tool {anim, lane, audio};

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
	public bool laneType;
	public Texture arrow;
	public int arrowCount;
	public Vector2 laneCornerOffset;
	public Vector2 arrowSize;
	public float arrowDistance;
	public Color[] arrowColors;
	public float laneFramerate;
	public int guiDepth;
	public TextAsset orderSheet;

	private Camera mainCam;

	private float nativeWidth = 1024;
	private float nativeHeight = 768;

	private float toolStartTime;
	private float repeatStartTime;
	private float offsetStartTime;

	private bool audioActive = false;
	private bool laneActive = false;
	private bool animActive = false;
	private bool oneShot = false;
	private int lastStarter;
	private int audioShots;

	private int currentFrame;
	private int currentColor;
	private bool laneRight;
	private float targetX;

	private Target currentTarget;

	private GameLevel gameLevel;
	private GameManager gameManager;
	private SettingsManager settingsManager;
	private LoggingManager loggingManager;

	private bool animationOn = false;
	private bool audioOn = false;
	private bool laneOn = false;

	private int toolsOn;
	private int orderRow;
	private int orderColumn;
	private int[,] orderMatrix;
	private string[] orderStrings;

	private bool gameA;

	private AudioSource chime;
	private AudioSource voice;

	// Use this for initialization
	void Start () {

		mainCam = GameObject.Find ("Main Camera").GetComponent<Camera> ();

		settingsManager = GameObject.Find ("Managers").GetComponent<SettingsManager> ();
		gameManager = GameObject.Find("Managers").GetComponent<GameManager>();
		loggingManager = GameObject.Find("Managers").GetComponent<LoggingManager>();
		gameLevel = this.GetComponent<GameLevel>();

		animationOn = settingsManager.GetSetting (Settings.Anim);
		audioOn = settingsManager.GetSetting (Settings.Voice);
		laneOn = settingsManager.GetSetting (Settings.Lane);
		repeatAudio = settingsManager.GetSetting (Settings.Repeat);
		laneType = settingsManager.GetSetting (Settings.LaneType);

		if(laneType)
			arrowCount = 16;
		else
			arrowCount = 8;

		if(animationOn)
			toolsOn++;
		if(audioOn)
			toolsOn++;
		if(laneOn)
			toolsOn++;

		if(toolsOn == 3) {

			orderMatrix = new int[6,3];
			orderStrings = orderSheet.text.Split("\n"[0]);

			for(int i = 0; i < orderStrings.Length; i++) {

				for(int j = 0; j < 3; j++) {

					orderMatrix[i,j] = int.Parse((orderStrings[i][j]).ToString());
				}
			}
		}

		gameA = gameManager.GetGameType ();
		orderRow = gameManager.GetOrderRow ();

		voice = gameObject.AddComponent<AudioSource>();
		voice.playOnAwake = false;
		chime = gameObject.AddComponent<AudioSource>();
		chime.clip = chimeClip;
		chime.playOnAwake = false;

		toolStartTime = Time.time;
	}
	
	// Update is called once per frame
	void Update () {

		if(toolsOn > 0 && Time.time - toolStartTime > toolDelay) {

			if(currentTarget == null) {
				currentTarget = gameLevel.GetCurrentTarget();
			}

			if(offsetTools && toolsOn > 1) {

				if(Time.time - offsetStartTime > offset || offsetStartTime < 0){

					switch (toolsOn) {
					case 3:
						if(orderColumn < 3) {
							switch (orderMatrix[orderRow, orderColumn]) {
							case 0:
								ActivatePulse();
								break;
							case 1:
								ActivateLane();
								break;
							case 2:
								ActivateAudio();
								break;
							}
							orderColumn++;
							offsetStartTime = Time.time;
						}
						else if(queueAudio && audioActive && repeatAudio && Time.time - repeatStartTime > repeatDelay) {
							
							ActivateAudio();
						}
						break;
					case 2:
						if(animationOn && lastStarter != 0 && !animActive) {
							ActivatePulse();
							if(!oneShot) {
								lastStarter = 0;
								oneShot = true;
								offsetStartTime = Time.time;
							}
							if(queueAudio)
								repeatStartTime = Time.time;
						}
						else if(laneOn && lastStarter != 1 && !laneActive) {
							ActivateLane();
							if(!oneShot) {
								lastStarter = 1;
								oneShot = true;
								offsetStartTime = Time.time;
							}
							if(queueAudio)
								repeatStartTime = Time.time;
						}
						else if(audioOn && lastStarter != 2 && !audioActive) {
							ActivateAudio();
							if(!oneShot) {
								lastStarter = 2;
								oneShot = true;
								offsetStartTime = Time.time;
							}
						}
						else if(queueAudio && audioActive && repeatAudio && Time.time - repeatStartTime > repeatDelay) {
							
							ActivateAudio();
						}
						break;
					}
				}
			}
			else if(!oneShot) {

				if(animationOn)
					ActivatePulse();
				if(laneOn)
					ActivateLane();
				if(audioOn)
					ActivateAudio();

				oneShot = true;
			}
			else if(queueAudio && audioActive && repeatAudio && Time.time - repeatStartTime > repeatDelay) {
				
				ActivateAudio();
			}

			if(!queueAudio && audioActive && repeatAudio && Time.time - repeatStartTime > repeatDelay) {
				
				ActivateAudio();
			}
			
			if(laneActive) {
				
				currentFrame = (int)(Time.time * laneFramerate) % arrowColors.Length;
			}
		}
	}

	void OnGUI () {

		if(laneActive) {

			GUI.matrix = Matrix4x4.TRS (Vector3.zero, Quaternion.identity, new Vector3 (Screen.width / nativeWidth, Screen.height / nativeHeight, 1));
		
			GUI.depth = guiDepth;

			DrawLane();
		}
	}

	private void ActivateAudio () {

		audioActive = true;
		repeatStartTime = Time.time;

		if(gameA) {
			
			voice.clip = voiceClipsA[currentTarget.GetID()];
		}
		else {
			
			voice.clip = voiceClipsB[currentTarget.GetID()];
		}
		
		voice.PlayDelayed(0.6f);
		chime.Play();

		audioShots++;

		loggingManager.WriteLog ("Voice Activated");
	}

	private void ActivateLane () {

		laneActive = true;
		
		if(currentTarget.GetSide()) {
			
			laneRight = true;
		}
		else {
			
			laneRight = false;
		}

		targetX = mainCam.WorldToScreenPoint (new Vector3 (currentTarget.GetX (), 0, 0)).x / Screen.width * nativeWidth;

		loggingManager.WriteLog ("Lane Activated");
	}

	private void ActivatePulse () {

		animActive = true;

		currentTarget.PlayPulse();

		loggingManager.WriteLog ("Pulse Activated");
	}

	private void DrawLane () {

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
	}

	public void ResetTimer () {

		toolStartTime = Time.time;
		offsetStartTime = -1;
		audioActive = false;
		laneActive = false;
		animActive = false;
		oneShot = false;
		voice.Stop ();
		chime.Stop ();
		audioShots = 0;

		if(orderColumn > 0) {

			orderColumn = 0;
			orderRow++;

			if(orderRow >= 6)
				orderRow = 0;

			gameManager.SetOrderRow (orderRow);
		}

		if(currentTarget != null) {

			currentTarget.StopPulse();
		}
		currentTarget = null;
	}

	public bool GetToolActive (Tool inputTool) {

		switch(inputTool) {
		case Tool.anim:
			return animActive;
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
