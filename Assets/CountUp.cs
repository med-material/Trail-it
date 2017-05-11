using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CountUp : MonoBehaviour {

	public float floatnum = 0.00f;
	public int intnum = 0;
	private int currentIntnum = 0;
	private float currentFloatnum = 0;
	private Text myText;
	public float speed;
	private bool _startNow = false;

	private string template;

	// Use this for initialization
	void Start () {
		template = myText.text;
		myText = this.GetComponent<Text> ();
		
	}
	
	// Update is called once per frame
	void Update () {
		if (this._startNow) {
			//print ("floatnum: " + this.floatnum);
			print ("intnum: " + this.intnum);
			if (floatnum >= 0.00f) {
				print ("floatnum activated");
				currentFloatnum += 0.01f;
				myText.text = string.Format(template, currentFloatnum.ToString());
				floatnum -= 0.01f;
			} else if (intnum >= 0) {
				print ("intnum activated");
				currentIntnum += 1;
				myText.text = string.Format(template, currentIntnum.ToString());
				intnum -= 1;
			} else {
				this.SetStart(false);
			}

		}

		
	}

	public void SetStart(bool startNow) {
		if (!startNow) {
			this.floatnum = 0.00f;
			this.intnum = 0;
			this.currentIntnum = 0;
			this.currentFloatnum = 0.00f;
		}
		this._startNow = startNow;
		print ("startNow set to: " + this._startNow);
		return;
	}


}
