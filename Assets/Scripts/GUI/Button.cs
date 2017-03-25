using UnityEngine;
using System.Collections;

[ExecuteInEditMode]

public class Button : MonoBehaviour {

	public Event buttonEvent;
	public GUIStyle buttonStyle;

	public Rect buttonRect;
	public string buttonLabel;

	public int guiDepth;

	public bool userButton = false;

	public Password password;

	private float nativeWidth = 1024;
	private float nativeHeight = 768;

	private EventManager eventManager;

	// Use this for initialization
	void Start () {

		eventManager = GameObject.Find("Managers").GetComponent<EventManager>();

		if(userButton) {

			buttonLabel = GameObject.Find("Managers").GetComponent<SettingsManager>().GetName();
		}
	}

	void OnGUI () {

		GUI.matrix = Matrix4x4.TRS (Vector3.zero, Quaternion.identity, new Vector3 (Screen.width / nativeWidth, Screen.height / nativeHeight, 1));

		GUI.depth = guiDepth;

		if(GUI.Button(buttonRect, buttonLabel, buttonStyle)) {

			if(password == null) {

				eventManager.DoEvent(buttonEvent);
			}
			else if(password.GetCorrect()){

				eventManager.DoEvent(buttonEvent);
			}
		}
	}
}
