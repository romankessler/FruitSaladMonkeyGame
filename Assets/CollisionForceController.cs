using System;
using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.Constants;
using UnityEngine;

public class CollisionForceController : MonoBehaviour {
    private const int MULTIPLIER = 100;


    public ForceDirection ForeDirection;

    public int ForcePower = 0;


    public enum ForceDirection
    {
        Up,
        Down,
        Left,
        Right
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag(TagNames.PLAYER))
        {
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

    void OnTriggerStay2D(Collider2D other)
    {
        if (other.CompareTag(TagNames.PLAYER))
        {
            AddForce(other);
        }
    }
}
