using UnityEngine;
using System.Collections;

public class CameraFollow : MonoBehaviour {

	[SerializeField]
	private float _xMin;
	[SerializeField]
	private float _xMax;
	[SerializeField]
	private float _yMin;
	[SerializeField]
	private float yMax;

	private float _lastYVelocity;

	[SerializeField]
	private GameObject _cameraTarget;

	private Transform _target;

	private Rigidbody2D _targetRigidBody;

	// Use this for initialization
	void Start () {
		_target = _cameraTarget.transform;
		_targetRigidBody = _cameraTarget.GetComponent<Rigidbody2D> ();
	}
	
	// Update is called once per frame
	void LateUpdate () {

		var yVelocity = _targetRigidBody.velocity.y;

		if (yVelocity < 10 && yVelocity > -0.1) {

			yVelocity = _lastYVelocity - (_lastYVelocity / 10);
		} 

		_lastYVelocity = yVelocity;

		var targetYPosition = _target.position.y + (yVelocity < 0 ? yVelocity / 10 : yVelocity / 20);

		transform.position = new Vector3 (
			Mathf.Clamp(_target.position.x, _xMin, _xMax), 
			Mathf.Clamp(targetYPosition, _yMin, yMax), 
			transform.position.z); 
	}
}
