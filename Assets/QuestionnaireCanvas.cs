using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class QuestionnaireCanvas : MonoBehaviour {

	[SerializeField]
	GameManager gameManager;

	[SerializeField]
	ProfileManager profileManager;

	// playContext
	[SerializeField]
	Toggle[] playContextToggles;

	// ageGroup
	[SerializeField]
	Toggle[] under40Toggles;
	[SerializeField]
	Toggle[] over40Toggles;
	[SerializeField]
	Image over40Button;
	[SerializeField]
	Image under40Button;
	private bool ageUnder40;
	[SerializeField]
	Sprite selectedButtonImage;
	[SerializeField]
	Sprite primaryButtonImage;

	// trainingReason
	[SerializeField]
	Toggle[] trainingReasonToggles;

	public void SavePlayContext()
	{
		string currentPlayContext = GetPlayContext();
		profileManager.SetPlayContext(currentPlayContext);
	}

	public void SaveAgeGroup()
	{
		string currentAgeGroup = GetAgeGroup();
		profileManager.SetAgeGroup(currentAgeGroup);
	}

	public void SaveTrainingReason()
	{
		string currentTrainingReason = GetTrainingReason();
		profileManager.SetTrainingReason(currentTrainingReason);
	}

	public void SetUnder40ButtonSelected()
	{
		under40Button.sprite = selectedButtonImage;
		over40Button.sprite = primaryButtonImage;
		ageUnder40 = true;
	}

	public void SetOver40ButtonSelected()
	{
		over40Button.sprite = selectedButtonImage;
		under40Button.sprite = primaryButtonImage;
		ageUnder40 = false;
	}

	public string GetPlayContext()
	{
		string playContext = "Unknown";
		int playContextIndex = -1;
		for (int i = 0; i < playContextToggles.Length; i++)
		{
			if (playContextToggles[i].isOn)
			{
				playContextIndex = i;
				break;
			}
		}

		switch (playContextIndex)
		{
			case 0:
				playContext = "Home";
				break;

			case 1:
				playContext = "Rehab";
				break;

			case 2:
				playContext = "RehabNowHome";
				break;

			default:
				playContext = "Unknown";
				Debug.Log("no play context was selected.");
				break;
		}

		return playContext;


	}

	public string GetTrainingReason()
	{
		string trainingReason = "Unknown";
		int trainingReasonIndex = -1;
		for (int i = 0; i < trainingReasonToggles.Length; i++)
		{
			if (trainingReasonToggles[i].isOn)
			{
				trainingReasonIndex = i;
				break;
			}
		}

		switch (trainingReasonIndex)
		{
			case 0:
				trainingReason = "OtherReason";
				break;

			case 1:
				trainingReason = "PoorVision";
				break;

			case 2:
				trainingReason = "PoorFocus";
				break;

			case 3:
				trainingReason = "VisualNeglect";
				break;

			default:
				trainingReason = "Unknown";
				Debug.Log("no training reason was selected.");
				break;
		}

		return trainingReason;
	}

	public string GetAgeGroup()
	{
		Toggle[] toggles;
		int indexAdditive = 0;
		string ageGroup = "Unknown";

		if (ageUnder40)
		{
			toggles = under40Toggles;
		}
		else
		{
			toggles = over40Toggles;
			indexAdditive = 4;
		}

		int ageGroupIndex = -1;
		for (int i = 0; i < toggles.Length; i++)
		{
			if (toggles[i].isOn)
			{
				ageGroupIndex = i;
				break;
			}
		}

		if (ageGroupIndex > -1)
		{
			ageGroupIndex += indexAdditive;
		}

		switch (ageGroupIndex)
		{
			case 0:
				ageGroup = "Under 13";
				break;
				
			case 1:
				ageGroup = "13-17";
				break;

			case 2:
				ageGroup = "18-24";
				break;

			case 3:
				ageGroup = "25-39";
				break;

			case 4:
				ageGroup = "40-59";
				break;

			case 5:
				ageGroup = "60-69";
				break;

			case 6:
				ageGroup = "70-79";
				break;

			case 7:
				ageGroup = "Over 80";
				break;

			default:
				ageGroup = "Unknown";
				Debug.Log("no age was selected.");
				break;
		}

		return ageGroup;
	}
}
