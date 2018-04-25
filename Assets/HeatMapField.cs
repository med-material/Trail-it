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
    private Text fieldDetails;
    private string fieldDetailsTemplate = "";

    [SerializeField]
    private Image fieldBackground;

    [SerializeField]
    private Image fieldBorderHorizontal;

    [SerializeField]
    private Image fieldBorderVertical;

    private bool showingDetails = false;
    // Use this for initialization
	void Awake () {
        fieldTextTemplate = fieldText.text;
        fieldDetailsTemplate = fieldDetails.text;
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
        fieldDetails.color = foregroundColor;
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

    public void SetHeatMapDetails(int outlierCount, int assistanceCount)
    {
        if (assistanceCount > -1 && outlierCount > -1) {
            fieldDetails.text = string.Format(fieldDetailsTemplate, outlierCount, assistanceCount);
        } else {
            fieldDetails.text = "Ingen detaljer tilgængelige..";
        }
    }

    public void Field_Clicked()
    {
        if (showingDetails) {
            fieldText.gameObject.SetActive(true);
            fieldDetails.gameObject.SetActive(false);
            showingDetails = false;
        } else {
            fieldText.gameObject.SetActive(false);
            fieldDetails.gameObject.SetActive(true);
            showingDetails = true;
        }
    }
}
