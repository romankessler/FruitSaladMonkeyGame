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

	[SerializeField]
	private GameObject _cameraTarget;

	private Transform _target;

	// Use this for initialization
	void Start () {
		_target = _cameraTarget.transform;
	}
	
	// Update is called once per frame
	void LateUpdate () {
		transform.position = new Vector3 (Mathf.Clamp(_target.position.x, _xMin, _xMax), Mathf.Clamp(_target.position.y, _yMin, yMax), transform.position.z); 
	}
}
