using Assets.Scripts.Constants;

using UnityEngine;

using UnityStandardAssets.CrossPlatformInput;

[RequireComponent(typeof(Rigidbody2D))]
[RequireComponent(typeof(Animator))]
public class PlayerController : MonoBehaviour
{
    private Animator _animator;

    [HideInInspector]
    public bool IsGrounded = false;

    private bool _isJumping = false;

    public float _jumpForce = (float)0.1;

    [HideInInspector]
    public bool _lookingRight = true;

    public float _maxSpeed = 1;

    private Rigidbody2D _rigidbody;

    public LayerMask _whatIsGround;

    public Transform groundCheck;

    public AudioClip JumpSoundEffect;

    public AudioClip LandedSoundEffect;

    // Use this for initialization
    void Start()
    {
        _rigidbody = GetComponent<Rigidbody2D>();
        _animator = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        if ((Input.GetButtonDown(InputNames.JUMP) || CrossPlatformInputManager.GetButtonDown(InputNames.JUMP)) && IsGrounded)
        {
            _isJumping = true;
            AudioSource.PlayClipAtPoint(JumpSoundEffect, transform.position);
        }
    }

    // Is called on fixed intervall (based on Fixed Timestamp from project settings) 
    void FixedUpdate()
    {
		// Walking with keyboard
        var horKeyboard = Input.GetAxis(InputNames.AXIS_HORIZONTAL);

		if(horKeyboard != 0){
			Walk(horKeyboard);
		}

        // Walking with Touchpad
        var horCrossPlat = CrossPlatformInputManager.GetAxis(InputNames.AXIS_HORIZONTAL);

		if(horCrossPlat != 0){
			Walk(horCrossPlat);
		}

		// Ground Detection
        UpdateGroundDetection();

        // Jump
        if (_isJumping)
        {
            _rigidbody.AddForce(new Vector2(0, _jumpForce));
            _isJumping = false;
        }
    }

    private void Walk(float hor)
    {
        // Walking
        UpdateWalking(hor);

        // Face direction
        FlipIfNeeded(hor);
    }

    private void UpdateGroundDetection()
    {
        var oldValue = IsGrounded;
        
		var overlap = Physics2D.OverlapCircle(groundCheck.position, (float)0.1, _whatIsGround);

		IsGrounded = _rigidbody.velocity.y <= 0 && overlap;


        _animator.SetBool("IsGrounded", IsGrounded);

        if (!oldValue && IsGrounded)
        {
            _animator.SetTrigger("Landed");
            AudioSource.PlayClipAtPoint(LandedSoundEffect, transform.position);
        }
    }

    private void FlipIfNeeded(float hor)
    {
        if ((hor > 0 && !_lookingRight)
            || (hor < 0 && _lookingRight))
        {
            Flip();
        }
    }

    public float WalkingSpeed { get; set; }

    private void UpdateWalking(float hor)
    {
        WalkingSpeed = Mathf.Abs(hor);
        _animator.SetFloat("WalkingSpeed", WalkingSpeed);
        _rigidbody.velocity = new Vector2(hor * _maxSpeed, _rigidbody.velocity.y);
    }

    public void Flip()
    {
        _lookingRight = !_lookingRight;

        var currentScale = transform.localScale;
        currentScale.x *= -1;

        transform.localScale = currentScale;
    }
}