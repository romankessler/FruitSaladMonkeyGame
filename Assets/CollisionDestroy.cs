using UnityEngine;
using System.Collections;
using Assets.Scripts.Constants;

public class CollisionDestroy : MonoBehaviour {

	[SerializeField]
	private BoxCollider2D _triggerArea;

	[SerializeField]
	private  AudioClip _triggerSoundEffect;

	void OnTriggerEnter2D(Collider2D other)
	{
		if (other.CompareTag(TagNames.PLAYER) && _triggerArea.IsTouching(other))
		{
			AudioSource.PlayClipAtPoint(_triggerSoundEffect, other.transform.position);
			Destroy(gameObject);
		}
	}

	void OnTriggerStay2D(Collider2D other)
	{
		if (other.CompareTag(TagNames.PLAYER) && _triggerArea.IsTouching(other))
		{
			AudioSource.PlayClipAtPoint(_triggerSoundEffect, other.transform.position);
			Destroy(gameObject);
		}
	}
}
