/**
 * ArduinoScript.cs
 * - Receive data from the Arduino serial port into Unity3D
 * - Change COM port and baut rate in ArduinoReceiver.cs
 * Version 1.0
 * Author: Jacob B. Madsen
 *         jbm@create.aau.dk
 **/

using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO.Ports;


public class ArduinoDataReceiver : MonoBehaviour
{
	#region Variables
    private bool applicationStarted = false;
	
	// COMPort and baut-rate to open
    // CHANGE THIS (NAME AND BAUT-RATE) TO YOUR NEED, AND REMEMBER TO CHANGE IN ARDUINO CODE AS WELL!
	
	//private static SerialPort serialport = new SerialPort("COM1", 9600); 					// WINDOWS
	//private static SerialPort serialport = new SerialPort("/dev/ttyS0", 9600); 			// LINUX
	private static SerialPort serialport = new SerialPort("/dev/tty.usbmodemfd121", 9600); 	// MAC
	// According to : http://forum.arduino.cc/index.php?topic=56728.0;wap2
	
	
    // Received data (as a list of strings)
    public List<string> receivedData = new List<string>();
	#endregion
	
	#region Default Unity functions
    // Default Unity Start Function
    private void Start()
    {
        // Start application if not already started
        if (!applicationStarted)
        {
            OpenConnection();
            StartCoroutine(ReceiveDataRoutine());
            applicationStarted = true;
        }
        else
        {
            Debug.Log("Application already started. Use it as is, or close it to start again.");
        }
    }
	
	// Default Unity Function, Called when exiting or stopping the application
    private void OnApplicationQuit()
    {
        CloseConnection();
    }
	#endregion
	
	#region Receive and parse data functions
    // Coroutine handling the incomming data
    private IEnumerator ReceiveDataRoutine()
    {
		string[] splitStr = null;

		yield return new WaitForSeconds (2f); // Delay for two seconds before test

        while (serialport.IsOpen)
        {
            // Yield untill end of frame, to allow Unity to continue as normal
            yield return null;

			// Reset splitstr in order to ensure no data left
			splitStr = null;
			
			try
			{
				// Read line from seial in
				string s = serialport.ReadLine();
				Debug.Log(s);
				// split based on ","
            	splitStr = s.Split(',');
			}
			catch(System.Exception) { }

			if (splitStr != null)// && splitStr.Length != 6) // Ignore if not 6, as that means corrupt data
			{
				// Clear current numbers if new data fits
				receivedData.Clear();

            	for (int i = 0; i < splitStr.Length; i++)
            	{
            		receivedData.Add (splitStr[i]);
            	}
			}
        }
    }
	
	// Returns the data input (string) to INT if possible, or returns -1 and a debug log
    public int ToInteger(string input)
    {
        int temp = -1;

        try
        {
            temp = int.Parse(input);
        }
        catch (FormatException e)
        {
            Debug.Log("Input string is not a sequence of digits (int). (" + e.ToString() + ")");
        }

        return temp;
    }
	
	// Returns the data input (string) to FLOAT if possible, or returns -1f and a debug log
    public float ToFloat(string input)
    {
        float temp = -1f;

        try
        {
            temp = float.Parse(input);
        }
        catch (FormatException e)
        {
            Debug.Log("Input string is not a sequence of digits (float). (" + e.ToString() + ")");
        }

        return temp;
    }
	#endregion
	
	#region Open and close connections
    // Opens the connection to the Arduino
    // Is run from the Unity Start function
    public void OpenConnection()
    {
		//try
		{
	        if (serialport != null)
	        {
	            if (serialport.IsOpen)
	            {
	                //Serial port is already open. We ignore it for now, or we can close it.
	                //serialport.Close();
	            }
	            else
	            {
	                //Open the connection to read data
	                serialport.Open();
	                //Set time-out value before reporting error
	                serialport.ReadTimeout = 100;
	                Debug.Log("Connected to Arduino, on port: " + serialport.PortName);
	            }
	        }
	        else
	        {
	            if (serialport.IsOpen)
	            {
	                //Port is already open
	                Debug.LogWarning("The port is already open. Port: " + serialport.PortName);
	            }
	            else
	            {
	                //The port does not appear to exist
	                Debug.LogWarning("The port does not appear to exist. Port: " + serialport.PortName);
	            }
	        }
		}
		//catch (System.Exception e)
		//{
		//	Debug.LogWarning("The system could not recognize the PORT NAME for the Arduino connection. Cannot open connection. ERROR code: " + e.ToString());
		//}
    }

    // Closes the connection to the Arduino
    // Should be run before closing the Unity program
    public void CloseConnection()
    {
        if (serialport.IsOpen)
        {
            Debug.Log("Closing connection to Arduino, on port: " + serialport.PortName);
            //If the connection is open, we close it before ending the program
            serialport.Close();
            applicationStarted = false;
        }
    }
	#endregion
	
}
