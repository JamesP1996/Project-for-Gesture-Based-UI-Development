using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class GuardHold : HandHold
{
    // Grab the Guard Section of the Gun
     protected override void Grab(XRBaseInteractor interactor)
    {
        base.Grab(interactor);
        weapon.SetGuardHand(interactor);
    }
    // Let go of the Guard Section of the Gun
    protected override void Drop(XRBaseInteractor interactor)
    {
        base.Drop(interactor);
        weapon.ClearGuardHand(interactor);
    }
}
