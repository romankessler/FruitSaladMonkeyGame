using Assets.Scripts.Constants;

using UnityEngine;

public class CollisionDamage : MonoBehaviour
{
    public float _damage = 1;

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag(TagNames.PLAYER))
        {
            other.SendMessage("ApplyDamage", _damage);
        }
    }

    void OnTriggerStay2D(Collider2D other)
    {
        if (other.CompareTag(TagNames.PLAYER))
        {
            other.SendMessage("ApplyDamage", _damage);
        }
    }
}