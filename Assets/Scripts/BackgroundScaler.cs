using UnityEngine;

[ExecuteInEditMode]
public class BackgroundScaler : MonoBehaviour
{
    public float scale = 1f;
	public Vector3 offset; 
	
	// Update is called once per frame
	void LateUpdate ()
	{
        // Scale this transform according to camera and scale
        transform.localScale = Vector3.one * (Camera.main.orthographicSize * Camera.main.aspect * scale);
		transform.position = Camera.main.ViewportToWorldPoint(new Vector3(0.5f,0.5f,0)) + offset;
	}
}
