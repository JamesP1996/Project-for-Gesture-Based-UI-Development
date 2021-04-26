using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class LocomotionController : MonoBehaviour
{

    public XRController TeleportRay;
    public InputHelpers.Button teleportActivationButton;
    public float activationThreshold = 0.1f;

    public XRRayInteractor ray;
    
    public bool CheckIfActivated(XRController controller){
        InputHelpers.IsPressed(controller.inputDevice,teleportActivationButton,out bool isActivated, activationThreshold);
        return isActivated;
    }

    // Update is called once per frame
    // As TryGetInfo is giving a Obsolete Warning, I added [System.Obselete].
    [System.Obsolete]
    void Update()
    {
        Vector3 pos = new Vector3();
        Vector3 norm = new Vector3();
        int index = 0;
        bool validTarget = false;


        if(TeleportRay){
            bool isInteractorRayHovering = ray.TryGetHitInfo(ref pos, ref norm, ref index, ref validTarget);
        
            TeleportRay.gameObject.SetActive(CheckIfActivated(TeleportRay) && !isInteractorRayHovering);
        }
    }
}
