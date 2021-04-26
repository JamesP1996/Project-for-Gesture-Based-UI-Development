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
    protected override void Awake()
    {
        base.Awake();
        SetupHolds();
        SetupExtras();
        onSelectEntered.AddListener(SetInitialRotation);
    }

    private void SetupHolds()
    {
        gripHold = GetComponentInChildren<GripHold>();
        gripHold.Setup(this);

        guardHold = GetComponentInChildren<GuardHold>();
        guardHold.Setup(this);

    }

    private void SetupExtras()
    {
        rigidbody = GetComponent<Rigidbody>();
        muzzleFlash = transform.GetChild(6).gameObject;
        barrel = GetComponentInChildren<Barrel>();
        barrel.Setup(this);
    }

    protected override void OnDestroy()
    {
        onSelectEntered.RemoveListener(SetInitialRotation);
    }

    private void SetInitialRotation(XRBaseInteractor interactor)
    {
        Quaternion newRotation = Quaternion.Euler(gripRotation);
        interactor.attachTransform.localRotation = newRotation;
    }

    public void SetGripHand(XRBaseInteractor interactor)
    {
        gripHand = interactor;
        ManualSelect(interactor);
    }

    private void ManualSelect(XRBaseInteractor interactor)
    {
        OnSelectEntering(interactor);
        OnSelectEntered(interactor);
    }

    private void ManualDeselect(XRBaseInteractor interactor)
    {
        OnSelectExiting(interactor);
        OnSelectExited(interactor);
    }

    public void ClearGripHand(XRBaseInteractor interactor)
    {
        gripHand = null;
        ManualDeselect(interactor);
    }

    public void SetGuardHand(XRBaseInteractor interactor)
    {
        guardHand = interactor;
    }

    public void ClearGuardHand(XRBaseInteractor interactor)
    {
        guardHand = null;
    }

    public override void ProcessInteractable(XRInteractionUpdateOrder.UpdatePhase updatePhase)
    {
        base.ProcessInteractable(updatePhase);

        if(gripHand && guardHand)
            SetGripRotation();

    }

    private void SetGripRotation()
    {
       Vector3 target = guardHand.transform.position - gripHand.transform.position;
       Quaternion lookRotation = Quaternion.LookRotation(target);

       Vector3 gripRotation = Vector3.zero;
       gripRotation.z = gripHand.transform.eulerAngles.z;

       lookRotation *= Quaternion.Euler(gripRotation);
       gripHand.attachTransform.rotation = lookRotation;
    }


    public void PullTrigger()
    {
        barrel.StartFiring();
        anim.SetBool("Shoot",true);
        StartCoroutine(MuzzleFlash());


    }

    public void ReleaseTrigger()
    {
        barrel.StopFiring();
        anim.SetBool("Shoot",false);
        
    }

    public void ApplyRecoil()
    {
        rigidbody.AddRelativeForce(Vector3.right * recoilAmount,ForceMode.Impulse);
    }

    private IEnumerator MuzzleFlash()
    {
         muzzleFlash.SetActive(true);
         yield return new WaitForSeconds(0.2f);
         muzzleFlash.SetActive(false);
    }
}
