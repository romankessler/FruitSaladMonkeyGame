using UnityEngine;
using System.Collections;

[RequireComponent (typeof(ParticleSystem))]
public class ParticelSystemController : MonoBehaviour {

	private ParticleSystem _particleSystem;
	// Use this for initialization
	void Start () {
		_particleSystem = GetComponent<ParticleSystem> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
