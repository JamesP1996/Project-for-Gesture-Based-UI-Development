using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
        audios = FindObjectsOfType(typeof(AudioSource)) as AudioSource[];
        currentBottle = GameObject.FindGameObjectWithTag("SixPack").gameObject;
    }

    // Update is called once per frame
    void Update()
    {
        foreach (AudioSource audio in audios)
        {
            audio.volume = sliders[0].value;
            targetHitVol = sliders[0].value;
        }
        ambienceSource.volume = sliders[1].value;
    }

    public void QuitGame()
    {
        Debug.Log("[INFO] Application: Exiting!");
        Application.Quit();
    }

    public void EasyMode()
    {
        foreach (GameObject spawn in SpawnPoints)
        {
            GameObject[] targets = GameObject.FindGameObjectsWithTag("Target");
            foreach (GameObject target in targets)
            {
                Destroy(target);
            }
            spawn.GetComponent<SpawnPoint>().hardMode = false;
            spawn.GetComponent<SpawnPoint>().UIChange = true;
            currentDifficultIsHard = false;
        }
    }

    public void HardMode()
    {
        foreach (GameObject spawn in SpawnPoints)
        {
            GameObject[] targets = GameObject.FindGameObjectsWithTag("Target");
            foreach (GameObject target in targets)
            {
                Destroy(target);
            }
            spawn.GetComponent<SpawnPoint>().hardMode = true;
            spawn.GetComponent<SpawnPoint>().UIChange = true;
            currentDifficultIsHard = true;
        }
    }

    public void RespawnBottles()
    {
        Destroy(currentBottle.gameObject);
        Debug.Log("Spawning Bottle");
        currentBottle = Instantiate(bottlePrefab,bottleSpawnPoint.transform);
        
       
    }

    public void RespawnTargets(){
        if(currentDifficultIsHard)
            HardMode();
        else
            EasyMode();
    }
}
