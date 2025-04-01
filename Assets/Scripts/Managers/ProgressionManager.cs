using System.Collections.Generic;
using System.IO;
using UnityEngine;

[System.Serializable]
public class LevelData
{
    public int difficulty;
    public int trainingMinutes;
    public string gameType;
    public int background;
    public int level;
    public int track;
}

public class ProgressionManager : MonoBehaviour
{


    [System.Serializable]
    public class ProgData
    {
        public List<LevelData> data = new List<LevelData>();
    }

    public TextAsset progression;
    private int currentLevel = 1;
    private int currentTrack = 1;
    private ProgData progData;
    private LevelData currentLevelData;
    Dictionary<int, Dictionary<int, LevelData>> levelDefinitions = new Dictionary<int, Dictionary<int, LevelData>>();


    public void Init()
    {
        // Call the function to save data to JSON
        //SaveToJson(data);

        // Call the function to load data from the JSON file
        LoadFromJson(progression);
        LoadLevelDefinitions(progData.data);
        LoadLevel(currentLevel);
    }

    // Function to save data to a JSON file
    void SaveToJson(LevelData data)
    {
        // Convert the data to JSON using JsonUtility.ToJson
        string json = JsonUtility.ToJson(data, true); // 'true' formats the JSON to be human-readable

        // Define the file path (you can change this path as needed)
        string filePath = Path.Combine(Application.persistentDataPath, "LevelData.json");

        // Write the JSON to a file
        File.WriteAllText(filePath, json);

        // Log the file path for reference
        Debug.Log("Data saved to: " + filePath);
    }

    // Function to load data from a JSON file
    void LoadFromJson(TextAsset asset)
    {
        string json = asset.text;

        // Deserialize the JSON string back into a LevelData object
        progData = JsonUtility.FromJson<ProgData>(json);
        Debug.Log("progData Length: " + progData.data.Count);
        // Example: Log the first track's difficulty to verify it was loaded correctly
        if (progData.data.Count > 0)
        {
            Debug.Log("First track difficulty: " + progData.data[0].difficulty);
        }
    }

    void LoadLevelDefinitions(List<LevelData> data) {
        //Debug.Log("Data Length: " + data.Count);
        for (int i = 0; i < data.Count; i++)
        {
            if (!levelDefinitions.ContainsKey(data[i].track)) {
                levelDefinitions.Add(data[i].track, new Dictionary<int, LevelData>());
                //Debug.Log("Added track " + data[i].track);
            }

            if (!levelDefinitions[data[i].track].ContainsKey(data[i].level)) {
                levelDefinitions[data[i].track].Add(data[i].level, data[i]);
                //Debug.Log("Added level" + data[i].level);
            }

            levelDefinitions[data[i].track][data[i].level] = data[i];
        }
    }

    void LoadLevel(int level) {
        Debug.Log("current number of tracks: " + levelDefinitions.Keys.Count);
        Debug.Log("current number of levels: " + levelDefinitions[currentTrack].Keys.Count);
        currentLevelData = levelDefinitions[currentTrack][level];
        Debug.Log("current level difficulty: " + currentLevelData.difficulty);
    }

    public void SetCurrentTrack(int track) {
        currentTrack = track;
    }

    public void SetCurrentLevel(int level) {
        currentLevel = level;
    }

    public LevelData GetCurrentLevel() {
        return currentLevelData;
    }

    public int GetCurrentNumberOfLevels() {
        return levelDefinitions[currentTrack].Keys.Count;
    }

    public int GetRemainingLevels() {
        Debug.Log(levelDefinitions[currentTrack].Keys.Count);
        Debug.Log(currentLevel);
        return levelDefinitions[currentTrack].Keys.Count - currentLevel + 1;
    }

    public int AdvanceLevel() {
        int nextLevel = -1;
        if (currentLevel < GetCurrentNumberOfLevels()) {
            currentLevel++;
            LoadLevel(currentLevel);
            nextLevel = currentLevel;
        }
        return(nextLevel);
    }

    public int AdvanceTrack() {
        int nextTrack = currentTrack;
        if (levelDefinitions.ContainsKey(currentTrack+1)) {
            nextTrack = currentTrack+1;
        }
        return(nextTrack);
    }

}
