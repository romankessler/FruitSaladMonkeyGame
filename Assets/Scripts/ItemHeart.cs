using Assets.Scripts.Constants;

using UnityEngine;

public class ItemHeart : MonoBehaviour
{
    private readonly int _healingHeartAmount = 2;

    public AudioClip SoundEffect;

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag(TagNames.PLAYER))
        {
            other.SendMessage("AddHealth", _healingHeartAmount);
            AudioSource.PlayClipAtPoint(SoundEffect, other.transform.position);
            Destroy(gameObject);
        }
    }
}