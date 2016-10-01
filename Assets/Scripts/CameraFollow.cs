using UnityEngine;
using System.Collections;

public class CameraFollow : MonoBehaviour
{

	[SerializeField]
	private float _xMin;
	[SerializeField]
	private float _xMax;
	[SerializeField]
	private float _yMin;
	[SerializeField]
	private float yMax;

	private float _lastYVelocity;

	private float _lastXVelocity;

	[SerializeField]
	private GameObject _cameraTarget;

	private Transform _target;

	private Rigidbody2D _targetRigidBody;

	// Use this for initialization
	void Start ()
	{
		_target = _cameraTarget.transform;
		_targetRigidBody = _cameraTarget.GetComponent<Rigidbody2D> ();
	}
	

	void FixedUpdate()
	{
		var yVelocity = _targetRigidBody.velocity.y;
		var targetYPosition = GetYTargetPosition (yVelocity);

//		var xVelocity = _targetRigidBody.velocity.x;
//		var targetXPosition = GetXTargetPosition (xVelocity);

		transform.position = new Vector3 (
			Mathf.Clamp (_targetRigidBody.position.x, _xMin, _xMax), 
			Mathf.Clamp (targetYPosition, _yMin, yMax), 
			transform.position.z); 
	}

	private float GetYTargetPosition (float playerVelocity)
	{
		Debug.Log ("Player Y velocity =" + playerVelocity);

		var cameraVelocity = playerVelocity;

		// ITS FOR SMOOTH CAMERA STOP
		if (playerVelocity < 0.2 && playerVelocity > -0.2) {

			cameraVelocity = _lastYVelocity - (_lastYVelocity / 15);
		} 

		Debug.Log ("Camera Y velocity =" + cameraVelocity);

		// ITS TO STOP CAMERA SMOOTHING
		if(cameraVelocity <= 0.01 && cameraVelocity >= -0.01){
			_lastYVelocity = 0;
			return _target.position.y;
		}


		_lastYVelocity = cameraVelocity;

		var targetPosition = _target.position.y + (cameraVelocity < 0 ? cameraVelocity / 8 : cameraVelocity / 20);

		return targetPosition;
	}

	private float GetXTargetPosition (float playerVelocity)
	{
		Debug.Log ("Player X velocity =" + playerVelocity);

		var cameraVelocity = playerVelocity;

		// ITS FOR SMOOTH CAMERA STOP
		//if (playerVelocity < 1.5 && playerVelocity > -1.5) {
			cameraVelocity = _lastXVelocity - (_lastXVelocity == 0 ? playerVelocity / 15 : _lastXVelocity / 15);
		//} 

		Debug.Log ("Camera X velocity =" + cameraVelocity);

		// ITS TO STOP CAMERA SMOOTHING
		if(cameraVelocity <= 0.01 && cameraVelocity >= -0.01){
			_lastXVelocity = 0;
			return _target.position.x;
		}


		_lastXVelocity = cameraVelocity;


		// nach rechts
		//transform.position.x


		var targetPosition = _target.position.x + (cameraVelocity / 5);

		return targetPosition;
	}
}
