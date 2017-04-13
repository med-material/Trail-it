using UnityEngine;
using UnityEngine.EventSystems;


public class InputHandler : MonoBehaviour 
{
	private bool touchDown; 
	private bool touchActive; 
	private bool touchUp; 
	private Vector3 touchPos; 

	private Camera inputCam; 

	void Start() 
	{
		inputCam = Camera.main; 
	}
	void Update () 
	{
		touchDown = Input.GetMouseButtonDown (0) && !EventSystem.current.IsPointerOverGameObject();
		touchActive = Input.GetMouseButton (0) && !EventSystem.current.IsPointerOverGameObject();
		touchUp = Input.GetMouseButtonUp (0) && !EventSystem.current.IsPointerOverGameObject(); 
		touchPos = inputCam.ScreenToWorldPoint (Input.mousePosition);
        touchPos.z = 0f; 
	}

	public bool TouchDown {	get { return touchDown; } private set { touchDown = value; }	}
	public bool TouchActive {	get { return touchActive; } private set { touchActive = value; }	}
	public bool TouchUp {	get { return touchUp; } private set { touchUp = value; }	}
	public Vector3 TouchPos { get { return touchPos; } private set { touchPos = value; } }
}
