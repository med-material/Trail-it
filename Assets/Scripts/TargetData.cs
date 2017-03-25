using UnityEngine;
using System.Collections;
using System.IO;

public class TargetData : MonoBehaviour {

	public Vector2 screenSize;

	public TextAsset[] allLevelsA;
	public TextAsset[] allLevelsB;

	public GameObject targetPrefab;
	public string[] labelsA;
	public string[] labelsB;
	public string[] obstacleLabels;

	private Transform camTransform;
	private Camera mainCam;

	private bool gameA;
	private int currentLevel;

	private string[] levelData;

	private GameObject[] targetObjects;
	private GameObject[] obstacleObjects;
	private Target[] targets;
	private Target[] obstacles;

	private StreamWriter writer;
	private string directory;
	private string fileName;
	private string sep = ";";
	private string currentLine;

	private string gameType;
	private string levelNumber;
	private string targetNumber;
	private string targetLabel;

	private float deltaX;
	private float deltaY;

	private Vector3 targetPosition;
	private Vector3 previousTargetPosition;
	private Vector3 targetPositionViewport;
	private Vector3 previousTargetPositionViewport;
	private string targetX;
	private string targetY;
	private string centerOffsetX;
	private string centerOffsetY;
	private string targetDeltaX;
	private string targetDeltaY;
	private string targetDistance;

	private float radius;
	private int greens;
	private int whites;
	private int distractors;

	private string radiusGreens;
	private string radiusWhites;
	private string radiusDistractors;
	private string XGreens;
	private string XWhites;
	private string XDistractors;
	private string YGreens;
	private string YWhites;
	private string YDistractors;
	private string XYGreens;
	private string XYWhites;
	private string XYDistractors;

	// Use this for initialization
	void Start () {

		directory = Application.persistentDataPath + "/TargetData/";
		//directory = Application.persistentDataPath + "/LevelData/";
		fileName = System.DateTime.Now.ToString() + ".txt";
		fileName = fileName.Replace ('/', '-');
		fileName = fileName.Replace (':', '-');
		
		if(!Directory.Exists(directory)){
			Directory.CreateDirectory(directory);
		}

		using (StreamWriter writer = File.AppendText(directory + fileName))
		{
			writer.WriteLine("GameType;Level;ObstacleNumber;ObstacleLabel;Xpos;Ypos;CenterOffsetX;CenterOffsetY");
			//writer.WriteLine("GameType;Level;TargetNumber;TargetLabel;Xpos;Ypos;CenterOffsetX;CenterOffsetY;DeltaX;DeltaY;Distance;RadiusGreens;RadiusWhites;RadiusDistractors;XGreens;XWhites;XDistractors;YGreens;YWhites;YDistractors;XYGreens;XYWhites;XYDistractors");
			//writer.WriteLine("GameType;Level;TotalTargets;TotalDistractors");
		}

		camTransform = this.transform;
		mainCam = camTransform.GetComponent<Camera> ();

		gameA = true;
		gameType = "A";

		for(int i = 0; i < allLevelsA.Length; i++) {

			currentLevel = i;
			obstacleObjects = null;
			obstacles = null;
			LoadLevel();
			levelNumber = i.ToString();

			if(obstacleObjects != null)
				GetTargetData();

			/*using (StreamWriter writer = File.AppendText(directory + fileName))
			{	
				if(obstacles == null)
					writer.WriteLine(gameType + sep + i.ToString() + sep + targets.Length.ToString() + sep + 0);
				else
					writer.WriteLine(gameType + sep + i.ToString() + sep + targets.Length.ToString() + sep + obstacles.Length.ToString());
			}*/
		}

		gameA = false;
		gameType = "B";

		for(int i = 0; i < allLevelsB.Length; i++) {
			
			currentLevel = i;
			obstacleObjects = null;
			obstacles = null;
			LoadLevel();
			levelNumber = i.ToString();

			if(obstacleObjects != null)
				GetTargetData();

			/*using (StreamWriter writer = File.AppendText(directory + fileName))
			{
				if(obstacles == null)
					writer.WriteLine(gameType + sep + i.ToString() + sep + targets.Length.ToString() + sep + 0);
				else
					writer.WriteLine(gameType + sep + i.ToString() + sep + targets.Length.ToString() + sep + obstacles.Length.ToString());
			}*/
		}
	}

