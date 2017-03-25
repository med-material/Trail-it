using UnityEngine;
using UnityEngine.EventSystems;


public class InputHandler : MonoBehaviour 
{
	private bool touchDown; 
	private bool touchActive; 
	private bool touchUp; 

	void LateUpdate () 
	{
		touchDown = Input.GetMouseButtonDown (0) && !EventSystem.current.IsPointerOverGameObject();
		touchActive = Input.GetMouseButton (0) && !EventSystem.current.IsPointerOverGameObject();
		touchUp = Input.GetMouseButtonUp (0) && !EventSystem.current.IsPointerOverGameObject(); 
	}

	public bool TouchDown {	get { return touchDown; } private set { touchDown = value; }	}
	public bool TouchActive {	get { return touchActive; } private set { touchActive = value; }	}
	public bool TouchUp {	get { return touchUp; } private set { touchUp = value; }	}
}
