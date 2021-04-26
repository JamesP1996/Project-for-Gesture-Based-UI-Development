using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{
    public Vector3 SpawnHere;

    public GameObject ImpactParticles;
    public int force = 30;
    public float lifetime = 12;

    // When Launch is Called, Get the RigidBody of the Projectile Game Object, Add force to it in Impulse Mode
    // After lifetime -> seconds have passed destroy the bullet
    public void Launch()
    {
        Rigidbody rigidbody = GetComponent<Rigidbody>();
        rigidbody.AddRelativeForce(Vector3.forward * force, ForceMode.Impulse);
        Destroy(gameObject,lifetime);
    }

    // If the bullet collides with a target, start a impact particle game object (holds a particle system)
    // Destroy the Target and then Destroy the particle system after 50% of a second
     private void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.tag == "Target")
        {
            GameObject particle = Instantiate(ImpactParticles,other.gameObject.transform.position,Quaternion.identity);
            //Debug.Log("Target hit");
            Destroy(other.gameObject,0.1f);
            Destroy(particle,0.5f);
        }

    }
   
}
