using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CountAnimation : MonoBehaviour {

	private enum CountType
	{
		wholeNumber, decimalNumber
	}

	[SerializeField]
	private CountType countType = CountType.wholeNumber;

	[SerializeField]
	private float duration = 1.0f;

	[SerializeField]
	private float delay = 0.0f;
	private float startTime;

	[SerializeField]
	private bool resetNumber = true;

	private Text countText;
	private string countTextTemplate;

	private bool startCounting = false;

	private int wholeNumberCountTarget = -1;
	private int wholeNumberCurrentCount = 0;

	private float decimalCountTarget = -1.00f;
	private float decimalCurrentCount = 0.00f;
	private float numberIncrement = 0.01f;


	// Use this for initialization
	void Start () {

		startTime = Time.time;
		countText = this.gameObject.GetComponent<Text>();
		countTextTemplate = countText.text;

		countText.text = "";

	}
	
	// Update is called once per frame
	void Update () {
		if (startCounting && delay < (Time.time - startTime) )
		{
			if (countType == CountType.wholeNumber && wholeNumberCurrentCount < wholeNumberCountTarget)
			{

				CalculateWholeNumberIncrement();

				decimalCurrentCount += numberIncrement;
				if (decimalCurrentCount >= 1.0f)
				{
					wholeNumberCurrentCount += (int) Mathf.Round(decimalCurrentCount);
					decimalCurrentCount = 0.0f;
				}
				countText.text = string.Format(countTextTemplate, wholeNumberCurrentCount.ToString());
			}
			else if (countType == CountType.decimalNumber && decimalCurrentCount < decimalCountTarget)
			{

				CalculateDecimalIncrement();

				decimalCurrentCount += numberIncrement;
				countText.text = string.Format(countTextTemplate, decimalCurrentCount.ToString("0.00"));
			}
			else
			{
				startCounting = false;
				if (resetNumber)
				{
					wholeNumberCurrentCount = 0;
					decimalCurrentCount = 0.0f;
				}
			}

		}

	}

	private void CalculateWholeNumberIncrement()
	{

		if (duration <= 0.0f) {
			numberIncrement = wholeNumberCountTarget;
		}
		else
		{
			numberIncrement = (float)wholeNumberCountTarget / (duration / Time.deltaTime);
		}
	}

	private void CalculateDecimalIncrement()
	{
		if (duration <= 0.0f)
		{
			numberIncrement = decimalCountTarget;
		}
		else
		{
			numberIncrement = decimalCountTarget / (duration / Time.deltaTime);
		}
	}

	public void SetTargetWholeNumber(int target)
	{
		startCounting = true;
		startTime = Time.time;
		wholeNumberCountTarget = target;

		if (countText != null)
		{
			countText.text = "";
		}
	}

	public void SetTargetDecimalNumber(float target)
	{
		startCounting = true;
		startTime = Time.time;
		decimalCountTarget = target;
		if (countText != null)
		{
			countText.text = "";
		}
	}

}
