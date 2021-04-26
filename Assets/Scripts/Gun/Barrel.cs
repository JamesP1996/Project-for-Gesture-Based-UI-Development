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

     public void Setup(Weapon weapon)
    {
        this.weapon = weapon;
    }

    private void Awake()
    {
        audioSource = GetComponent<AudioSource>();
        wait = new WaitForSeconds(fireWait);
    }

    public void StartFiring()
    {
        firingRoutine = StartCoroutine("FiringSequence");
    }

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

    private void CreateProjectile()
    {
        GameObject projectileObject = Instantiate(projectilePrefab, transform.position,transform.rotation);
        Projectile projectile = projectileObject.GetComponent<Projectile>();
        projectile.Launch();
    }

    public void StopFiring()
    {
        StopCoroutine(firingRoutine);
    }
}
