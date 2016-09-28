using UnityEngine;

[RequireComponent(typeof(PlayerController))]
[RequireComponent(typeof(AudioSource))]
public class FootStepSoundController : MonoBehaviour
{
    private PlayerController _playerController { get; set; }

    private AudioSource _audioSource { get; set; }

    // Use this for initialization
    void Start()
    {
        _playerController = GetComponent<PlayerController>();
        _audioSource = GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {
        if (_playerController.IsGrounded
            && _playerController.WalkingSpeed > 0.1
            && !_audioSource.isPlaying)
        {
            _audioSource.volume = Random.Range(0.4f, 0.6f);
            _audioSource.pitch = Random.Range(0.8f, 1.1f);
            _audioSource.Play();
        }
    }
}