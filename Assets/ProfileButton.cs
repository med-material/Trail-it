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
	private ProfileManager profileManager;

	[SerializeField]
	private GameObject nameText;

	private string id = "Gæst";

	public void setAsProfile() {
		profileManager.SetCurrentProfile (id);
		Debug.Log ("ProfileID: " + id + " Name: " + nameText.GetComponent<Text> ().text + " is now set as profile");
	}

	public void SetID(string newID) {
		id = newID;
	}

	public void SetName(string newName) {
		if (newName != "") {
			nameText.GetComponent<Text> ().text = newName;
			nameText.SetActive (true);
		}
	}
}
