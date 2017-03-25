using UnityEngine;
using System.Collections;

[ExecuteInEditMode]

public class Username : MonoBehaviour {

	public Rect textfieldRect;
	public Rect buttonRect;

	public string buttonLabel;

	public GUIStyle textFieldStyle;
	public GUIStyle buttonStyle;

	public int guiDepth;

	public Password password;

	private float nativeWidth = 1024;
	private float nativeHeight = 768;

	private SettingsManager settingsManager;
	private GameManager gameManager;
	private LoggingManager loggingManager;

	private string inputName = "";

	// Use this for initialization
	void Start () {

		settingsManager = GameObject.Find("Managers").GetComponent<SettingsManager>();
		gameManager = GameObject.Find("Managers").GetComponent<GameManager>();
		loggingManager = GameObject.Find("Managers").GetComponent<LoggingManager>();
		inputName = settingsManager.GetName ();
	}
	
	void OnGUI () {

		GUI.matrix = Matrix4x4.TRS (Vector3.zero, Quaternion.identity, new Vector3 (Screen.width / nativeWidth, Screen.height / nativeHeight, 1));
		
		GUI.depth = guiDepth;

		inputName = GUI.TextField (textfieldRect, inputName, textFieldStyle);

		if(GUI.Button(buttonRect, buttonLabel, buttonStyle)) {

			if(password.GetCorrect() && inputName != settingsManager.GetName()) {

				settingsManager.SetName(inputName);
				gameManager.IncreaseUserID();
				loggingManager.WriteLog("Name Changed");
			}
		}
	}
}
