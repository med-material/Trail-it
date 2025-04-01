using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BackgroundRotation : MonoBehaviour {

	[SerializeField]
	private Sprite[] backgrounds;

	[SerializeField]
	private SpriteRenderer spriteRenderer;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void SetBackground(int b)
	{
		spriteRenderer.sprite = backgrounds[b];
	}

	public void ChangeBackground()
	{
		int r = Random.Range(0, backgrounds.Length);
		spriteRenderer.sprite = backgrounds[r];
	}
}
