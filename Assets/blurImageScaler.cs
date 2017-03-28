using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class blurImageScaler : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		this.transform.localScale += new Vector3 (0.00005f, 0.00005f, 0.00005f);
	}
}
