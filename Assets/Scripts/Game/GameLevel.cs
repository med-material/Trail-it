using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.Linq;

public enum HitType
{
    ObstacleHit,
    TargetHitLevelComplete,
    TargetHit,
    Backtracking,
    LastValidHit,
    WrongTargetHit,
    NoHit
};

public class GameLevel : MonoBehaviour
{

    public GameObject targetPrefab;
    public string[] labelsA;
    public string[] labelsB;
    public string[] obstacleLabels;
    public AudioClip correctClip;
    public AudioClip errorClip;
    public float endDelay;

    public LineDrawer lineDrawer;

    private GameObject[] targetObjects;
    private GameObject[] obstacleObjects;
    private Target[] targets;
    private Target[] obstacles;

    private GameManager gameManager;
    private bool gameA;
    public string[] levelData;

    private Transform camTransform;
    private Camera mainCam;

    private int outset;
    private int currentTarget = 0;
    private int hit;
    private int lastValid;
    private bool correctingError;
    private int errorsInRow;
	private int errorTotal = 0;
	public bool shouldCountTotal = true;
	private int countTotal = 0;
    //private bool levelComplete = false; // Assigned to but never used
    //private float completionTime; Never used

    private Collider2D colliderHit;
    private Collider2D tempHit;

    private AudioSource correctSound;
    private AudioSource errorSound;

    private AssistanceManager assistanceManager;
    private LoggingManager loggingManager;

    private float startTime;
    public float StartTime { get { return startTime; } }

    public static bool _DidInit = false;

    [Range(0.001f, 1.0f)]
    public float TargetSpawnDelay = 0.01f;

    [SerializeField]
    private AudioClip[] spawnTargetsSounds; 

    private AudioSource audioSource; 

    public void Init(GameManager gm)
    {
        if (_DidInit)
            return;

        gameManager = gm;
        loggingManager = gm.GetComponent<LoggingManager>();
        assistanceManager = this.GetComponent<AssistanceManager>();

        // Audio source for spawning targets
        audioSource = gameObject.AddComponent<AudioSource>();
        audioSource.playOnAwake = false; 
       
		Debug.Log ("gameLevel init: LoadLevel");
        LoadLevel();

        correctSound = gameObject.AddComponent<AudioSource>();
        correctSound.clip = correctClip;
        correctSound.playOnAwake = false;

        errorSound = gameObject.AddComponent<AudioSource>();
        errorSound.clip = errorClip;
        errorSound.playOnAwake = false;

        _DidInit = true;
    }

    public HitType AttemptHit(Vector3 hitPos)
    {
		HitType typeHit = HitType.NoHit;

        colliderHit = Physics2D.OverlapPoint(hitPos);

        if (colliderHit != null)
        {
            if (colliderHit != tempHit)
            {
                colliderHit.GetComponent<Animator>().SetTrigger("Highlight"); 
                tempHit = colliderHit;

                hit = colliderHit.GetComponent<Target>().GetID();

                if (colliderHit.GetComponent<Target>().GetObstacle())
                {
                    obstacles[hit].SetRed();
                    obstacles[hit].TurnLight();

                    hit = (hit * -1) - 1;

                    typeHit = HitType.ObstacleHit;

                    //currentTarget = lastValid;
                    outset = hit;
                    errorsInRow++;
					if (errorsInRow == 1) {
						errorTotal++;
						print ("incrementing errorTotal");
					}
                    correctingError = true;
                    errorSound.Play();

                    for (int i = 0; i < targets.Length; i++)
                    {
                        if (!targets[i].IsRed() && i != currentTarget)
                            targets[i].TurnDark();
                    }
                    for (int i = 0; i < obstacles.Length; i++)
                        if (!obstacles[i].IsRed())
                            obstacles[i].TurnDark();
					loggingManager.WriteLog("Obstacle Hit");
                }
                else
                {
                    if (hit == currentTarget)
                    {
						for (int i = 0; i < targets.Length; i++) {
							if (i > (hit)) {
								targets [i].SetWhite ();
							} else if (targets [i].IsRed ()) {
								targets [i].SetGreen ();
							}
						}

                        for (int i = 0; i < targets.Length; i++)
							targets[i].TurnLight();
                        if (obstacles != null)
                        {
                            for (int i = 0; i < obstacles.Length; i++)
                            {
                                obstacles[i].SetWhite();
                                obstacles[i].TurnLight();
							}
                        }

                        targets[lastValid].SetGreen();
                        targets[hit].SetGreenOutline();
                        outset = currentTarget;
                        lastValid = currentTarget;

						correctingError = false;
                        errorsInRow = 0;
                        correctSound.Play();

						if (hit == targets.Length - 1)
						{
							loggingManager.WriteLog("Target Hit - Level Complete");
							typeHit = HitType.TargetHitLevelComplete;
						}
						else
						{
							loggingManager.WriteLog("Target Hit");
							typeHit = HitType.TargetHit;
						}

						currentTarget++;
						if (shouldCountTotal) {
							countTotal++;
							//print ("countTotal: " + countTotal);
						}

                    }
                    else if (hit == lastValid)
                    {
                        loggingManager.WriteLog("LastValid Hit");
                        typeHit = HitType.LastValidHit;

                        correctingError = false;
                        errorsInRow = 0;
						correctSound.Play();
                    }
					// I would rather have it count as an error than creating a scenario
					// where an accidental hit completely backtraces your progress.
					// we count them as error instead.
					// PROBLEM: Error does not map to a singular thing.
					// We cant say whether an error was caused by an accident
					// or if it was caused because you legitimately made a mistake.
					// But we keep it in here, to ensure consistent player behavior.
					// Ideally we shouldnt show errors at all. We should just let the player
					// draw the most direct trail to the target. Then it truly becomes a mere
					// visual search task. However, then you dont g assistanceManager.ResetTimer();
					//et feedback if you genuinely
					// thought some number was after another number.
                    /*else if (hit < lastValid)
                    {
                        loggingManager.WriteLog("Backtracking");
                        typeHit = HitType.Backtracking;

                        for (int i = hit + 1; i < targets.Length; i++)
                            targets[i].SetWhite();
                        for (int i = 0; i < targets.Length; i++)
                            targets[i].TurnLight();
                        if (obstacles != null)
                        {
                            for (int i = 0; i < obstacles.Length; i++)
                            {

                                obstacles[i].SetWhite();
                                obstacles[i].TurnLight();
                            }
                        }
                        targets[hit].SetGreenOutline();
                        outset = hit;
                        lastValid = hit;
                        currentTarget = hit + 1;
                        correctingError = false;
                        errorsInRow = 0;
						
                        correctSound.Play(); 
                    }*/
					else //if (hit > currentTarget || hit < lastValid)
                    {

                        loggingManager.WriteLog("Wrong Target Hit");
                        typeHit = HitType.WrongTargetHit;

                        targets[hit].SetRed();
                        targets[hit].TurnLight();
                        //currentTarget = lastValid;
                        outset = hit;
                        correctingError = true;
                        errorsInRow++;
						if (errorsInRow == 1) {
							errorTotal++;
							//print ("incrementing errorTotal");
						}
                        errorSound.Play();

                        for (int i = 0; i < targets.Length; i++)
                        {
							if (!targets[i].IsRed() && i != currentTarget && i != lastValid)
                                targets[i].TurnDark();
                        }

                        if (obstacles != null)
                        {
                            for (int i = 0; i < obstacles.Length; i++)
                                if (!obstacles[i].IsRed())
                                    obstacles[i].TurnDark();
                        }
                    }
                }
                assistanceManager.ResetTimer();
            }
        }
        return typeHit;
    }

