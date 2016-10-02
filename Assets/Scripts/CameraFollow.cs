using UnityEngine;
using System.Collections;

[RequireComponent(typeof(Camera))]
public class CameraFollow : MonoBehaviour
{
	private float _xMin;

	private float _xMax;

	private float _yMin;

	private float _yMax;

	private float _lastYVelocity;

	private float _lastXVelocity;

	[SerializeField]
	private GameObject _cameraTarget;

	private Transform _target;

	private Rigidbody2D _targetRigidBody;

	private BoxCollider2D _cameraArea;

	private GameObject _cameraAreaObject;

	private Camera _camera;

	// Use this for initialization
	void Start ()
	{
		_target = _cameraTarget.transform;
		_targetRigidBody = _cameraTarget.GetComponent<Rigidbody2D> ();

		_cameraAreaObject = GameObject.Find ("CameraArea");
		_cameraArea = _cameraAreaObject.GetComponent<BoxCollider2D> ();

		_camera = _cameraAreaObject.GetComponentInChildren<Camera> ();

		var cameraHeight = 2f * _camera.orthographicSize;
//		Debug.Log ("cameraHeight="+cameraHeight);
		var cameraWidth = cameraHeight * _camera.aspect;
//		Debug.Log ("cameraWidth="+cameraWidth);

		var areaXPos = _cameraAreaObject.transform.position.x;
		var areaYPos = _cameraAreaObject.transform.position.y;

//		Debug.Log ("areaXPos="+areaXPos);
//		Debug.Log ("areaYPos="+areaYPos);

		var areaWidth = _cameraArea.size.x;
		var areaHeight = _cameraArea.size.y;

//		Debug.Log ("areaWidth="+areaWidth);
//		Debug.Log ("areaHeight="+areaHeight);

		_xMin = areaXPos - areaWidth/2 + cameraWidth/2;// - _cameraAerea.offset.x;
		_xMax = _xMin + areaWidth - cameraWidth;

		_yMin = areaYPos - areaHeight/2 + cameraHeight/2;//; - _cameraAerea.offset.y;
		_yMax = _yMin + areaHeight - cameraHeight;

//		Debug.Log ("xMin=" + _xMin);
//		Debug.Log ("xMax=" + _xMax);
//		Debug.Log ("yMin=" + _yMin);
//		Debug.Log ("yMax=" + _yMax);
	}
	

	void FixedUpdate()
	{
		var yVelocity = _targetRigidBody.velocity.y;
		var targetYPosition = GetYTargetPosition (yVelocity);

//		var xVelocity = _targetRigidBody.velocity.x;
//		var targetXPosition = GetXTargetPosition (xVelocity);

		transform.position = new Vector3 (
			Mathf.Clamp (_targetRigidBody.position.x, _xMin, _xMax), 
			Mathf.Clamp (targetYPosition, _yMin, _yMax), 
			transform.position.z); 
	}

	private float GetYTargetPosition (float playerVelocity)
	{
//		Debug.Log ("Player Y velocity =" + playerVelocity);

		var cameraVelocity = playerVelocity;

		// ITS FOR SMOOTH CAMERA STOP
		if (playerVelocity < 0.2 && playerVelocity > -0.2) {

			cameraVelocity = _lastYVelocity - (_lastYVelocity / 15);
		} 

//		Debug.Log ("Camera Y velocity =" + cameraVelocity);

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
//		Debug.Log ("Player X velocity =" + playerVelocity);

		var cameraVelocity = playerVelocity;

		// ITS FOR SMOOTH CAMERA STOP
		//if (playerVelocity < 1.5 && playerVelocity > -1.5) {
			cameraVelocity = _lastXVelocity - (_lastXVelocity == 0 ? playerVelocity / 15 : _lastXVelocity / 15);
		//} 

//		Debug.Log ("Camera X velocity =" + cameraVelocity);

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
