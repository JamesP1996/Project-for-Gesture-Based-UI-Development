﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class HandHold : XRBaseInteractable
{
    protected Weapon weapon = null;

    public void Setup(Weapon weapon)
    {
        this.weapon = weapon;
    }

    protected override void Awake()
    {
        base.Awake();
        onActivate.AddListener(BeginAction);
        onDeactivate.AddListener(EndAction);
        onSelectEntered.AddListener(Grab);
        onSelectExited.AddListener(Drop);

    }

    protected override void OnDestroy()
    {
        onActivate.RemoveListener(BeginAction);
        onDeactivate.RemoveListener(EndAction);
        onSelectEntered.RemoveListener(Grab);
        onSelectExited.RemoveListener(Drop);
    }

    protected virtual void BeginAction(XRBaseInteractor interactor)
    {
        // Empty
    }

    protected virtual void EndAction(XRBaseInteractor interactor)
    {
        // Empty
    }

    protected virtual void Grab(XRBaseInteractor interactor)
    {

    }

    protected virtual void Drop(XRBaseInteractor interactor)
    {

    }


}