	private void GetTargetData() {

		//for (int i = 0; i < targetObjects.Length; i++) {
		for (int i = 0; i < obstacleObjects.Length; i++) {

			//targetNumber = i.ToString();
			targetNumber = (i*-1-1).ToString();

			//targetLabel = targets[i].GetLabel();
			targetLabel = obstacles[i].GetLabel();

			//targetPosition = targetObjects[i].transform.position;
			targetPosition = obstacleObjects[i].transform.position;

			targetPositionViewport = mainCam.WorldToViewportPoint(targetPosition);
			targetX = (targetPositionViewport.x * screenSize.x).ToString();
			targetY = (targetPositionViewport.y * screenSize.y).ToString();
			centerOffsetX = ((targetPositionViewport.x - 0.5f) * screenSize.x).ToString();
			centerOffsetY = ((targetPositionViewport.y - 0.5f) * screenSize.y).ToString();

			/*if(i > 0) {
				previousTargetPosition = targetObjects[i-1].transform.position;
				previousTargetPositionViewport = mainCam.WorldToViewportPoint(targetObjects[i-1].transform.position);
				deltaX = ((targetPositionViewport.x - previousTargetPositionViewport.x) * screenSize.x);
				deltaY = ((targetPositionViewport.y - previousTargetPositionViewport.y) * screenSize.y);
				targetDeltaX = deltaX.ToString();
				targetDeltaY = deltaY.ToString();
				targetDistance = Mathf.Sqrt(Mathf.Pow(deltaX,2)+Mathf.Pow(deltaY,2)).ToString();

				radius = Vector3.Distance(targetPosition, previousTargetPosition);

				//Radius Distractors
				greens = 0;
				for(int y = 0; y < i-1; y++) {
					if(Vector3.Distance(targetObjects[y].transform.position, previousTargetPosition) < radius)
						greens++;
				}
				radiusGreens = greens.ToString();

				whites = 0;
				for(int y = i+1; y < targetObjects.Length; y++) {
					if(Vector3.Distance(targetObjects[y].transform.position, previousTargetPosition) < radius)
						whites++;
				}
				radiusWhites = whites.ToString();

				distractors = 0;
				if(obstacleObjects != null) {
					for(int y = 0; y < obstacleObjects.Length; y++) {
						if(Vector3.Distance(obstacleObjects[y].transform.position, previousTargetPosition) < radius)
							distractors++;
					}
					radiusDistractors = distractors.ToString();
				}
				else {
					radiusDistractors = "";
				}

				//X Distractors
				greens = 0;
				for(int y = 0; y < i; y++) {
					if(deltaX < 0) {
						if(targetObjects[y].transform.position.x < previousTargetPosition.x && targetObjects[y].transform.position.x > targetPosition.x)
							greens++;
					}
					else {
						if(targetObjects[y].transform.position.x > previousTargetPosition.x && targetObjects[y].transform.position.x < targetPosition.x)
							greens++;
					}
				}
				XGreens = greens.ToString();
				
				whites = 0;
				for(int y = i+1; y < targetObjects.Length; y++) {
					if(deltaX < 0) {
						if(targetObjects[y].transform.position.x < previousTargetPosition.x && targetObjects[y].transform.position.x > targetPosition.x)
							whites++;
					}
					else {
						if(targetObjects[y].transform.position.x > previousTargetPosition.x && targetObjects[y].transform.position.x < targetPosition.x)
							whites++;
					}
				}
				XWhites = whites.ToString();
				
				distractors = 0;
				if(obstacleObjects != null) {
					for(int y = 0; y < obstacleObjects.Length; y++) {
						if(deltaX < 0) {
							if(obstacleObjects[y].transform.position.x < previousTargetPosition.x && obstacleObjects[y].transform.position.x > targetPosition.x)
								distractors++;
						}
						else {
							if(obstacleObjects[y].transform.position.x > previousTargetPosition.x && obstacleObjects[y].transform.position.x < targetPosition.x)
								distractors++;
						}
					}
					XDistractors = distractors.ToString();
				}
				else {
					XDistractors = "";
				}

				//Y Distractors
				greens = 0;
				for(int y = 0; y < i; y++) {
					if(deltaY < 0) {
						if(targetObjects[y].transform.position.y < previousTargetPosition.y && targetObjects[y].transform.position.y > targetPosition.y)
							greens++;
					}
					else {
						if(targetObjects[y].transform.position.y > previousTargetPosition.y && targetObjects[y].transform.position.y < targetPosition.y)
							greens++;
					}
				}
				YGreens = greens.ToString();
				
				whites = 0;
				for(int y = i+1; y < targetObjects.Length; y++) {
					if(deltaY < 0) {
						if(targetObjects[y].transform.position.y < previousTargetPosition.y && targetObjects[y].transform.position.y > targetPosition.y)
							whites++;
					}
					else {
						if(targetObjects[y].transform.position.y > previousTargetPosition.y && targetObjects[y].transform.position.y < targetPosition.y)
							whites++;
					}
				}
				YWhites = whites.ToString();
				
				distractors = 0;
				if(obstacleObjects != null) {
					for(int y = 0; y < obstacleObjects.Length; y++) {
						if(deltaY < 0) {
							if(obstacleObjects[y].transform.position.y < previousTargetPosition.y && obstacleObjects[y].transform.position.y > targetPosition.y)
								distractors++;
						}
						else {
							if(obstacleObjects[y].transform.position.y > previousTargetPosition.y && obstacleObjects[y].transform.position.y < targetPosition.y)
								distractors++;
						}
					}
					YDistractors = distractors.ToString();
				}
				else {
					YDistractors = "";
				}

				//XY Distractors
				greens = 0;
				for(int y = 0; y < i; y++) {
					if(deltaX < 0) {
						if(targetObjects[y].transform.position.x < previousTargetPosition.x && targetObjects[y].transform.position.x > targetPosition.x) {
							if(deltaY < 0) {
								if(targetObjects[y].transform.position.y < previousTargetPosition.y && targetObjects[y].transform.position.y > targetPosition.y)
									greens++;
							}
							else {
								if(targetObjects[y].transform.position.y > previousTargetPosition.y && targetObjects[y].transform.position.y < targetPosition.y)
									greens++;
							}
						}
					}
					else {
						if(targetObjects[y].transform.position.x > previousTargetPosition.x && targetObjects[y].transform.position.x < targetPosition.x) {
							if(deltaY < 0) {
								if(targetObjects[y].transform.position.y < previousTargetPosition.y && targetObjects[y].transform.position.y > targetPosition.y)
									greens++;
							}
							else {
								if(targetObjects[y].transform.position.y > previousTargetPosition.y && targetObjects[y].transform.position.y < targetPosition.y)
									greens++;
							}
						}
					}
				}
				XYGreens = greens.ToString();
				
				whites = 0;
				for(int y = i+1; y < targetObjects.Length; y++) {
					if(deltaX < 0) {
						if(targetObjects[y].transform.position.x < previousTargetPosition.x && targetObjects[y].transform.position.x > targetPosition.x) {
							if(deltaY < 0) {
								if(targetObjects[y].transform.position.y < previousTargetPosition.y && targetObjects[y].transform.position.y > targetPosition.y)
									whites++;
							}
							else {
								if(targetObjects[y].transform.position.y > previousTargetPosition.y && targetObjects[y].transform.position.y < targetPosition.y)
									whites++;
							}
						}
					}
					else {
						if(targetObjects[y].transform.position.x > previousTargetPosition.x && targetObjects[y].transform.position.x < targetPosition.x) {
							if(deltaY < 0) {
								if(targetObjects[y].transform.position.y < previousTargetPosition.y && targetObjects[y].transform.position.y > targetPosition.y)
									whites++;
							}
							else {
								if(targetObjects[y].transform.position.y > previousTargetPosition.y && targetObjects[y].transform.position.y < targetPosition.y)
									whites++;
							}
						}
					}
				}
				XYWhites = whites.ToString();
				
				distractors = 0;
				if(obstacleObjects != null) {
					for(int y = 0; y < obstacleObjects.Length; y++) {
						if(deltaX < 0) {
							if(obstacleObjects[y].transform.position.x < previousTargetPosition.x && obstacleObjects[y].transform.position.x > targetPosition.x) {
								if(deltaY < 0) {
									if(obstacleObjects[y].transform.position.y < previousTargetPosition.y && obstacleObjects[y].transform.position.y > targetPosition.y)
										distractors++;
								}
								else {
									if(obstacleObjects[y].transform.position.y > previousTargetPosition.y && obstacleObjects[y].transform.position.y < targetPosition.y)
										distractors++;
								}
							}
						}
						else {
							if(obstacleObjects[y].transform.position.x > previousTargetPosition.x && obstacleObjects[y].transform.position.x < targetPosition.x) {
								if(deltaY < 0) {
									if(obstacleObjects[y].transform.position.y < previousTargetPosition.y && obstacleObjects[y].transform.position.y > targetPosition.y)
										distractors++;
								}
								else {
									if(obstacleObjects[y].transform.position.y > previousTargetPosition.y && obstacleObjects[y].transform.position.y < targetPosition.y)
										distractors++;
								}
							}
						}
					}
					XYDistractors = distractors.ToString();
				}
				else {
					XYDistractors = "";
				}
			}
			else {
				targetDeltaX = "";
				targetDeltaY = "";
				targetDistance = "";
				radiusGreens = "";
				radiusWhites = "";
				radiusDistractors = "";
				XGreens = "";
				XWhites = "";
				XDistractors = "";
				YGreens = "";
				YWhites = "";
				YDistractors = "";
				XYGreens = "";
				XYWhites = "";
				XYDistractors = "";
			}*/

			currentLine =	gameType + sep +
							levelNumber + sep +
							targetNumber + sep +
							targetLabel + sep +
							targetX + sep +
							targetY + sep +
							centerOffsetX + sep +
							centerOffsetY;
							/*targetDeltaX + sep +
							targetDeltaY + sep +
							targetDistance + sep +
							radiusGreens + sep +
							radiusWhites + sep +
							radiusDistractors + sep +
							XGreens + sep +
							XWhites + sep +
							XDistractors + sep +
							YGreens + sep +
							YWhites + sep +
							YDistractors + sep +
							XYGreens + sep +
							XYWhites + sep +
							XYDistractors;*/
			
			using (StreamWriter writer = File.AppendText(directory + fileName))
			{
				writer.WriteLine(currentLine);
			}
		}
	}

