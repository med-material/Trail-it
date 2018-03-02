using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;
using Object = UnityEngine.Object;
using UnityEngine.UI;

public class ProfileButton : MonoBehaviour {

	[SerializeField]
	private ProfileScreen profileScreen;

	[SerializeField]
	private GameObject nameText;

	private int id = -1;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void setAsProfile() {
		profileScreen.SetCurrentProfile (id);
		Debug.Log ("ProfileID: " + id + " Name: " + nameText.GetComponent<Text> ().text + " is now set as profile");
	}

	public void SetID(int newID) {
		id = newID;
	}

	public void SetName(string newName) {
		if (newName != "") {
			nameText.GetComponent<Text> ().text = newName;
			nameText.SetActive (true);
		}
	}
}
