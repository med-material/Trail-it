using UnityEngine;
using System.Collections;

[ExecuteInEditMode]

public class Password : MonoBehaviour {

	public string password;
	public Rect pswRect;
	public int guiDepth;
	public GUIStyle pswStyle;

	private string inputPsw = "";

	private float nativeWidth = 1024;
	private float nativeHeight = 768;

	// Use this for initialization
	void OnGUI () {

		GUI.matrix = Matrix4x4.TRS (Vector3.zero, Quaternion.identity, new Vector3 (Screen.width / nativeWidth, Screen.height / nativeHeight, 1));
		
		GUI.depth = guiDepth;

		inputPsw = GUI.TextField (pswRect, inputPsw, pswStyle);
	}

	public bool GetCorrect() {

		if(inputPsw == password) {

			return true;
		}
		else {

			return false;
		}
	}
}
