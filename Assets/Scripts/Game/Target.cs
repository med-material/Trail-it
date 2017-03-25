using UnityEngine;
using System.Collections;

public class Target : MonoBehaviour {

	public Sprite whiteTarget;
	public Sprite greenTarget;
	public Sprite greenOutline;
	public Sprite redTarget;

	private int targetID;
	private TextMesh targetLabel;
	private SpriteRenderer sprite;
	private Animation pulse;
	private bool obstacle = false;
	private bool rightSide;
	private bool red = false;

	// Use this for initialization
	void Awake () {

		sprite = transform.FindChild("Circle").GetComponent<SpriteRenderer>();
		pulse = transform.FindChild("Circle").GetComponent<Animation>();
		targetLabel = transform.GetChild (0).GetComponent<TextMesh> ();

		if(transform.position.x - GameObject.Find("Main Camera").transform.position.x > 0) {

			rightSide = true;
		}
		else {

			rightSide = false;
		}
	}
	
	public void SetID (int inputID) {

		targetID = inputID;
	}

	public int GetID () {
		
		return targetID;
	}

	public void SetObstacle (bool inputObstacle) {
		
		obstacle = inputObstacle;
	}
	
	public bool GetObstacle () {
		
		return obstacle;
	}

	public void SetLabel (string inputLabel) {
		
		targetLabel.text = inputLabel;
	}

	public string GetLabel () {

		return targetLabel.text;
	}

	public void SetWhite () {
		
		sprite.sprite = whiteTarget;
		targetLabel.color = Color.black;
		red = false;
	}

	public void SetGreen () {
		
		sprite.sprite = greenTarget;
		targetLabel.color = Color.white;
		red = false;
	}

	public void SetGreenOutline () {
		
		sprite.sprite = greenOutline;
		targetLabel.color = Color.black;
		red = false;
	}

	public void SetRed () {
		
		sprite.sprite = redTarget;
		targetLabel.color = Color.white;
		red = true;
	}

	public void TurnDark () {
		
		sprite.color = new Color (0.2f, 0.2f, 0.2f);
	}

	public void TurnLight () {
		
		sprite.color = Color.white;
	}

	public void PlayPulse() {

		pulse.Play ("Pulse");
	}

	public void StopPulse() {

		pulse ["Pulse"].time = 0;
		pulse.Sample ();
		pulse.Stop ();
	}

	public bool GetSide() {

		return rightSide;
	}

	public bool IsRed() {

		return red;
	}

	public float GetX () {

		return transform.position.x;
	}
}
