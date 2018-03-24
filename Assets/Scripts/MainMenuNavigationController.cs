using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenuNavigationController : MonoBehaviour
{
    public AudioClip _playGameSound;

    public void PlayGame()
    {
        AudioSource.PlayClipAtPoint(_playGameSound, transform.position);
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }
}