using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClickDismiss : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}

	void Update () {
		HideIfClickedOutside (this.gameObject);
		
	}

	private void HideIfClickedOutside(GameObject panel) {
		if (Input.GetMouseButton(0) && panel.activeSelf && 
			!RectTransformUtility.RectangleContainsScreenPoint(
				panel.GetComponent<RectTransform>(), 
				Input.mousePosition, 
				null)) {
			print ("hide!");
			panel.SetActive(false);
		}
	}


}
