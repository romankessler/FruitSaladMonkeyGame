using Assets.Scripts.Constants;

using UnityEngine;

public class CollisionTrigger : MonoBehaviour
{
    [SerializeField]
    private BoxCollider2D _platformCollider;

    [SerializeField]
    private BoxCollider2D _platormTrigger;

    private BoxCollider2D _playerCollider;

	public bool _collissionActive;

    // Use this for initialization
    void Start()
    {
        var player = GameObject.Find("Monkey");
        _playerCollider = player.GetComponent<BoxCollider2D>();

        Physics2D.IgnoreCollision(_platformCollider, _platormTrigger, true);
    }

    void OnTriggerEnter2D(Collider2D other)
    {
		//if (other.gameObject.name == "Monkey" && other is BoxCollider2D)
		if(other == _playerCollider && !(_playerCollider.attachedRigidbody.velocity.y < 0))
        {
            var colliderItems = other.GetComponents<CircleCollider2D>();

            foreach (var collider in colliderItems)
            {
                Physics2D.IgnoreCollision(_platformCollider, collider, true);
            }

			_collissionActive = false;
        }
    }

    void OnTriggerExit2D(Collider2D other)
    {
		//if (other.gameObject.name == "Monkey" && other is BoxCollider2D)
		if(other == _playerCollider && !(_playerCollider.attachedRigidbody.velocity.y < 0))
        {
            var colliderItems = other.GetComponents<CircleCollider2D>();

            foreach (var collider in colliderItems)
            {
                Physics2D.IgnoreCollision(_platformCollider, collider, false);
            }

			_collissionActive = true;
        }
    }
}