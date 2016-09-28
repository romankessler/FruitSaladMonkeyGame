using UnityEngine;

public class RandomAnimationStartTime : MonoBehaviour
{
    // Use this for initialization
    void Start()
    {
        var anim = GetComponent<Animator>();
        var state = anim.GetCurrentAnimatorStateInfo(0); //could replace 0 by any other animation layer index
        anim.Play(state.fullPathHash, -1, Random.Range(0f, 1f));
    }

    // Update is called once per frame
    void Update()
    {
    }
}