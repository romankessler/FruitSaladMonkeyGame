using UnityEngine;
using System.Collections;

[RequireComponent(typeof(Rigidbody2D))]
[RequireComponent(typeof(Animator))]
public class PatrolWalkingController : MonoBehaviour {


	private Rigidbody2D _rigidbody;

	private Animator _animator;

	[SerializeField]
	private float _walkingRange = 15.4f;

	[SerializeField]
	private float _maxWalkingSpeed = 1.0f;

	private float _walkingSpeed = 0.4f;

	private Vector3 _minPosition;

	private Vector3 _maxPosition;

	// Use this for initialization
	void Start () {
		_rigidbody = GetComponent<Rigidbody2D> ();
		_animator = GetComponent<Animator> ();

		// Set min position
		_minPosition = transform.position;
		_minPosition.x = _minPosition.x - (_walkingRange /2);

		// Set max position
		_maxPosition = transform.position;
		_maxPosition.x = _minPosition.x + _walkingRange;
	}
	
	// Update is called once per frame
	void Update () {
	
		// Walk right
		if ((transform.position.x >= _maxPosition.x && _walkingSpeed > 0)
			|| (transform.position.x <= _minPosition.x && _walkingSpeed < 0)) {
			_walkingSpeed = _walkingSpeed * -1;
		}

		Walk (_walkingSpeed);

	}

	private void Walk(float speed){
		//_animator.SetFloat ("WalkingSpeed", _walkingSpeed);

		var velocity = speed * _maxWalkingSpeed; 
		//Debug.Log (velocity);
		_rigidbody.velocity = new Vector2 (velocity, _rigidbody.velocity.y);
	}
}
