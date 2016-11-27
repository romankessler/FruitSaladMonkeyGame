using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class BananaSystem : MonoBehaviour {


	public Text	BananaAmount;

	public void UpdateBananaAmount(int amount){
		BananaAmount.text = ""+amount;
	}
}
