using Assets.Scripts.Constants;
using UnityEngine;
using UnityEngine.SceneManagement;

[RequireComponent(typeof(Animator))]
[RequireComponent(typeof(PlayerController))]
[RequireComponent(typeof(HeartSystem))]
public class HealthController : MonoBehaviour
{
    private Animator _animator;

    private float _health = 5;

    private HeartSystem _heartSystem;

    private bool _isDamageable = true;

    private bool _isDead;

    private int _lifePoints = 3;

    private PlayerController _playerController;

    [Range(1, 10)] public int MaxHeartAmount = 3;

    public ParticleSystem ParticleSystemAddHealth;

    public int StartLifePoints = 3;

    public AudioClip DamageSoundEffect;

    // Use this for initialization
    private void Start()
    {
        _animator = GetComponent<Animator>();
        _playerController = GetComponent<PlayerController>();
        _heartSystem = GetComponent<HeartSystem>();

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

    public void ApplyDamage(float damage)
    {
        if (_isDamageable)
        {
            _health -= damage;
            _health = Mathf.Max(0, _health); // damit nicht unter 0
            UpdateHearts();

            if (!_isDead)
            {
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
        AudioSource.PlayClipAtPoint(DamageSoundEffect, transform.position);
        _animator.SetTrigger("Damage");
    }

    private void ResetIsDamageable()
    {
        _isDamageable = true;
    }

    private void Dying()
    {
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
        SceneManager.LoadScene(SceneNames.SCENE1);
    }
}