	private void LoadLevel () {

		if(gameA) {
			levelData = allLevelsA[currentLevel].text.Split("\n"[0]);
		}
		else {
			levelData = allLevelsB[currentLevel].text.Split("\n"[0]);
		}
		
		camTransform.position = new Vector3 (float.Parse (levelData[0]),float.Parse (levelData[1]),float.Parse (levelData[2]));
		mainCam.orthographicSize = float.Parse (levelData[3]);
		
		targetObjects = new GameObject[int.Parse(levelData[4])];
		targets = new Target[targetObjects.Length];
		
		for(int i = 0; i < targetObjects.Length; i++) {
			
			targetObjects[i] = (GameObject)Instantiate(targetPrefab, new Vector3(float.Parse(levelData[i*6+5]), float.Parse (levelData[i*6+6]),float.Parse (levelData[i*6+7])), Quaternion.identity);
			targetObjects[i].transform.localScale = new Vector3(float.Parse(levelData[i*6+8]), float.Parse (levelData[i*6+9]),float.Parse (levelData[i*6+10]));
			targets[i] = targetObjects[i].GetComponent<Target>();
			targets[i].SetID(i);
			targets[i].SetObstacle(false);
			
			if(gameA) {
				targets[i].SetLabel(labelsA[i]);
			}
			else {
				targets[i].SetLabel(labelsB[i]);
			}
		}
		
		if(levelData[5+targetObjects.Length*6] != null && levelData[5+targetObjects.Length*6] != "") {
			
			obstacleObjects = new GameObject[int.Parse(levelData[5+targetObjects.Length*6])];
			obstacles = new Target[obstacleObjects.Length];
			
			for(int i = 0; i < obstacleObjects.Length; i++) {
				
				obstacleObjects[i] = (GameObject)Instantiate(targetPrefab, new Vector3(float.Parse(levelData[i*6+targetObjects.Length*6+6]), float.Parse (levelData[i*6+targetObjects.Length*6+7]),float.Parse (levelData[i*6+targetObjects.Length*6+8])), Quaternion.identity);
				obstacleObjects[i].transform.localScale = new Vector3(float.Parse(levelData[i*6+targetObjects.Length*6+9]), float.Parse (levelData[i*6+targetObjects.Length*6+10]),float.Parse (levelData[i*6+targetObjects.Length*6+11]));
				obstacles[i] = obstacleObjects[i].GetComponent<Target>();
				obstacles[i].SetID(i);
				obstacles[i].SetObstacle(true);
				obstacles[i].SetLabel(obstacleLabels[i]);
			}
		}
	}
}
