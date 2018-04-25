using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class updatedCanvas : MonoBehaviour
{

	[SerializeField]
	GameManager gameManager;

	[SerializeField]
	ProfileManager profileManager;

	[SerializeField]
	GameObject QuestionnaireCanvas;

	public void NextButtonClicked()
	{
		bool shouldUpload = profileManager.GetUploadPolicy();
        string trainingReason = profileManager.GetCurrentTrainingReason();
        string ageGroup = profileManager.GetCurrentAgeGroup();
        string context = profileManager.GetCurrentPlayContext();
		if (shouldUpload && trainingReason == "Unknown" && ageGroup == "Unknown" && context == "Unknown")
		{
			QuestionnaireCanvas.SetActive(true);
			this.gameObject.SetActive(false);
		}
		else
		{
			gameManager.ResetGame();
		}
	}
}
