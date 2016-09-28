using UnityEngine;

public class BackgroundParallaxController : MonoBehaviour
{
    private Vector3 _lastPosition;

    public Transform[] BackroundItems;

    public float ParallaxReductionFactor;

    public float ParallaxScale;

    public float Smoothing;

    // Use this for initialization
    void Start()
    {
        _lastPosition = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        var parallax = (_lastPosition.x - transform.position.x) * ParallaxScale;

        for (int i = 0; i < BackroundItems.Length; i++)
        {
            var backgroundTargetPosition = BackroundItems[i].position.x + parallax * (i * ParallaxReductionFactor + 1);
            BackroundItems[i].position = Vector3.Lerp(
                BackroundItems[i].position,
                new Vector3(backgroundTargetPosition, BackroundItems[i].position.y, BackroundItems[i].position.z),
                Smoothing * Time.deltaTime);
        }

        _lastPosition = transform.position;
    }
}