using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataManager : MonoBehaviour {

    // DataManager is responsible storing larger sets of game data
    // that game manager's variables alone cannot hold.

    [SerializeField]
    Camera camera;

    private List<float> levelReactionTimesList = new List<float>();

    private struct ArrayPosition
    {
        public int x;
        public int y;
    }


    // Mapping of Coordinates with levelReactionTimes 2-D Array.
    // Usage: levelReactionTimes[x,y]
    //
    //
    //              mainCam.WorldToViewportPoint()
    //
    //
    //      0.0,1.0      0.33,1.0      0.66,1.0       1.0,1.0
    //         +---------------------------------------+
    //         |           |           |           |   |
    //         |           |           |           |   |
    //         |           |           |           |   |
    //         |   [0,0]   |   [1,0]   |   [2,0]   |   |
    //         |           |           |           |   |
    //         |           |           |           |   |
    // 0.0,0,5 +-----------------------------------+ O |  1.0,0.5
    //         |           |           |           |   |
    //         |           |           |           |   |
    //         |           |           |           |   |
    //         |   [0,1]   |   [1,1]   |   [2,1]   |   |
    //         |           |           |           |   |
    //         |           |           |           |   |
    //         +---------------------------------------+
    //      0.0,0.0       0.33,0.0    0.66,0.0         1.0,0.0


    private int cellRowCount = 3;
    private int cellColumnCount = 2;
    private float cellWidth;
    private float cellHeight;

    // contains 
    private List<float>[,] levelHits;

    private List<float>[,] sessionReactionTimes;

    public void Start()
    {
        levelHits = new List<float>[cellRowCount, cellColumnCount];
        sessionReactionTimes = new List<float>[cellRowCount, cellColumnCount];
        cellWidth = 1.0f / (float)cellRowCount;
        cellHeight = 1.0f / (float)cellColumnCount;

        for (int i = 0; i < cellColumnCount; i++) {
            for (int j = 0; j < cellRowCount; j++) {
                levelHits[j, i] = new List<float>();
            }
        }

    }

    public void addHit(Vector2 HitWorldPos, float timeValue)
    {
        Vector2 viewportPos = camera.WorldToViewportPoint(HitWorldPos);
        ArrayPosition cell = matchPosToCell(viewportPos);
        Debug.Log("Adding " + timeValue + "to cell [" + cell.x + "," + cell.y + "]"); 
        levelHits[cell.x, cell.y].Add(timeValue);
    }

    private ArrayPosition matchPosToCell(Vector2 viewportPos)
    {
        float posX = viewportPos.x;
        float posY = viewportPos.y;
        ArrayPosition cell;
        cell.x = -1;
        cell.y = -1;

        for (int i = 0; i < cellRowCount; i++) {
            float lowBoundX = cellWidth * i;
            float highBoundX = cellWidth * (i + 1);

            if (lowBoundX < posX && posX > highBoundX) {
                Debug.Log("[" + lowBoundX + "] " + posX + " [" + highBoundX + "]");
                cell.x = i;
                break;
            }
        }

        for (int i = 0; i < cellColumnCount; i++) {
            float lowBoundY = cellWidth * i;
            float highBoundY = cellWidth * (i + 1);
			if (lowBoundY < posX && posX > highBoundY) {
                Debug.Log("[" + lowBoundY + "] " + posY + " [" + highBoundY + "]");
                cell.y = i;
                break;
            }
        }

        return cell;
    }
    // we need an API that makes it easy for game manager to send the data
    // DataManager should be capable of translating the input of game manager
    // into the desired format that is ideal for storage.


    // We need something which saves the data to disk in a file.

    // and something which can restore the data again.

}
