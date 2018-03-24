using Assets.Scripts.Constants;
using UnityEngine;

public class CollisionDamage : MonoBehaviour
{
    public float _damage = 1;

    public int ForcePower = 0;
    public HealthController.ForceDirection ForeDirection;

    private void OnTriggerEnter2D(Collider2D other)
    {
        ApplyDamageOnPlayer(other);
    }

    private void ApplyDamageOnPlayer(Collider2D other)
    {
        if (other.CompareTag(TagNames.PLAYER))
        {
            var healthController = other.GetComponent<HealthController>();
            if (healthController != null)
            {
                healthController.ApplyDamage(_damage, ForcePower, ForeDirection);
            }
        }
    }

    private void OnTriggerStay2D(Collider2D other)
    {
        ApplyDamageOnPlayer(other);
    }
}