using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class GripHold : HandHold
{
    // On Grip Hold, Begin Action when Trigger Pressed (Back of Controller Usually)
    protected override void BeginAction(XRBaseInteractor interactor)
    {
        base.BeginAction(interactor);
        weapon.PullTrigger();
    }
    // On Grip Release End Action (Release Trigger)
    protected override void EndAction(XRBaseInteractor interactor)
    {
        base.EndAction(interactor);
        weapon.ReleaseTrigger();
    }
    // When we grab, set the grip hand to the current interactor
    protected override void Grab(XRBaseInteractor interactor)
    {
        base.Grab(interactor);
        weapon.SetGripHand(interactor);
    }
    // When we drop our grip, drop the current interactor such that the user can use their other hand if they wish.
    protected override void Drop(XRBaseInteractor interactor)
    {
        base.Drop(interactor);
        weapon.ClearGripHand(interactor);
    }

    
}
