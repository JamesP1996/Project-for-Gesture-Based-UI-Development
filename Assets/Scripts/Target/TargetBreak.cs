using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Passes the Target Hit Volumn to the UI controller as targets can be spawned after volume change
// Such that we need to seperate it from other AudioSources that spawn as game is launched.
public class TargetBreak : MonoBehaviour
{
    public GameObject ui; 

    void Start(){
       ui =  GameObject.Find("EventSystem");
    }

    // Update is called once per frame
    void Update()
    {
        gameObject.GetComponent<AudioSource>().volume = ui.GetComponent<UIHandler>().targetHitVol;
    }
}
