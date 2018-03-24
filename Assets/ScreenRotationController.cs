using UnityEngine;

public class ScreenRotationController : MonoBehaviour
{
    // Use this for initialization
    private void Start()
    {
        Screen.autorotateToLandscapeRight = false;
        Screen.orientation = ScreenOrientation.LandscapeRight;
    }

    // Update is called once per frame
    private void Update()
    {
    }
}