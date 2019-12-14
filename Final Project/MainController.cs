using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class MainController : MonoBehaviour {
public Animator animator; //define the animator variable
public Rigidbody rigidbody;
private float h;
private float v;
private float moveX; //for distance
private float moveZ; //for distance
private float speedH = 100f; //speed for moving left and right
private float speedZ = 100f; //speed for moving forward and backward
// Use this for initialization
void Start () {
animator = GetComponent<Animator>();
rigidbody = GetComponent<Rigidbody>();
}
// Update is called once per frame
void Update () {
if(Input.GetKeyDown(KeyCode.Space))
{
animator.Play("1HCombatRunF", -1, 0); //-1 means a base layer and 0 means no time interval / gap
}
h = Input.GetAxis("Horizontal");
v = Input.GetAxis ("Vertical");
animator.SetFloat ("h", h);
animator.SetFloat ("v", v);
moveX = h * speedH * Time.deltaTime;
moveZ = v * speedZ * Time.deltaTime;
if (moveZ <= 0)
{
moveX = 0;
}
rigidbody.velocity = new Vector3 (moveX, 0, moveZ);
}
}
