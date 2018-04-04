using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MoveOnKeyboard : MonoBehaviour {

	[SerializeField]
	private InputField inputField;

	[SerializeField]
	private float moveDistance = 250.0f;

	[SerializeField]
	private RectTransform rectPanel;
	private float defaultAnchoredPositionY;

	// Use this for initialization
	public void Start()
	{
		defaultAnchoredPositionY = rectPanel.anchoredPosition.y;
	}
	
	// Update is called once per frame
	public void Update()
	{
		if (TouchScreenKeyboard.visible && inputField.isFocused == true)
		{
			rectPanel.anchoredPosition = new Vector2(rectPanel.anchoredPosition.x, defaultAnchoredPositionY + moveDistance);
		}
		else
		{
			rectPanel.anchoredPosition = new Vector2(rectPanel.anchoredPosition.x, defaultAnchoredPositionY);
		}
	}
}
