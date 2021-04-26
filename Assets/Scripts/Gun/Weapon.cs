using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class Weapon : XRGrabInteractable
{
    public int recoilAmount = 15;
    private GripHold gripHold = null;
    private GuardHold guardHold = null;

    private new Rigidbody rigidbody = null;
    private Barrel barrel;
    private XRBaseInteractor gripHand = null;
    private XRBaseInteractor guardHand = null;
    public Animator anim;
    private GameObject muzzleFlash;
    private readonly Vector3 gripRotation = new Vector3(45, 0, 0);

    // On Awake SEtup the Holds, Extras and Set the Initial Rotation to the Select Entered Initial Rotation
    protected override void Awake()
    {
        base.Awake();
        SetupHolds();
        SetupExtras();
        onSelectEntered.AddListener(SetInitialRotation);
    }

    // Get the GripHold and GuardHold and then run their setup functions.
    private void SetupHolds()
    {
        gripHold = GetComponentInChildren<GripHold>();
        gripHold.Setup(this);

        guardHold = GetComponentInChildren<GuardHold>();
        guardHold.Setup(this);

    }

    // Get the Components in the gun and set them up
    private void SetupExtras()
    {
        rigidbody = GetComponent<Rigidbody>();
        muzzleFlash = transform.GetChild(6).gameObject;
        barrel = GetComponentInChildren<Barrel>();
        barrel.Setup(this);
    }
    // OnDestroy(), remove the initial rotation
    protected override void OnDestroy()
    {
        onSelectEntered.RemoveListener(SetInitialRotation);
    }

    // Sets the Initial Rotation to a Quaternion Euler of the Grip Rotation
    // Attatch the transforms local rotation to the new rotation.
    private void SetInitialRotation(XRBaseInteractor interactor)
    {
        Quaternion newRotation = Quaternion.Euler(gripRotation);
        interactor.attachTransform.localRotation = newRotation;
    }

    // Sets the Grip Hand (Uses Manual Select as OnSelect is deprecated)
    public void SetGripHand(XRBaseInteractor interactor)
    {
        gripHand = interactor;
        ManualSelect(interactor);
    }
    // Manual Selection (On Select)
    private void ManualSelect(XRBaseInteractor interactor)
    {
        OnSelectEntering(interactor);
        OnSelectEntered(interactor);
    }
    // Manual Deselect similiar to Manual Select (On Select Exit is deprecated)
    private void ManualDeselect(XRBaseInteractor interactor)
    {
        OnSelectExiting(interactor);
        OnSelectExited(interactor);
    }

    // Clear my Grip Hand
    public void ClearGripHand(XRBaseInteractor interactor)
    {
        gripHand = null;
        ManualDeselect(interactor);
    }
    // Set my Guard Hand
    public void SetGuardHand(XRBaseInteractor interactor)
    {
        guardHand = interactor;
    }
    // Clear My Guard Hand
    public void ClearGuardHand(XRBaseInteractor interactor)
    {
        guardHand = null;
    }
    // Process the Interactable during updates. Check my Rotation 
    public override void ProcessInteractable(XRInteractionUpdateOrder.UpdatePhase updatePhase)
    {
        base.ProcessInteractable(updatePhase);

        if(gripHand && guardHand)
            SetGripRotation();

    }


    // Setup a Vector 3 Target (when two hands holding) that takes in our transforms and minuses them another
    // Then Checks their looking rotation
    // Set the Grip Rotation to the Grip Hands Euler Angles
    // And Multiple our look rotation by our Quaternion Euler Grip Rotation
    // Change the Grip Hands Attatch Transform to the direction of the Look Rotation
    private void SetGripRotation()
    {
       Vector3 target = guardHand.transform.position - gripHand.transform.position;
       Quaternion lookRotation = Quaternion.LookRotation(target);

       Vector3 gripRotation = Vector3.zero;
       gripRotation.z = gripHand.transform.eulerAngles.z;

       lookRotation *= Quaternion.Euler(gripRotation);
       gripHand.attachTransform.rotation = lookRotation;
    }

    // Pull the Trigger and Fire,Set Animation and Begin Muzzle Flash (Object that is instantiated and destroyed when firing)
    public void PullTrigger()
    {
        barrel.StartFiring();
        anim.SetBool("Shoot",true);
        StartCoroutine(MuzzleFlash());


    }

    // When I release the trigger Stop the Animations and Stop Firing
    public void ReleaseTrigger()
    {
        barrel.StopFiring();
        anim.SetBool("Shoot",false);
        
    }

    // Apply recoil to the gun. (Using Right as the Level Axis are not right, would normally be up)
    // Multiplies our Guns Vector Right by the recoil amount and then adds a Impulse Force (Pushes gun back when firing)
    public void ApplyRecoil()
    {
        rigidbody.AddRelativeForce(Vector3.right * recoilAmount,ForceMode.Impulse);
    }

    // Spawns and Destroys Muzzle FLash as we fire.
    private IEnumerator MuzzleFlash()
    {
         muzzleFlash.SetActive(true);
         yield return new WaitForSeconds(0.2f);
         muzzleFlash.SetActive(false);
    }
}
