using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum DataType
{
    Time,
    Date
};

public class DataPoint : ScriptableObject {

    public float x = -1.0f;
    public float y = -1.0f;

    public DataType dataTypeX;
    public DataType dataTypeY;

    // Use this for initialization
	void Start () {
        dataTypeX = DataType.Date;
        dataTypeY = DataType.Time;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
