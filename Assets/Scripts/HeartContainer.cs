using Assets.Scripts.Constants;

using UnityEngine;

public class HeartContainer : MonoBehaviour
{
    private readonly int _heartAmount = 1;

    public AudioClip SoundEffect;

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag(TagNames.PLAYER))
        {
            other.SendMessage("AddHeartContainer", _heartAmount);
            AudioSource.PlayClipAtPoint(SoundEffect, other.transform.position);
            Destroy(gameObject);
        }
    }
}