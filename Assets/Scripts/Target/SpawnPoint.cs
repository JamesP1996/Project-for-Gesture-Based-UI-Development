using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnPoint : MonoBehaviour
{
    public GameObject TargetEasy;
    public GameObject TargetHard;

    public bool hardMode;
    public bool UIChange;

    // Start is called before the first frame update
    void Start()
    {
        if (hardMode)
            Instantiate(TargetHard, gameObject.transform.position, Quaternion.identity);
        else
            Instantiate(TargetEasy, gameObject.transform.position, Quaternion.identity);

    }

    void Update()
    {
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
