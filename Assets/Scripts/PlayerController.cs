using Assets.Scripts.Constants;

using UnityEngine;

using UnityStandardAssets.CrossPlatformInput;

using System;

[RequireComponent (typeof(Rigidbody2D))]
[RequireComponent (typeof(Animator))]
[RequireComponent (typeof(ParticleSystem))]
public class PlayerController : MonoBehaviour
{
	private Animator _animator;

	public ParticleSystem ParticleSystemDoubleJump;

	[HideInInspector]
	public bool IsGrounded = false;

	private bool _isJumping = false;

	private bool _isdoubleJumping = false;

	private int _jumpCounter = 0;

	[HideInInspector]
	public float _jumpForce = (float)1;

	[HideInInspector]
	public bool _lookingRight = true;

	public float _maxWalkingSpeed = 2.5f;

	private Rigidbody2D _rigidbody;

	public LayerMask _whatIsGround;

    public Transform groundCheck;

    public AudioClip JumpSoundEffect;

	public AudioClip DoubleJumpSoundEffect;

	public AudioClip LandedSoundEffect;

    // Use this for initialization
    void Start ()
	{
		_rigidbody = GetComponent<Rigidbody2D> ();
		_animator = GetComponent<Animator> ();
	}

	// Update is called once per frame
	void Update ()
	{
		// jump
		if ((Input.GetButtonDown (InputNames.JUMP) || CrossPlatformInputManager.GetButtonDown (InputNames.JUMP)) && IsGrounded) {
			_isJumping = true;
			AudioSource.PlayClipAtPoint (JumpSoundEffect, transform.position);
		}

		//double jump
		if ((Input.GetButtonDown (InputNames.JUMP) || CrossPlatformInputManager.GetButtonDown (InputNames.JUMP)) && !IsGrounded && _jumpCounter < 1) {
			_isdoubleJumping = true;
			AudioSource.PlayClipAtPoint (DoubleJumpSoundEffect, transform.position);
			_animator.SetTrigger ("DoubleJump");
			ParticleSystemDoubleJump.Play ();
		}
	}

	// Is called on fixed intervall (based on Fixed Timestamp from project settings)
	void FixedUpdate ()
	{
		// Walking with keyboard
		var horKeyboard = Input.GetAxis (InputNames.AXIS_HORIZONTAL);

		if (horKeyboard != 0) {
			//Debug.Log ("Walk from keaboard=" + horKeyboard);
			Walk (horKeyboard);
		} else {
			// Walking with Touchpad
			var horCrossPlat = CrossPlatformInputManager.GetAxis (InputNames.AXIS_HORIZONTAL);
			//Debug.Log ("Walk from touchpad" + horCrossPlat);
			Walk (horCrossPlat);
		}




		// Ground Detection
		UpdateGroundDetection ();

		// Jump
		if (_isJumping) {
			_rigidbody.AddForce (new Vector2 (0, _jumpForce*0.75f));
			_isJumping = false;
		}

		// double jump
		if (_isdoubleJumping) {
			_rigidbody.AddForce (new Vector2 (0, _jumpForce*0.5f));
			_isdoubleJumping = false;
			_jumpCounter++;
		}
	}

	private void Walk (float hor)
	{
		// Walking
		UpdateWalking (hor);

		// Face direction
		FlipIfNeeded (hor);
	}

	private void UpdateGroundDetection ()
	{
		var oldValue = IsGrounded;

        var overlap = Physics2D.OverlapCircle(groundCheck.position, (float)0.15, _whatIsGround);

        IsGrounded = _rigidbody.velocity.y <= 0.8 && overlap;


		_animator.SetBool ("IsGrounded", IsGrounded);

		if (!oldValue && IsGrounded) {
			_animator.SetTrigger ("Landed");
			AudioSource.PlayClipAtPoint (LandedSoundEffect, transform.position, 5f);
			_jumpCounter = 0;
			ParticleSystemDoubleJump.Stop ();
		}
	}

	private void FlipIfNeeded (float hor)
	{
		if ((hor > 0 && !_lookingRight)
		          || (hor < 0 && _lookingRight)) {
			Flip ();
		}
	}

	public float WalkingSpeed { get; set; }

	private bool _isWalking;

	private DateTime _startWalkingTimestamp;

	private float _lastRunningVelocity;

	private float GetMaxWalkingVelocity(float hor){
		var velocity = IsGrounded ? hor * _maxWalkingSpeed : hor*_maxWalkingSpeed * 1.3f;
		return velocity;
	}

	private float GetMaxRunningVelocity(float hor){
		var maxSpeed = _maxWalkingSpeed * 2;

		var velocity = IsGrounded ? hor * maxSpeed : hor * maxSpeed * 1.3f;
		return velocity;
	}

	private void UpdateWalking (float hor)
	{ 
		WalkingSpeed = Mathf.Abs (hor);
		//Debug.Log (WalkingSpeed);
		_animator.SetFloat ("WalkingSpeed", WalkingSpeed);

//		if(hor == 0){
//			_isWalking = false;
//		}

		var velocityY = _rigidbody.velocity.y;
		var velocityX = GetMaxWalkingVelocity(hor);

//		if(!_isWalking && hor != 0 && IsGrounded){
//			_startWalkingTimestamp = DateTime.Now;
//			_isWalking = true;
//			_lastRunningVelocity = GetMaxWalkingVelocity (hor);
//		}
//
//		if (_startWalkingTimestamp.AddMilliseconds (300) < DateTime.Now) {
//			velocityX = GetMaxWalkingVelocity (hor);
//			velocityX = _lastRunningVelocity + velocityX * 0.1f;
//			velocityX = velocityX < 0 ? Mathf.Max (velocityX, GetMaxRunningVelocity (hor)) : Mathf.Min (velocityX, GetMaxRunningVelocity (hor));
//			_lastRunningVelocity = velocityX;
//		}

		_rigidbody.velocity = new Vector2 (velocityX, velocityY);
		//Debug.Log (transform.position.x);
	}

	public void Flip ()
	{
		_lookingRight = !_lookingRight;

		var currentScale = transform.localScale;
		currentScale.x *= -1;

		transform.localScale = currentScale;
	}
}