    public void LoadNextLevel()
    {
        LoadLevel();
        //levelComplete = false; // Assigned to but never used
    }

	public static void ShuffleArray<T>(T[] arr) {
		for (int i = arr.Length - 1; i > 0; i--) {
			int r = UnityEngine.Random.Range(0, i);
			T tmp = arr[i];
			arr[i] = arr[r];
			arr[r] = tmp;
		}
	}
		
	public static void Shuffle<T>(IList<T> list)  
	{  
		System.Random rng = new System.Random();
		int n = list.Count;  
		while (n > 1) {  
			n--;  
			int k = rng.Next(n + 1);  
			T value = list[k];  
			list[k] = list[n];  
			list[n] = value;  
		}  
	}


    private void LoadLevel()
    {
        camTransform = GameObject.Find("Main Camera").transform;
        mainCam = camTransform.GetComponent<Camera>();
		errorTotal = 0;
		countTotal = 0;
		if (gameManager == null) {
			return;
		}
        gameA = gameManager.GetGameType();

        levelData = gameManager.GetLevelData().text.Split("\n"[0]);

        camTransform.position = new Vector3(float.Parse(levelData[0]), float.Parse(levelData[1]), float.Parse(levelData[2]));
        mainCam.orthographicSize = float.Parse(levelData[3]);


        if (targetObjects != null && targetObjects.Length > 0)
        {
            DestroyLevel();
        }

        lineDrawer.ClearAll();

        targetObjects = new GameObject[int.Parse(levelData[4])];
        targets = new Target[targetObjects.Length];

		int[] randomID = Enumerable.Range(0, targetObjects.Length).ToArray();
		List<int> randomLevel = new List<int>();
		randomLevel.AddRange (Enumerable.Range (20, targetObjects.Length).ToList ());
		randomLevel.AddRange (Enumerable.Range (20, targetObjects.Length).ToList ());
		randomLevel.AddRange (Enumerable.Range (20, targetObjects.Length).ToList ());
		randomLevel.AddRange (Enumerable.Range (20, targetObjects.Length).ToList ());
		/*Debug.Log("inital level = " +String.Join("",
			new List<int>(randomID)
			.ConvertAll(i => i.ToString())
			.ToArray()));*/
		ShuffleArray<int>(randomID);
		Shuffle<int>(randomLevel);
		/*Debug.Log("shuffled level = " +String.Join("",
			new List<int>(randomID)
			.ConvertAll(i => i.ToString())
			.ToArray()));*/
        for (int j = 0; j < targetObjects.Length; j++)
        {
			int i = randomID [j];
			int k = randomLevel [j];
			//Debug.Log (" k is: " + k);
            targetObjects[i] = (GameObject)Instantiate(targetPrefab, new Vector3(float.Parse(levelData[j * 6 + 5]), float.Parse(levelData[j * 6 + 6]), float.Parse(levelData[j * 6 + 7])), Quaternion.identity);
            targetObjects[i].transform.localScale = new Vector3(float.Parse(levelData[j * 6 + 8]), float.Parse(levelData[j * 6 + 9]), float.Parse(levelData[j * 6 + 10]));
            targets[i] = targetObjects[i].GetComponent<Target>();

			targets[i].SetID(i);
            targets[i].SetObstacle(false);
            if (gameA)
            {
                targets[i].SetLabel(labelsA[i]);
            }
            else
            {
                targets[i].SetLabel(labelsB[i]);
            }

            targetObjects[i].SetActive(false);
        }

        if (levelData[5 + targetObjects.Length * 6] != null && levelData[5 + targetObjects.Length * 6] != "")
        {
            obstacleObjects = new GameObject[int.Parse(levelData[5 + targetObjects.Length * 6])];
            obstacles = new Target[obstacleObjects.Length];

            for (int i = 0; i < obstacleObjects.Length; i++)
            {

                obstacleObjects[i] = (GameObject)Instantiate(targetPrefab, new Vector3(float.Parse(levelData[i * 6 + targetObjects.Length * 6 + 6]), float.Parse(levelData[i * 6 + targetObjects.Length * 6 + 7]), float.Parse(levelData[i * 6 + targetObjects.Length * 6 + 8])), Quaternion.identity);
                obstacleObjects[i].transform.localScale = new Vector3(float.Parse(levelData[i * 6 + targetObjects.Length * 6 + 9]), float.Parse(levelData[i * 6 + targetObjects.Length * 6 + 10]), float.Parse(levelData[i * 6 + targetObjects.Length * 6 + 11]));
                obstacles[i] = obstacleObjects[i].GetComponent<Target>();
                obstacles[i].SetID(i);
                obstacles[i].SetObstacle(true);
                obstacles[i].SetLabel(obstacleLabels[i]);
            }
        }

        currentTarget = 0;
        lastValid = currentTarget;

        StartCoroutine(SpawnTargets(targetObjects));

        StartLevelTimer();
    }

