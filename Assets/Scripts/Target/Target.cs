using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Target : MonoBehaviour
{

    public AudioClip hitSound;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    private void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.tag == "Projectile")
        {
            //Debug.Log("Target hit");
            AudioSource.PlayClipAtPoint(hitSound, this.gameObject.transform.position);
            Destroy(gameObject);
        }

    }
}
