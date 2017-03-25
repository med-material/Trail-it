using UnityEngine;
using System.Collections;

[ExecuteInEditMode]

public class StaticElement : MonoBehaviour {

	public Rect rect;
	public Texture texture;

	public int guiDepth;
	
	private float nativeWidth = 1024;
	private float nativeHeight = 768;

	void OnGUI () {
		
		GUI.matrix = Matrix4x4.TRS (Vector3.zero, Quaternion.identity, new Vector3 (Screen.width / nativeWidth, Screen.height / nativeHeight, 1));

		GUI.depth = guiDepth;
		
		GUI.DrawTexture (rect, texture);
	}
}
