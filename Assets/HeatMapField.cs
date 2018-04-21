using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HeatMapField : MonoBehaviour {

	public enum HeatMapColor
    {
        Good,
        Mediocre,
        Poor,
        Unknown
    };

    [SerializeField]
    private Color GoodForegroundColor;
    [SerializeField]
    private Color GoodBackgroundColor;
    [SerializeField]
    private Color MediocreForegroundColor;
    [SerializeField]
    private Color MediocreBackgroundColor;
    [SerializeField]
    private Color PoorForegroundColor;
    [SerializeField]
    private Color PoorBackgroundColor;
    [SerializeField]
    private Color UnknownForegroundColor;
    [SerializeField]
    private Color UnknownBackgroundColor;


    [SerializeField]
    private Text fieldText;
    private string fieldTextTemplate = "";

    [SerializeField]
    private Image fieldBackground;

    [SerializeField]
    private Image fieldBorderHorizontal;

    [SerializeField]
    private Image fieldBorderVertical;

    // Use this for initialization
	void Awake () {
        fieldTextTemplate = fieldText.text;
	}

    public void SetHeatMapColor(HeatMapColor color)
    {
        Color backgroundColor = UnknownBackgroundColor;
        Color foregroundColor = UnknownForegroundColor;

        switch (color) {
            case HeatMapColor.Good:
                backgroundColor = GoodBackgroundColor;
                foregroundColor = GoodForegroundColor;
                break;
            case HeatMapColor.Mediocre:
                backgroundColor = MediocreBackgroundColor;
                foregroundColor = MediocreForegroundColor;
                break;
            case HeatMapColor.Poor:
                backgroundColor = PoorBackgroundColor;
                foregroundColor = PoorForegroundColor;
                break;
            default:
                backgroundColor = UnknownBackgroundColor;
                foregroundColor = UnknownForegroundColor;
                break;
        }

        fieldBackground.color = backgroundColor;
        fieldText.color = foregroundColor;
        fieldBorderHorizontal.color = foregroundColor;
        fieldBorderVertical.color = foregroundColor;

    }

    public void SetHeatMapValue(float heatMapValue)
    {
        if (heatMapValue > -1.0f) {
            fieldText.text = string.Format(fieldTextTemplate, heatMapValue.ToString("0.00"));
        } else {
            fieldText.text = "???";
        }
    }
}
