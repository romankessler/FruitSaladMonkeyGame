using UnityEngine;
using System.Collections;
using Assets.Scripts.Constants;

public class ItemBanana : MonoBehaviour {

	private readonly int _bananaAmount = 1;

	public AudioClip SoundEffect;

	void OnTriggerEnter2D(Collider2D other)
	{
		if (other.CompareTag(TagNames.PLAYER))
		{
			other.SendMessage("AddBanana", _bananaAmount);
			AudioSource.PlayClipAtPoint(SoundEffect, other.transform.position);
			Destroy(gameObject);
		}
	}

}
