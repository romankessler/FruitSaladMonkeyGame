using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrrenRotationController : MonoBehaviour {

	// Use this for initialization
	void Start () {
	    Screen.autorotateToLandscapeRight = false;
	    Screen.orientation = ScreenOrientation.LandscapeRight;
    }

    // Update is called once per frame
    void Update () {
		
	}
}
