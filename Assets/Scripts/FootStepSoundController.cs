﻿using System;
using UnityEngine;
using Random = UnityEngine.Random;

[RequireComponent(typeof(PlayerController))]
[RequireComponent(typeof(AudioSource))]
public class FootStepSoundController : MonoBehaviour
{
    private PlayerController _playerController { get; set; }

    private AudioSource _audioSource { get; set; }

    private DateTime _lastPlayTime;

    [SerializeField]
    private int _maxPlayIntervalMilliseconds = 200;

    private bool _isPaused = false;

    // Use this for initialization
    void Start()
    {
        _playerController = GetComponent<PlayerController>();
        _audioSource = GetComponent<AudioSource>();

        _lastPlayTime = DateTime.Now;
    }

    public void PauseAudio()
    {
        _isPaused = true;
    }

    public void UnPauseAudio()
    {
        _isPaused = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (_playerController.IsGrounded
            && _playerController.WalkingSpeed > 0.1
            && !_audioSource.isPlaying
            && _lastPlayTime.AddMilliseconds(_maxPlayIntervalMilliseconds) < DateTime.Now
            && Time.timeScale > 0f
            && !_isPaused)
        {
            _audioSource.volume = Random.Range(0.4f, 0.6f);
            _audioSource.pitch = Random.Range(0.8f, 1.1f);
            _audioSource.Play();
            _lastPlayTime = DateTime.Now;
        }
    }
}