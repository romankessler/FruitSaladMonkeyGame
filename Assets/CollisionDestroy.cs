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
			other.attachedRigidbody.AddForce (new Vector2 (0, 100));
			Invoke("DestroyEnemy", 0.2f);
		}
	}

	private void DestroyEnemy(){
		AudioSource.PlayClipAtPoint(_triggerSoundEffect, transform.position);
		Destroy(gameObject);
	}

	void OnTriggerStay2D(Collider2D other)
	{
		if (other.CompareTag(TagNames.PLAYER) && _triggerArea.IsTouching(other))
		{
			other.attachedRigidbody.AddForce (new Vector2 (0, 100));
			Invoke("DestroyEnemy", 0.2f);
		}
	}
}
