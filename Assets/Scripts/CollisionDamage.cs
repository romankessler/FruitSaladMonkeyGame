using System;
using Assets.Scripts.Constants;
using UnityEngine;

public class CollisionDamage : MonoBehaviour
{
    public enum ForceDirection
    {
        Up,
        Down,
        Left,
        Right
    }

    private const int MULTIPLIER = 100;
    public float _damage = 1;
    public int ForcePower = 0;
    public ForceDirection ForeDirection;

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag(TagNames.PLAYER))
        {
            other.SendMessage("ApplyDamage", _damage);
            AddForce(other);
        }
    }

    private void AddForce(Collider2D other)
    {
        var force = new Vector2();
        switch (ForeDirection)
        {
            case ForceDirection.Up:
                force.y = ForcePower * MULTIPLIER;
                break;
            case ForceDirection.Down:
                force.y = ForcePower * MULTIPLIER * -1;
                break;
            case ForceDirection.Left:
                force.x = ForcePower * MULTIPLIER * -1;
                break;
            case ForceDirection.Right:
                force.x = ForcePower * MULTIPLIER;
                break;
            default:
                throw new ArgumentOutOfRangeException();
        }
        other.attachedRigidbody.AddForce(force);
    }

    private void OnTriggerStay2D(Collider2D other)
    {
        if (other.CompareTag(TagNames.PLAYER))
        {
            other.SendMessage("ApplyDamage", _damage);
            AddForce(other);
        }
    }
}