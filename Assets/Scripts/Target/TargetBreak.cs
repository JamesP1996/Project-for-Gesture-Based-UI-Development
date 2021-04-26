using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
