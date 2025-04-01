using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using Random = UnityEngine.Random;
using Object = UnityEngine.Object;
using UnityEngine.UI;

public class MainMenuScreen : MonoBehaviour {

	[SerializeField]
	private ProfileManager profileManager;

	[SerializeField]
	private ProgressionManager progressionManager;

	[SerializeField]
	private Text welcomeText;

	[SerializeField]
	private Text progressionText;
	private string progressionTextTemplate;

	private string welcomeTextTemplate;

	private string currentProfileID;
	private string currentName;

	private int progression = -1;

	// Use this for initialization
	void Start () {
		currentProfileID = profileManager.GetCurrentProfileID();
		welcomeTextTemplate = welcomeText.text;
		setTheWelcomeText ();

		progression = progressionManager.GetRemainingLevels();

		string currentCompletion = profileManager.GetCurrentCompletion(); 
		if (currentCompletion != "-1") {
				DateTime savedCompletion = DateTime.ParseExact(currentCompletion, "yyyy-MM-dd HH:mm", CultureInfo.InvariantCulture);
				DateTime timeNow = DateTime.Now;
				double totalHours = 6 - (timeNow - savedCompletion).TotalHours;
				var timeSpan = (savedCompletion.AddHours(6) - timeNow);
				progressionText.text = "Din næste træning er klar om " + string.Format("{0:D2}:{1:D2}:{2:D2}", timeSpan.Hours, timeSpan.Minutes, timeSpan.Seconds);
				//totalHours.ToString("0") + " timer.";
				//progressionText.text = "Du har klaret alle nye niveauer i dag.";
		} else {
			//progression = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Time", 2).ToString();
			progressionTextTemplate = progressionText.text;	
			progressionText.text = string.Format(progressionTextTemplate, progression.ToString());
		}
	}
	
	// Update is called once per frame
	void Update () {
		string currentCompletion = profileManager.GetCurrentCompletion(); 
		if (currentCompletion != "-1") {
				DateTime savedCompletion = DateTime.ParseExact(currentCompletion, "yyyy-MM-dd HH:mm", CultureInfo.InvariantCulture);
				DateTime timeNow = DateTime.Now;
				double totalHours = (timeNow - savedCompletion).TotalHours;
				if (totalHours > 6) { // 6 hour release time.
					profileManager.SetCurrentProfile(profileManager.GetCurrentProfileID());
				} else {
					var timeSpan = (savedCompletion.AddHours(6) - timeNow);
					progressionText.text = "Din næste træning er klar om " + string.Format("{0:D2}:{1:D2}:{2:D2}", timeSpan.Hours, timeSpan.Minutes, timeSpan.Seconds);
				}
		} else {
			//progression = PlayerPrefs.GetInt("Settings:" + currentProfileID + ":Time", 2).ToString();
			progressionTextTemplate = progressionText.text;	
			progressionText.text = string.Format(progressionTextTemplate, progression.ToString());
		}
	}

	public void setTheWelcomeText() {
		currentName = profileManager.GetCurrentName();
		welcomeText.text = string.Format (welcomeTextTemplate, currentName);
	}
}