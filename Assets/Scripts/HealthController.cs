using System;
using Assets.Scripts.Constants;
using UnityEngine;
using UnityEngine.SceneManagement;

[RequireComponent(typeof(Animator))]
[RequireComponent(typeof(PlayerController))]
[RequireComponent(typeof(HeartSystem))]
public class HealthController : MonoBehaviour
{
    public enum ForceDirection
    {
        Up,
        Down,
        Left,
        Right
    }

    private const int MULTIPLIER = 30;
    private Animator _animator;

    private float _health = 5;

    private HeartSystem _heartSystem;

    private bool _isDamageable = true;

    private bool _isDead;

    private int _lifePoints = 3;

    private PlayerController _playerController;

    public AudioClip DamageSoundEffect;

    public AudioClip DyingSoundEffect;

    [Range(1, 10)] public int MaxHeartAmount = 3;

    public ParticleSystem ParticleSystemAddHealth;

    public int StartLifePoints = 3;
    private Rigidbody2D _rigidbody;
    private FootStepSoundController _footStepSoundController;

    // Use this for initialization
    private void Start()
    {
        _animator = GetComponent<Animator>();
        _playerController = GetComponent<PlayerController>();
        _heartSystem = GetComponent<HeartSystem>();
        _rigidbody = GetComponent<Rigidbody2D>();
        _footStepSoundController = GetComponent<FootStepSoundController>();

        if (SceneManager.GetActiveScene().name == SceneNames.SCENE1)
        {
            var maxHealthPoints = GetMaxHealthPoints();
            _health = maxHealthPoints;
            _lifePoints = StartLifePoints;
        }
        else
        {
            _health = PlayerPrefs.GetFloat("_health");
            _lifePoints = PlayerPrefs.GetInt("_lifePoints");
        }

        UpdateMaxHearts();
        UpdateHearts();
    }

    private int GetMaxHealthPoints()
    {
        UpdateMaxHearts();
        var maxHealthPoints = _heartSystem.GetMaxHealthPoints();
        Debug.Log("Max health Points = " + maxHealthPoints);
        return maxHealthPoints;
    }

    private void UpdateHearts()
    {
        _heartSystem.UpdateHearts((int) _health);
    }

    private void UpdateMaxHearts()
    {
        Debug.Log("Max Heart amount = " + MaxHeartAmount);
        _heartSystem.UpdateMaxHeartAmount(MaxHeartAmount);
    }

    private void OnDestroy()
    {
        PlayerPrefs.SetFloat("_health", _health);
        PlayerPrefs.SetInt("_lifePoints", _lifePoints);
    }

    public void StopAllAudio()
    {
        var allAudioSources = FindObjectsOfType(typeof(AudioSource)) as AudioSource[];
        foreach (var audioS in allAudioSources)
            audioS.Pause();
    }

    public void PlayAllAudio()
    {
        var allAudioSources = FindObjectsOfType(typeof(AudioSource)) as AudioSource[];
        foreach (var audioS in allAudioSources)
            audioS.UnPause();
    }


    private void AddForce(ForceDirection forceDirection, float forcePower)
    {
        var force = new Vector2();
        switch (forceDirection)
        {
            case ForceDirection.Up:
                force.y = forcePower * MULTIPLIER;
                break;
            case ForceDirection.Down:
                force.y = forcePower * MULTIPLIER * -1;
                break;
            case ForceDirection.Left:
                force.x = forcePower * MULTIPLIER * -1;
                break;
            case ForceDirection.Right:
                force.x = forcePower * MULTIPLIER;
                break;
            default:
                throw new ArgumentOutOfRangeException();
        }
        _rigidbody.velocity = new Vector2();
        _rigidbody.AddForce(force);
    }

    public void ApplyDamage(float damage, int forcePower, ForceDirection foreDirection)
    {
        if (_isDamageable)
            if (!_isDead)
            {
                AudioSource.PlayClipAtPoint(DamageSoundEffect, transform.position);
                AddForce(foreDirection, forcePower);
                _health -= damage;
                _health = Mathf.Max(0, _health); // damit nicht unter 0
                UpdateHearts();

                if (_health <= 0)
                {
                    _isDead = true;
                    Dying();
                }
                else
                {
                    if (_isDamageable)
                        Damaging();
                }

                _isDamageable = false;
                Invoke("ResetIsDamageable", 1); // Damage every second
            }
    }

    public void AddHealth(int healthPoints)
    {
        _health += healthPoints;
        _health = Mathf.Min(GetMaxHealthPoints(), _health); // damit nicht über maxhealth

        ParticleSystemAddHealth.Play();

        UpdateHearts();
    }

    public void AddHeartContainer(int heartAmount)
    {
        MaxHeartAmount += heartAmount;
        UpdateMaxHearts();
    }

    private void Damaging()
    {
        _animator.SetTrigger("Damage");
    }

    private void ResetIsDamageable()
    {
        _isDamageable = true;
    }

    private void Dying()
    {
        if (_footStepSoundController != null)
        {
            _footStepSoundController.PauseAudio();
        }
        StopAllAudio();
        AudioSource.PlayClipAtPoint(DyingSoundEffect, transform.position, 0.4f);
        _animator.SetTrigger("Dying");
        _animator.SetBool("IsDead", true);
        _playerController.enabled = false;
        _lifePoints--;

        if (_lifePoints <= 0)
            Invoke("StartGame", 2);
        else
            Invoke("RestartLevel", 2);
    }

    private void RestartLevel()
    {
        _health = GetMaxHealthPoints();
        UpdateHearts();
        _isDead = false;
        _animator.SetBool("IsDead", false);
        _playerController.enabled = true;

        if (!_playerController._lookingRight)
            _playerController.Flip();
        // Level neu starten
    }

    private void StartGame()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

   
}