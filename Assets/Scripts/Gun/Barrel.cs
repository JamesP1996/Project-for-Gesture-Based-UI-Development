using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class Barrel : MonoBehaviour
{

    public float fireWait = 5f;
    public GameObject projectilePrefab = null;

    private Weapon weapon = null;

    private Coroutine firingRoutine = null;
    private WaitForSeconds wait= null;

    public AudioClip shoot;

    public AudioClip casing;

    AudioSource audioSource;

    // Set the Weapon Constructor
     public void Setup(Weapon weapon)
    {
        this.weapon = weapon;
    }
    // On Awake Set the Audio Source and The Wait Time
    private void Awake()
    {
        audioSource = GetComponent<AudioSource>();
        wait = new WaitForSeconds(fireWait);
    }
    // Start the Firing Sequence Coroutine
    public void StartFiring()
    {
        firingRoutine = StartCoroutine("FiringSequence");
    }
    // Create a Projectile, Add Recoil to the Gun and play Weapon Sounds then Wait
    private IEnumerator FiringSequence()
    {
        while(gameObject.activeSelf)
        {
            CreateProjectile();
            weapon.ApplyRecoil();
            audioSource.PlayOneShot(shoot,0.7f);
            audioSource.PlayOneShot(casing,0.7f);
            yield return wait;
        }
        
    }
    // Spawn a Project and Call it's launch function which gives it Vector3 Forward Force
    private void CreateProjectile()
    {
        GameObject projectileObject = Instantiate(projectilePrefab, transform.position,transform.rotation);
        Projectile projectile = projectileObject.GetComponent<Projectile>();
        projectile.Launch();
    }

    // Stop Firing (Used in Trigger Release)
    public void StopFiring()
    {
        StopCoroutine(firingRoutine);
    }
}
