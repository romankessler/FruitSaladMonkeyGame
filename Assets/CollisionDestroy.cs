using UnityEngine;
using System.Collections;
using Assets.Scripts.Constants;

public class CollisionDestroy : MonoBehaviour {

	[SerializeField]
	private BoxCollider2D _triggerArea;

	[SerializeField]
	private  AudioClip _triggerSoundEffect;

	private Animator _animator;

	// Use this for initialization
	void Start()
	{
		_animator = GetComponent<Animator>();
	}

	void OnTriggerEnter2D(Collider2D other)
	{
		if (other.CompareTag(TagNames.PLAYER) && _triggerArea.IsTouching(other))
		{
			_animator.SetTrigger("Dying");
			_animator.SetBool("IsDead", true);
			other.attachedRigidbody.AddForce (new Vector2 (0, 100));
			Invoke("DestroyEnemy", 0.5f);
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
			_animator.SetTrigger("Dying");
			_animator.SetBool("IsDead", true);
			other.attachedRigidbody.AddForce (new Vector2 (0, 100));
			Invoke("DestroyEnemy", 0.5f);
		}
	}
}
