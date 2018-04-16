using UnityEngine;
using System.Collections;
using System.Collections.Generic;
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

	[SerializeField]
	private GameObject gameCanvas;

    [SerializeField]
    private DataManager dataManager;

    public string[] labelsA;
    public string[] labelsB;
    public string[] obstacleLabels;
    public AudioClip correctClip;
    public AudioClip errorClip;
    public float endDelay;

    public LineDrawer lineDrawer;

    private List<GameObject> targetObjects;
    private GameObject[] obstacleObjects;
    private List<Target> targets;
    private Target[] obstacles;

    private GameManager gameManager;
	private bool gameA;
	private string gameType;
    public string[] levelData;

    private Transform camTransform;
    [SerializeField]
    private Camera mainCam;

    private int outset;
    private int currentTarget = 0;
    private int hit;
    private int lastValid;
    private bool correctingError;
    private int errorsInRow;

    //private bool levelComplete = false; // Assigned to but never used
    //private float completionTime; Never used

    private Collider2D colliderHit;
    private Collider2D tempHit;

    private AudioSource correctSound;
    private AudioSource errorSound;
	private AudioSource spawnSound;

    private AssistanceManager assistanceManager;

    public static bool _DidInit = false;

    public float TargetSpawnDelay = 0.02f;

    [SerializeField]
    private AudioClip[] spawnTargetsSounds; 

    public void Init(GameManager gm)
    {
        if (_DidInit)
            return;
        gameManager = gm;
        assistanceManager = this.GetComponent<AssistanceManager>();

		spawnSound = gameObject.AddComponent<AudioSource>();
		spawnSound.clip = spawnTargetsSounds[UnityEngine.Random.Range(0, spawnTargetsSounds.Length - 1)];
		spawnSound.playOnAwake = false;
       
        //LoadLevel();

        correctSound = gameObject.AddComponent<AudioSource>();
        correctSound.clip = correctClip;
        correctSound.playOnAwake = false;
		correctSound.volume = 0.7f;

        errorSound = gameObject.AddComponent<AudioSource>();
        errorSound.clip = errorClip;
        errorSound.playOnAwake = false;
		errorSound.volume = 0.7f;

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
					errorSound.Play();
                    obstacles[hit].SetRed();
                    obstacles[hit].TurnLight();

                    hit = (hit * -1) - 1;

                    typeHit = HitType.ObstacleHit;

                    //currentTarget = lastValid;
                    outset = hit;
                    errorsInRow++;
                    correctingError = true;
					if (targets != null)
					{
						for (int i = 0; i < targets.Count; i++)
						{
							if (!targets[i].IsRed() && i != currentTarget)
								targets[i].TurnDark();
						}
					}
					if (obstacles != null)
					{
						for (int i = 0; i < obstacles.Length; i++)
						{
							if (!obstacles[i].IsRed())
								obstacles[i].TurnDark();
						}
					}
					//loggingManager.WriteLog("Obstacle Hit");
                }
                else
                {
                    if (hit == currentTarget)
                    {
						correctSound.Play();
						if (targets != null)
						{
							for (int i = 0; i < targets.Count; i++)
							{
								if (i > (hit))
								{
									targets[i].SetWhite();
								}
								else if (targets[i].IsRed())
								{
									targets[i].SetGreen();
								}
							}

							for (int i = 0; i < targets.Count; i++)
							{
								targets[i].TurnLight();
							}

							targets[lastValid].SetGreen();
							targets[hit].SetGreenOutline();
							outset = currentTarget;
							lastValid = currentTarget;

							correctingError = false;
							errorsInRow = 0;

							if (hit == targets.Count - 1)
							{
								//loggingManager.WriteLog("Target Hit - Level Complete");
								typeHit = HitType.TargetHitLevelComplete;
							}
							else
							{
								//loggingManager.WriteLog("Target Hit");
								typeHit = HitType.TargetHit;
							}

						}

                        if (obstacles != null)
                        {
							for (int i = 0; i < obstacles.Length; i++)
                            {
                                obstacles[i].SetWhite();
                                obstacles[i].TurnLight();
							}
                        }

						currentTarget++;

                    }
                    else if (hit == lastValid)
                    {
                        //loggingManager.WriteLog("LastValid Hit");
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

                        //loggingManager.WriteLog("Wrong Target Hit");
                        typeHit = HitType.WrongTargetHit;

                        targets[hit].SetRed();
                        targets[hit].TurnLight();
                        //currentTarget = lastValid;
                        outset = hit;
                        correctingError = true;
                        errorsInRow++;
                        errorSound.Play();

                        for (int i = 0; i < targets.Count; i++)
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
    }

    private void LoadLevel()
    {
		if (gameManager == null) {
			return;
		}
        gameType = gameManager.GetGameType();

        var fields = dataManager.GetFields();
        Utils.Shuffle<DataManager.Field>(fields);

        lineDrawer.ClearAll();
        int circlePosGranularity = 4;

        List<List<Vector2>> allFieldPositions = new List<List<Vector2>>();

        float curPosX = -1.0f;
        float curPosY = -1.0f;

        // to ensure we dont spawn circles on top of each other, we create
        // a list of all possible circle locations and shuffle them.
        foreach (var field in fields) {
            float xIncrement = field.width / (float)circlePosGranularity;
            float yIncrement = field.height / (float)circlePosGranularity;

            List<Vector2> currentFieldPositions = new List<Vector2>();
            for (int i = 0; i < circlePosGranularity; i++) {

                // we add a a slight offset to x and y to avoid border decision
                // cases between intersecting fields.
                float offset = (yIncrement / 8);
                curPosY = yIncrement * i + field.yMin + offset;

                for (int j = 0; j < circlePosGranularity; j++) {
                    offset = (xIncrement / 4);
                    curPosX = xIncrement * j + field.xMin + offset;

                    // we need either the incrementer or the index to be above 0 for x and y.
                    // this enables us to skip positions which are located on screen edges.
                    if ((j > 0 || field.xIndex > 0) && (i > 0 || field.yIndex > 0)) {

                        // We offset some circles a bit to make the level feel less like a grid
                        // at the cost of some inconsistency in terms how many samples we
                        // have per field (matters mostly in low difficulty).
                        if (field.yIndex % 2 == 0) {
                            curPosX += (xIncrement / 4) ;
                        }
                        if (field.xIndex % 2 == 0) {
                            curPosY -= (yIncrement / 8);
                        }

                        Vector2 pos = new Vector2(curPosX, curPosY);
                        currentFieldPositions.Add(pos);
                    }

                }
            }

            Utils.Shuffle(currentFieldPositions);
            Debug.Log("field [" + field.xIndex + "," + field.yIndex + "]: (" + Utils.StringFromVector2List(currentFieldPositions) + ")");
            allFieldPositions.Add(currentFieldPositions);
        }

        int targetAmount = gameManager.GetAmountOfCircles();
        List<Vector2> targetPositions = new List<Vector2>();

        // Now we select 1 position from each field list.
        // the order of lists has been shuffled, as has the locations each list stores.
        // if we still have targets left after going over all lists, we select again.
        // To avoid duplicate locations, we remove the positions we select.
        while (targetAmount > 0) {
            Utils.Shuffle(allFieldPositions);
            foreach (var fieldposList in allFieldPositions) {
                if (targetAmount > 0) {
                    Vector2 pos = fieldposList[0];
                    targetPositions.Add(pos);
                    fieldposList.RemoveAt(0);
                }
                targetAmount -= 1;
            } 
        }

        Debug.Log(targetPositions.Count + " targetPositions: [" + Utils.StringFromVector2List(targetPositions) + "]");

        int[] circleIDs = Enumerable.Range(0, targetPositions.Count).ToArray();
        Debug.Log("Generating " + circleIDs.Length + " CircleIDs: [" + Utils.StringFromIntArray(circleIDs) + "]");

        // Destroy any previous spawned targets before instantiation of new targets.
        if (targetObjects != null && targetObjects.Count > 0) {
            Debug.Log(targetObjects.Count + " target Objects exists, destroying level..");
            DestroyLevel();
        }

        targetObjects = new List<GameObject>();

        targets = new List<Target>();
        int index = 0;
        foreach (Vector2 pos in targetPositions) {
            Vector3 worldPos = mainCam.ViewportToWorldPoint(new Vector3(pos.x, pos.y, 0.0f));
            GameObject obj = Instantiate(targetPrefab, new Vector3(worldPos.x, worldPos.y, 0.0f), Quaternion.identity);
            targetObjects.Add(obj);
            Target target = obj.GetComponent<Target>();

            target.SetID(circleIDs[index]);
            target.SetObstacle(false);

            if (gameType == "gameA") {
                target.SetLabel(labelsA[index]);
            } else {
                target.SetLabel(labelsB[index]);                
            }
                                               
            obj.SetActive(false);
            targets.Add(target);
            Debug.Log(index + ": [" + pos.x + "," + pos.y + "] given ID " + circleIDs[index] + "and name {" + labelsA[index] + "}");
            index += 1;

        }
        currentTarget = 0;
        lastValid = currentTarget;
        spawnSound.clip = spawnTargetsSounds[UnityEngine.Random.Range(0, spawnTargetsSounds.Length - 1)];
        StartCoroutine(SpawnTargets(targetObjects.ToArray()));
    }

    IEnumerator SpawnTargets(GameObject[] objsToSpawn)
    {
        float t = TargetSpawnDelay;

		spawnSound.Play();
        for (int i = 0; i < objsToSpawn.Length; i++)
        {
			if (objsToSpawn != null && objsToSpawn[i] != null)
			{
				objsToSpawn[i].GetComponent<Animator>().Play("TargetSpawn");
				objsToSpawn[i].SetActive(true);
			}
            yield return new WaitForSeconds(t);
        }

        yield return null;
    }

    private void DestroyLevel()
    {
		if (targetObjects != null) {
            foreach (GameObject obj in targetObjects) {
                Destroy(obj);
            }
		}

		if (obstacleObjects != null)
		{
			for (int i = 0; i < obstacleObjects.Length; i++)
			{
				Destroy(obstacleObjects[i]);
			}
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

    public int GetOutset()
    {

        return outset;
    }
    public bool GetCorrectingError()
    {

        return correctingError;
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
            return mainCam.WorldToViewportPoint(targetObjects[inputTargetID].transform.position);
        }
    }

    public Collider2D TempHit
    {
        get { return tempHit; }
        set { tempHit = value; }
    }
}
