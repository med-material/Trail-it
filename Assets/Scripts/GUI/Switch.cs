using UnityEngine;
using System.Collections;

[ExecuteInEditMode]

public class Switch : MonoBehaviour {

	public Settings switchSetting;
	public GUIStyle switchStyle;
	
	public Rect switchRect;
	
	public int guiDepth;

	public Password password;

	public AudioClip switchClip;
	
	private float nativeWidth = 1024;
	private float nativeHeight = 768;

	private SettingsManager settingsManager;
	private bool switchValue = false;
	private bool tempSwitchValue = false;

	private AudioSource clickSound;

	// Use this for initialization
	void Start () {

		settingsManager = GameObject.Find("Managers").GetComponent<SettingsManager>();

		switchValue = settingsManager.GetSetting (switchSetting);
		tempSwitchValue = switchValue;

		clickSound = gameObject.AddComponent<AudioSource>();
		clickSound.clip = switchClip;
		clickSound.playOnAwake = false;
	}

	void Update () {

		if(switchValue != tempSwitchValue) {

			settingsManager.SetSetting (switchSetting, switchValue);
			tempSwitchValue = switchValue;
			clickSound.Play();
		}
	}
	
	void OnGUI () {
		
		GUI.matrix = Matrix4x4.TRS (Vector3.zero, Quaternion.identity, new Vector3 (Screen.width / nativeWidth, Screen.height / nativeHeight, 1));
		
		GUI.depth = guiDepth;

		if(password == null) {

			switchValue = GUI.Toggle (switchRect, switchValue, "", switchStyle);
		}
		else if(password.GetCorrect()) {

			switchValue = GUI.Toggle (switchRect, switchValue, "", switchStyle);
		}
		else {

			GUI.Toggle (switchRect, switchValue, "", switchStyle);
		}
	}
}
