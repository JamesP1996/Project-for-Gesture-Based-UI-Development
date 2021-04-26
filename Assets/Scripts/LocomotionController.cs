using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class LocomotionController : MonoBehaviour
{
    // Setup a Variables for Teleportation
    public XRController TeleportRay;
    public InputHelpers.Button teleportActivationButton;
    public float activationThreshold = 0.1f;

    public XRRayInteractor ray;
    // Check if the Trigger Button was Pressed and Then Set isActivated to True
    public bool CheckIfActivated(XRController controller){
        InputHelpers.IsPressed(controller.inputDevice,teleportActivationButton,out bool isActivated, activationThreshold);
        return isActivated;
    }

    // Update is called once per frame
    // As TryGetInfo is giving a Obsolete Warning, I added [System.Obselete].
    [System.Obsolete]
    void Update()
    {
        // Setup Vector Posistions (Required for TryGetHitInfo (Deprecated -> Unsure what the new standard is))
        Vector3 pos = new Vector3();
        Vector3 norm = new Vector3();
        int index = 0;
        bool validTarget = false;

        // If There is a teleport ray, get the hit info and set it to active if its not hovering over a Interactble Object
        if(TeleportRay){
            bool isInteractorRayHovering = ray.TryGetHitInfo(ref pos, ref norm, ref index, ref validTarget);
        
            TeleportRay.gameObject.SetActive(CheckIfActivated(TeleportRay) && !isInteractorRayHovering);
        }
    }
}
