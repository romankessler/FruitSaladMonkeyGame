using Assets.Scripts.Constants;
using UnityEngine;

public class CollisionDestroy : MonoBehaviour
{
    private Animator _animator;

    [SerializeField] private AudioClip _destroySoundEffect;

    private bool _isDying;

    private object _lockObject = new Object();

    [SerializeField] private BoxCollider2D _triggerArea;

    [SerializeField] private AudioClip _triggerSoundEffect;

    public ParticleSystem ParticleSystemDestroy;

    // Use this for initialization
    private void Start()
    {
        _animator = GetComponent<Animator>();
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag(TagNames.PLAYER) && _triggerArea.IsTouching(other))
            Dying(other);
    }

    private void Dying(Collider2D other)
    {
        if (_isDying)
            return;

        _isDying = true;
        _animator.SetTrigger("Dying");
        _animator.SetBool("IsDead", true);
        other.attachedRigidbody.AddForce(new Vector2(0, 400));
        AudioSource.PlayClipAtPoint(_triggerSoundEffect, transform.position);
        Invoke("DestroyEnemy", 0.5f);

        if (ParticleSystemDestroy != null)
            ParticleSystemDestroy.Play();
    }

    private void DestroyEnemy()
    {
        AudioSource.PlayClipAtPoint(_destroySoundEffect, transform.position);
        Destroy(gameObject);
    }

    private void OnTriggerStay2D(Collider2D other)
    {
        if (other.CompareTag(TagNames.PLAYER) && _triggerArea.IsTouching(other))
            Dying(other);
    }
}