    IEnumerator SpawnTargets(GameObject[] objsToSpawn)
    {
        float t = TargetSpawnDelay;

        GameObject[] sorted = objsToSpawn;

        Array.Sort(sorted, delegate (GameObject x, GameObject y) { return x.transform.position.x.CompareTo(y.transform.position.x); });

        for (int i = 0; i < sorted.Length; i++)
        {
            if (i % 2 == 0)
                audioSource.PlayOneShot(spawnTargetsSounds[UnityEngine.Random.Range(0, spawnTargetsSounds.Length - 1)]);

            sorted[i].GetComponent<Animator>().Play("TargetSpawn");
            sorted[i].SetActive(true);
            yield return new WaitForSeconds(t);
        }

        yield return null;
    }

    private void DestroyLevel()
    {
		if (targetObjects != null) {
			for (int i = 0; i < targetObjects.Length; i++) {
				Destroy (targetObjects [i]);
				targets [i] = null;
			}
		}

		if (obstacleObjects == null)
            return;

        for (int i = 0; i < obstacleObjects.Length; i++)
        {
            Destroy(obstacleObjects[i]);
            obstacles[i] = null;
        }
    }

    public void ReloadLevel()
    {
        DestroyLevel();
        LoadLevel();
    }

    public Target GetCurrentTarget()
    {
        return targets[currentTarget];
    }

	public int GetErrorTotal()
	{

		return errorTotal;
	}

    public int GetCurrent()
    {

        return currentTarget;
    }
    public int GetHit()
    {

        return hit;
    }
    public int GetLastValid()
    {

        return lastValid;
    }

	public int GetTotalCount()
	{
		//int total = 0;
		//if (targets != null)
		//	total += targets.Length;
		//if (obstacles != null)
		//	total += obstacles.Length;
		return countTotal;
	}

    public int GetOutset()
    {

        return outset;
    }
    public bool GetCorrectingError()
    {

        return correctingError;
    }

    public void StartLevelTimer()
    {
        startTime = Time.time;
    }

    public float GetGameTime()
    {

        return Time.time - startTime;
    }

    public int GetErrorsInRow()
    {

        return errorsInRow;
    }

    public Vector2 GetTargetLocation(int inputTargetID)
    {

        if (inputTargetID < 0)
            return mainCam.WorldToViewportPoint(obstacleObjects[(inputTargetID + 1) * -1].transform.position);
        else
        {
			//Debug.Log ("TargetObjects length: " + targetObjects.Length);
			//Debug.Log ("inputTargetID: " + inputTargetID);
            return mainCam.WorldToViewportPoint(targetObjects[inputTargetID].transform.position);
        }
    }

    public Collider2D TempHit
    {
        get { return tempHit; }
        set { tempHit = value; }
    }
}
