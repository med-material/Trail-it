using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class moveBlurLines : MonoBehaviour {

	private Vector3 originalPos;


	// Use this for initialization
	void Start () {
		originalPos = this.transform.position;
		
	}
	
	// Update is called once per frame
	void Update () {
		this.transform.position += new Vector3 (0.0f, 0.2f, 0.0f);
		if (this.transform.position.y > 600) {
			this.transform.position = originalPos;
		}
	}
}
