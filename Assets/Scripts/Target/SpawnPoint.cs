using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnPoint : MonoBehaviour
{
    public GameObject TargetEasy;
    public GameObject TargetHard;

    public bool hardMode;
    // Checks if there was a Change in the UI, such that we need to respawn the targets as the new Difficulty
    public bool UIChange;

    // Start is called before the first frame update
    void Start()
    {
        // Depending on the Current Difficulty on Run. Spawn particular Target Type (Hard,Easy)
        if (hardMode)
            Instantiate(TargetHard, gameObject.transform.position, Quaternion.identity);
        else
            Instantiate(TargetEasy, gameObject.transform.position, Quaternion.identity);

    }

    void Update()
    {
        // If the UI Change is equal to true, Spawn Easy or Hard Targets based on hardMode boolean
        // Once they have been changed Set UI-Change back to false as to not continously spawn targets.
        if (UIChange == true)
        {
            if (hardMode)
            {
                Instantiate(TargetHard, gameObject.transform.position, Quaternion.identity);
                UIChange = false;
            }
            else
            {
                Instantiate(TargetEasy, gameObject.transform.position, Quaternion.identity);
                UIChange = false;
            }

        }

    }


}
