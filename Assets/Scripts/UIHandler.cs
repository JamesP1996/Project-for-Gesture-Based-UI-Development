using System.Collections;
using System.Collections.Generic;
using UnityEngine;
// Handles UI Elements and Respawns
public class UIHandler : MonoBehaviour
{
    AudioSource[] audios;
    AudioSource[] soundSource;

    public GameObject[] SpawnPoints;
    public AudioSource ambienceSource;
    public GameObject bottleSpawnPoint;
    private GameObject currentBottle;
    public GameObject bottlePrefab;
    public float targetHitVol;

    bool currentDifficultIsHard;
    bool muted;

    public UnityEngine.UI.Slider[] sliders;
    // Start is called before the first frame update
    void Start()
    {   
        // Get all the Current Audio Sources and Set the Currently Spawned Bottle
        audios = FindObjectsOfType(typeof(AudioSource)) as AudioSource[];
        currentBottle = GameObject.FindGameObjectWithTag("SixPack").gameObject;
    }

    // Update is called once per frame
    void Update()
    {   
        // For Each Audio Source and The TargetHitVolume set it to the Sound Slider Vol
        foreach (AudioSource audio in audios)
        {
            audio.volume = sliders[0].value;
            targetHitVol = sliders[0].value;
        }
        // Set the Ambience Source Volume to the Ambience Slider Value
        ambienceSource.volume = sliders[1].value;
    }

    public void QuitGame()
    {   // Exit the Application (Build Mode Only)
        Debug.Log("[INFO] Application: Exiting!");
        Application.Quit();
    }

    public void EasyMode()
    {   
        // For Each Spawn set the targets Variable to them
        // Next Destroy All the Current Targets
        foreach (GameObject spawn in SpawnPoints)
        {
            GameObject[] targets = GameObject.FindGameObjectsWithTag("Target");
            foreach (GameObject target in targets)
            {
                Destroy(target);
            }
            // Set the Hard Mode to false on all Spawn Points
            spawn.GetComponent<SpawnPoint>().hardMode = false;
            // Tell the Spawn Points that there was a Change in UI option
            spawn.GetComponent<SpawnPoint>().UIChange = true;
            // Set the current difficulty to is not hard here.(Used in Target Respawn)
            currentDifficultIsHard = false;
        }
    }

    public void HardMode()
    {
        // For Each Spawn set the targets Variable to them
        // Destroy All the Current Targets
        foreach (GameObject spawn in SpawnPoints)
        {
            GameObject[] targets = GameObject.FindGameObjectsWithTag("Target");
            foreach (GameObject target in targets)
            {
                Destroy(target);
            }
            // Set the Spawn Points to Hard Mode is true and inform them of a UI Change
            spawn.GetComponent<SpawnPoint>().hardMode = true;
            spawn.GetComponent<SpawnPoint>().UIChange = true;
            // Set the currentDifficulty to Hard (Used in Target Respawn)
            currentDifficultIsHard = true;
        }
    }

    public void RespawnBottles()
    {
        // Destroy the Current Bottle (6-pack) Prefab
        Destroy(currentBottle.gameObject);
        // Dev: Inform of Bottle Spawn
        Debug.Log("Spawning Bottle");
        // Instantiate a new Bottle Prefab (6-pack) at the spawn point location
        currentBottle = Instantiate(bottlePrefab,bottleSpawnPoint.transform);
        
       
    }

    // Respawn all the targets in the level (Just Re-Call the current Difficulty Method)
    public void RespawnTargets(){
        if(currentDifficultIsHard)
            HardMode();
        else
            EasyMode();
    }
}
