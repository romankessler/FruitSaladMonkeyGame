using UnityEngine;
using System.Collections;

public class FrameRateSettings : MonoBehaviour {

	// Use this for initialization
	void Start () {
		Application.targetFrameRate = 60;
		QualitySettings.vSyncCount = 0;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
