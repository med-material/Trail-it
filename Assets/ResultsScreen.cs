using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ResultsScreen : MonoBehaviour {

    struct ResultType
    {
        public int difficultyLevel;
        public string gameType;
        public int count;
    }

    [SerializeField]
    private DataManager dataManager;

    [SerializeField]
    private ProfileManager profileManager;

    private List<GameObject> resultButtons;

    [SerializeField]
    private Text headlineText;
    private string headlineTextTemplate;

    [SerializeField]
    private Text subText;
    private string subTextTemplate;


    [SerializeField]
    private GameObject resultsEmptyState;

    [SerializeField]
    private GameObject resultsButtonTemplate;

    [SerializeField]
    private GameObject resultsButtonHolder;

    private List<DataManager.SessionData> sessionDataList;

    private List<ResultType> resultTypes;

    // Use this for initialization
	void Start () {
		resultButtons = new List<GameObject>();
        resultTypes = new List<ResultType>();
        sessionDataList = dataManager.GetSessionDataList();
        subTextTemplate = subText.text;
        if (sessionDataList.Count > 0) {
            LoadDataButtons();
            if (sessionDataList.Count > 1) {
                subText.text = string.Format(subTextTemplate, profileManager.GetCurrentName(), sessionDataList.Count);
            } else {
                subText.text = string.Format(subTextTemplate.Remove(subTextTemplate.Length -1), profileManager.GetCurrentName(), sessionDataList.Count);
            }
            resultsEmptyState.SetActive(false);
        } else {
            subText.gameObject.SetActive(false);
            resultsEmptyState.SetActive(true);
        }


	}

    private void CreateResultButton(int difficultyLevel, string gameType, int count)
    {
        GameObject newButton = (GameObject)Instantiate(resultsButtonTemplate, resultsButtonHolder.transform);

        newButton.GetComponent<ResultsButton>().SetData(gameType, difficultyLevel, count);
        newButton.SetActive(true);
        resultButtons.Add(newButton);
    }

    private void LoadDataButtons()
    {
        foreach (var session in sessionDataList) {
            bool matched = false;
            for (int i = 0; i < resultTypes.Count; i++) {
                if (session.difficultyLevel == resultTypes[i].difficultyLevel && session.gameType == resultTypes[i].gameType) {
                    resultTypes[i] = new ResultType { count = resultTypes[i].count + 1, difficultyLevel = session.difficultyLevel, gameType = session.gameType };
                    matched = true;
                }
            }
            if (!matched) {
                ResultType resultType = new ResultType { count = 1, difficultyLevel = session.difficultyLevel, gameType = session.gameType };
                resultTypes.Add(resultType);
            }
        }

        foreach (var resultType in resultTypes) {
            Debug.Log("difficultyLevel: " + resultType.difficultyLevel + " gameType: " + resultType.gameType + " count: " + resultType.count);
            CreateResultButton(resultType.difficultyLevel, resultType.gameType, resultType.count);
        }

    }
	
}
