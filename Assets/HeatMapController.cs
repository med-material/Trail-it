using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeatMapController : MonoBehaviour {

    [SerializeField]
    HeatMapField[] upperFields;
    [SerializeField]
    HeatMapField[] lowerFields;

    public void Init(float[,] heatMapValues, float medianValue)
    {
        // TODO: When a "Poor" performance is found, downscale other performances that are better,
        // to Mediocre.

        for (int i = 0; i < heatMapValues.GetLength(1); i++) {
            for (int j = 0; j < heatMapValues.GetLength(0); j++) {
                Debug.Log("adding value " + heatMapValues[j, i] + " to field[" + i + "," + j + "]");
                HeatMapField.HeatMapColor color = HeatMapField.HeatMapColor.Unknown;
                if (heatMapValues[j, i] > medianValue * 2.0f) {
                    color = HeatMapField.HeatMapColor.Poor;
                } else if (heatMapValues[j, i] > 7.5f) {
                    color = HeatMapField.HeatMapColor.Poor;
                } else if (heatMapValues[j, i] > medianValue * 1.5f) {
                    color = HeatMapField.HeatMapColor.Mediocre;
                } else if (heatMapValues[j, i] > 5.0f) {
                    color = HeatMapField.HeatMapColor.Mediocre;
                } else {
                    color = HeatMapField.HeatMapColor.Good;
                }

                if (i == 1) {
                    upperFields[j].SetHeatMapColor(color);
                    upperFields[j].SetHeatMapValue(heatMapValues[j, i]);
                } else if (i == 0) {
                    lowerFields[j].SetHeatMapColor(color);
                    lowerFields[j].SetHeatMapValue(heatMapValues[j, i]);
                }
            }
        }
    }

}
