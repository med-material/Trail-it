using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Fadein : MonoBehaviour {

	Image sprite;
	Text text;
	public float duration;
	public float startDelay;
	public bool startNow = true;
	private float f = 0f;
	private bool fadeIn = false;
	private float startTime;

	// Use this for initialization
	void Start () {
		sprite = this.GetComponent<Image> ();
		text = this.GetComponent<Text> ();
		this.ResetFade ();
		//Debug.Log (gameObject);
	}
	
	// Update is called once per frame
	void Update () {
		if (!startNow) {
			startTime = Time.fixedTime;
			return;
		}

		if (startDelay < (Time.fixedTime - startTime)) {
			fadeIn = true;
		}
		//Debug.Log(Time.fixedTime - startTime + " seconds passed");	

		if (fadeIn) {
			if (sprite != null) {
				sprite.color = new Color (sprite.color.r, sprite.color.g, sprite.color.b, f);
			}
			if (text != null) {
				text.color = new Color (text.color.r, text.color.g, text.color.b, f);
			}
			if (f >= 1) {
				fadeIn = false;
				startNow = false;
				f = 0;
				//Debug.Log ("fading stopped!: " + f);
			}
			f += Time.deltaTime / duration;
			//Debug.Log ("alpha is: " + f);
		}
	}

	public void ResetFade() {
		print ("resetFade() called");
		f = 0f;
		startNow = true;
		fadeIn = false;

		if (sprite != null) {
			sprite.color = new Color (sprite.color.r, sprite.color.g, sprite.color.b, 0f);
			//Debug.Log ("found sprite");
		}
		if (text != null) {
			text.color = new Color (text.color.r, text.color.g, text.color.b, 0f);
			//Debug.Log ("found text");
		}
		startTime = Time.fixedTime;
	}

}
