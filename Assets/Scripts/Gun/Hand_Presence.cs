using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class Hand_Presence : MonoBehaviour
{
    // Hand Presence Script (Hands Model in Game)
    private InputDevice targetDevice;
    
    public GameObject handModelPrefab;
    private GameObject spawnedHandModel;
    // Get the Controller Input Characteristics
    public InputDeviceCharacteristics controllerCharacteristics;
    // Hand animations
    private Animator handAnimator;
    // Start is called before the first frame update
    void Start()
    {
        // On Start Try to Intialize the player Hands
        TryInitialize();
       
    }

    void TryInitialize()
    {
        // List the Current Input Devices
         List<InputDevice> devices = new List<InputDevice>();
        // Get the Device where the Controller Characteristics match
        InputDevices.GetDevicesWithCharacteristics(controllerCharacteristics,devices);
        // For Each Input Device list their controller Characteristics (i.e Right Hand Controller, Left Hand Controller)
        foreach(var item in devices){
            Debug.Log(item.name + item.characteristics);
        }  

        // If the Device Count is Greater than 0 set the Current Target Device to the First Section of The Array
        // Instantiate our Hand Model and Add the Animator which has Thresholds for Button Interaction (Grip,Trigger)
        if(devices.Count>0){
            targetDevice = devices[0];
            spawnedHandModel = Instantiate(handModelPrefab,transform);
            handAnimator = spawnedHandModel.GetComponent<Animator>();
        }
    }

    // Depending on the Location Axis of our Grip or Trigger Value, Change the Hand Animations State
    // Else if the player lets go, set the animation float value back to 0
    void UpdateHandAnimation(){
        if(targetDevice.TryGetFeatureValue(CommonUsages.trigger,out float triggerValue)){
            handAnimator.SetFloat("Trigger",triggerValue);
        }
        else{
            handAnimator.SetFloat("Trigger",0);
        }

        if(targetDevice.TryGetFeatureValue(CommonUsages.grip,out float gripValue)){
            handAnimator.SetFloat("Grip",gripValue);
        }
        else{
            handAnimator.SetFloat("Grip",0);
        }
    }

    // On update check if there is a valid controller, if not. Check again as user may not of put on the HMD yet.
    // After Valid Inputs are Checked, Begin Hand Animation Updates
    void Update()
    {
       if(!targetDevice.isValid){
           TryInitialize();
       }
       UpdateHandAnimation();
    }
}
