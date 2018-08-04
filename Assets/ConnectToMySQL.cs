using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using System.IO;
using System;

public class ConnectToMySQL : MonoBehaviour {
	
	[SerializeField]
	private LoggingManager loggingManager;

	private string url;

	[SerializeField]
	private myURL serverUrl;
	private string securityCode;
	public static string response = "";
	public static bool dataReceived = false;
	public static ConnectToMySQL instance = null;

	private static bool isConnected = false;
	private int retries = 0;
	//private Dictionary<string, string> wwwHeader = new Dictionary<string, string> ();
	private string secHash;
    private string dataHash;

	void Awake() {
		// Setting the headers in order to get through the security of the server
		//wwwHeader["Accept"] = "*/*";
		//wwwHeader["Accept-Encoding"] = "gzip, deflate";
		//wwwHeader["User-Agent"] = "runscope/0.1";

		securityCode = serverUrl.GetSecurityCode ();
		//string[] splitArray = serverUrl.text.Split(char.Parse(","));
		//url = "http://" + splitArray [0] + "/" + splitArray [1] + "/" + splitArray [2];
		url = serverUrl.GetServerUrl();
		WWWForm testForm = new WWWForm ();
		testForm.AddField ("purposePost", "connectionTest");
		secHash = Utils.Md5Sum (securityCode);
		testForm.AddField ("secHashPost", secHash);

		if (instance == null) {
			instance = this;
			if(!isConnected) {
				StartCoroutine(ConnectToServer (testForm));
			}
		}
	}

	IEnumerator ConnectToServer(WWWForm form) {

		if (url != "") {
			WWW www = new WWW (url, form);

			yield return www;

			if(www.error == null) {
				print ("Connected to Server");
				isConnected = true;
			} else {
				Debug.LogError(www.error);
				yield return new WaitForSeconds(2.0f);
				retries++;
				if (retries < 3) {
					StartCoroutine (ConnectToServer (form));
				}
			}
		} else {
			Debug.LogError("No URL was assigned");
		}
	}

	public void UploadLog(List<string> input) {
		WWWForm form = new WWWForm ();

		form.AddField ("purposePost", "submitLogs_v2018.07.01");    
		form.AddField ("secHashPost", secHash);

		// Create a string with the data
		string data = "";
		for(int i = 0; i < input.Count; i++) {
			if(i != 0) {
				data += ";";
			}
			data += input[i];
		}
        dataHash = Utils.Md5Sum(data);
        form.AddField("dataHashPost", dataHash);

		Debug.Log ("data to submit: " + data);
		form.AddField ("dataPost", data);

		StartCoroutine (SubmitLogs (form));
	}

	IEnumerator SubmitLogs(WWWForm form) {
		Debug.Log ("Submitting logs..");
		WWW www = new WWW (url, form);

		yield return www;

		if (www.error == null) {
			Debug.Log ("Posted successfully");
			loggingManager.ClearLogsToUpload ();
		} else {
			Debug.Log("Unable to submit logs: " + www.error);
		}

	}
		
}
