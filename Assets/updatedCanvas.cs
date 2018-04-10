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
		if (shouldUpload)
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
