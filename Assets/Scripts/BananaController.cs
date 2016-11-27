using UnityEngine;
using System.Collections;

public class BananaController : MonoBehaviour
{

	private int _bananaAmount;

	private BananaSystem _bananaSystem;

	private bool _lock = true;

	public ParticleSystem ParticleSystemAddBanana;

	// Use this for initialization
	void Start ()
	{
		_bananaAmount = 0;
		_bananaSystem = GetComponent<BananaSystem> ();
	}


	void AddBanana (int amount)
	{
		//if (_lock) {
		//	_lock = false;
			_bananaAmount += amount;
			_bananaSystem.UpdateBananaAmount (_bananaAmount);
		ParticleSystemAddBanana.Play ();
		//	Invoke ("ResetLock", 1);
		//}
	}

	void ResetLock ()
	{
		_lock = true;
	}
}
