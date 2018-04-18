using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CountAnimation : MonoBehaviour {

	private enum CountType
	{
		wholeNumber, decimalNumber
	}

	private enum InterpolationType
	{
		linear, smoothstep, sine, overshoot
	}

	[SerializeField]
	private CountType countType = CountType.wholeNumber;

	[SerializeField]
	private InterpolationType interpolationType = InterpolationType.linear;

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

    private int wholeNumberFull = -1;
	private float countTarget = -1.00f;
	private int wholeNumberCurrentCount = 0;
    private float startNumber = 0.00f;
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
		if (startCounting && delay < (Time.time - startTime))
		{
			numberIncrement += Time.deltaTime / duration;

			if (interpolationType == InterpolationType.linear) {
				decimalCurrentCount = Mathf.Lerp(startNumber, countTarget, numberIncrement);
			} else if (interpolationType == InterpolationType.smoothstep) {
				decimalCurrentCount = Mathf.SmoothStep(startNumber, countTarget, numberIncrement);
			} else if (interpolationType == InterpolationType.overshoot) {
				decimalCurrentCount = Berp(startNumber, countTarget, numberIncrement);
			} else if (interpolationType == InterpolationType.sine) {
				decimalCurrentCount = Sinerp(startNumber, countTarget, numberIncrement);
			}

			if (countType == CountType.wholeNumber) {
				wholeNumberCurrentCount = (int)Mathf.Round(countTarget);
                if (wholeNumberFull == -1) {
                    countText.text = string.Format(countTextTemplate, wholeNumberCurrentCount.ToString());
                } else {
                    countText.text = string.Format(countTextTemplate, wholeNumberCurrentCount.ToString(), wholeNumberFull.ToString());
                }

			} else if (countType == CountType.decimalNumber) {
				countText.text = string.Format(countTextTemplate, decimalCurrentCount.ToString("0.00"));
			}

			if (numberIncrement > 1) {
				turnOff();
			}

		}

	}

	private void turnOff()
	{
		startCounting = false;

		if (resetNumber)
		{
			wholeNumberCurrentCount = 0;
			decimalCurrentCount = 0.0f;
			numberIncrement = 0.00f;
		}
	}

	public void SetTargetWholeNumber(int target, int theStartNumber = 0, int targetFullNumber = -1)
	{
        wholeNumberFull = targetFullNumber;
        startNumber = theStartNumber;
        wholeNumberCurrentCount = theStartNumber;
        startCounting = true;
		startTime = Time.time;
		countTarget = target;

		if (countText != null)
		{
			countText.text = "";
		}
	}

	public void SetTargetDecimalNumber(float target)
	{
		startCounting = true;
		startTime = Time.time;
		countTarget = target;
		if (countText != null)
		{
			countText.text = "";
		}
	}

	public static float Berp(float start, float end, float value)
	{
		value = Mathf.Clamp01(value);
		value = (Mathf.Sin(value * Mathf.PI * (0.2f + 2.5f * value * value * value)) * Mathf.Pow(1f - value, 2.2f) + value) * (1f + (1.2f * (1f - value)));
		return start + (end - start) * value;
	}

	public static float Sinerp(float start, float end, float value)
	{
		return Mathf.Lerp(start, end, Mathf.Sin(value * Mathf.PI * 0.5f));
	}
}
