using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeatMapController : MonoBehaviour {

    [SerializeField]
    HeatMapField[] upperFields;
    [SerializeField]
    HeatMapField[] lowerFields;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void Init(float[,] heatMapValues, float bestValue, float worstValue)
    {
        // Analysis of heat map values

        // Find out the maximum and minimum span of values (or include that as sessionData?)

        // Determine what constitues "Poor", "Mediocre" and "Good" performances.

        for (int i = 0; i < heatMapValues.GetLength(1); i++) {
            for (int j = 0; j < heatMapValues.GetLength(0); j++) {
                if (i == 1) {
                    upperFields[j].SetHeatMapColor(HeatMapField.HeatMapColor.Good);
                    upperFields[j].SetHeatMapValue(heatMapValues[j, i]);
                } else if (i == 0) {
                    lowerFields[j].SetHeatMapColor(HeatMapField.HeatMapColor.Good);
                    lowerFields[j].SetHeatMapValue(heatMapValues[j, i]);
                }
            }
        }
    }

}
