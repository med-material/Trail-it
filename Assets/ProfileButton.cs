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
	private ProfileScreen profileScreen;

	[SerializeField]
	private GameObject nameText;

	private string id = "Gæst";

	public void buttonClick()
	{
		profileScreen.ProfileButtonClick(this);
	}

	public void SetID(string newID) {
		id = newID;
	}

	public string GetID()
	{
		return id;
	}

	public string GetName()
	{
		return nameText.GetComponent<Text>().text;
	}

	public void SetName(string newName) {
		if (newName != "") {
			nameText.GetComponent<Text> ().text = newName;
			nameText.SetActive (true);
		}
	}
}
