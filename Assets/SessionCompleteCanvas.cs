using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SessionCompleteCanvas : MonoBehaviour {


    [SerializeField]
    CountAnimation aggregateReactionTime;

    [SerializeField]
    CountAnimation trainingTime;

    [SerializeField]
    CircularLineVisualization hitsVis;

    [SerializeField]
    CircularLineVisualization errorVis;

    [SerializeField]
    CountAnimation hitsText;

    [SerializeField]
    DataManager dataManager;

    DataManager.SessionData sessionData;

    // Use this for initialization
	void Start () {
        sessionData = dataManager.GetSessionData();

        trainingTime.SetTargetWholeNumber(Mathf.RoundToInt(sessionData.sessionLength));
        aggregateReactionTime.SetTargetDecimalNumber(sessionData.reactionTime);

        hitsVis.SetTargetWholeNumber(sessionData.hitCount, 0, (sessionData.hitCount + sessionData.errorCount));
        errorVis.SetTargetWholeNumber((sessionData.hitCount + sessionData.errorCount), sessionData.hitCount, (sessionData.hitCount + sessionData.errorCount));

        hitsText.SetTargetWholeNumber(sessionData.hitCount, 0, (sessionData.hitCount + sessionData.errorCount));
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
