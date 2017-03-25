using UnityEngine;
using System.Collections;

public class SessionManager : MonoBehaviour {

	public float totalSessionTime;
	public float resetTime;
	
	private System.DateTime sessionStart;
	private System.DateTime lastInteraction;

	private LoggingManager loggingManager;
	
	// Use this for initialization
	void Start () {
		
		ResetSessionTime ();
		loggingManager = this.GetComponent<LoggingManager> ();
	}
	
	// Update is called once per frame
	void Update () {
		
		if(Input.GetMouseButtonDown(0)) {
			
			lastInteraction = System.DateTime.Now;
		}
		
		if (System.DateTime.Now.Subtract (lastInteraction).TotalMinutes > resetTime) {
			
			ResetSessionTime();
			Application.LoadLevel("PlayerSelect");
			loggingManager.NewLog();
			loggingManager.WriteLog("Game Reset - Inactivity");
		}
		
		if ((Application.loadedLevelName == "PlayerSelect" || Application.loadedLevelName == "MainMenu") && GetMinutesLeft() <= 0) {
			
			ResetSessionTime();
			loggingManager.WriteLog("Session Time Reset");
		}
	}
	
	void ResetSessionTime() {
		
		sessionStart = System.DateTime.Now;
		lastInteraction = System.DateTime.Now;
	}
	
	public int GetMinutesLeft () {

		return (int) (totalSessionTime - System.DateTime.Now.Subtract (sessionStart).Minutes);
	}

	public float GetSessionSeconds () {

		return (float) System.DateTime.Now.Subtract (sessionStart).TotalSeconds;
	}
}
