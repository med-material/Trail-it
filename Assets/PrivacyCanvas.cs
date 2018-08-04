using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrivacyCanvas : MonoBehaviour {

    [SerializeField]
    private ProfileManager profileManager;

    [SerializeField]
    private GameObject signOffButton;

    [SerializeField]
    private GameObject signedOffText;

	// Use this for initialization
	void Start () {
        if (profileManager.GetUploadPolicy()) {
            signOffButton.SetActive(true);
            signedOffText.SetActive(false);
        } else {
            signOffButton.SetActive(false);
            signedOffText.SetActive(true);            
        }
            
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
