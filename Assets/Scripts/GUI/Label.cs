using UnityEngine;
using System.Collections;

public enum importString {None, Name, GameType, LevelTime, SessionTime, CurrentPlayer, TotalSessions};

[ExecuteInEditMode]

public class Label : MonoBehaviour {

	public importString import;
	public string beforeText;
	public string afterText;
	
	public Rect labelRect;
	public GUIStyle labelStyle;
	
	public int guiDepth;

	public AudioClip sound;

	private float nativeWidth = 1024;
	private float nativeHeight = 768;

	private string middleText;
	private int timeLeft;

	private AudioSource labelSound;

	// Use this for initialization
	void Start () {

		switch(import) {
		case importString.None:
			middleText = "";
			break;
		case importString.CurrentPlayer:
			if(GameObject.Find("Managers").GetComponent<GameManager>().GetPlayer()) {
				middleText = GameObject.Find("Managers").GetComponent<SettingsManager>().GetName();
			}
			else {
				middleText = "Gæst";
			}
			break;
		case importString.GameType:
			if(GameObject.Find("Managers").GetComponent<GameManager>().GetGameType()) {

				middleText = "A";
			}
			else {
				middleText = "B";
			}
			break;
		case importString.LevelTime:
			middleText = ((int)(GameObject.Find("Managers").GetComponent<GameManager>().GetLevelCompletionTime())).ToString();
			break;
		case importString.SessionTime:
			timeLeft = GameObject.Find("Managers").GetComponent<SessionManager>().GetMinutesLeft();

			if(timeLeft > 1) {

				middleText = "Du har " + ((int)timeLeft).ToString() + " minutter tilbage";
			}
			else if(timeLeft == 1) {

				middleText = "Du har 1 minut tilbage";
			}
			else if(timeLeft <= 0) {

				middleText = "Du er færdig med spillet";
				PlaySound();
			}
			break;
		case importString.Name:
			middleText = GameObject.Find("Managers").GetComponent<SettingsManager>().GetName();
			break;
		case importString.TotalSessions:
			middleText = "10";
			break;
		}
	}
	
	void OnGUI () {

		GUI.matrix = Matrix4x4.TRS (Vector3.zero, Quaternion.identity, new Vector3 (Screen.width / nativeWidth, Screen.height / nativeHeight, 1));
		
		GUI.depth = guiDepth;

		GUI.Label(labelRect, beforeText+middleText+afterText, labelStyle);
	}

	private void PlaySound() {

		labelSound = gameObject.AddComponent<AudioSource>();
		labelSound.clip = sound;
		labelSound.playOnAwake = false;
		labelSound.Play ();
	}
}
