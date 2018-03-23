using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.Constants;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenuController : MonoBehaviour
{
    [SerializeField]
    private GameObject _pauseButton;

    [SerializeField]
    private GameObject _pauseMenu;

    [SerializeField]
    private AudioClip _pauseAudioClip;

    [SerializeField]
    private AudioClip _resumeAudioClip;


    // Use this for initialization
    void Start () {
	    _pauseMenu.SetActive(false);
    }
	
	// Update is called once per frame
    void Update()
    {

    }

    private AudioSource[] allAudioSources;

    public void StopAllAudio()
    {
        allAudioSources = FindObjectsOfType(typeof(AudioSource)) as AudioSource[];
        foreach (var audioS in allAudioSources)
        {
            audioS.Pause();
        }
    }

    public void PlayAllAudio()
    {
        allAudioSources = FindObjectsOfType(typeof(AudioSource)) as AudioSource[];
        foreach (var audioS in allAudioSources)
        {
            audioS.UnPause();
        }
    }

    public void PauseGame()
    {
        _pauseMenu.SetActive(true);
        _pauseButton.SetActive(false);
        
        StopAllAudio();
        AudioSource.PlayClipAtPoint(_pauseAudioClip, transform.position, 10f);
        Time.timeScale = 0f;
    }

    public void ResumeGame()
    {
        _pauseMenu.SetActive(false);
        _pauseButton.SetActive(true);
        Time.timeScale = 1f;
        AudioSource.PlayClipAtPoint(_resumeAudioClip, transform.position, 10f);
        PlayAllAudio();
    }

    public void MainMenu()
    {
        SceneManager.LoadScene(SceneNames.MAINMENU);
        Time.timeScale = 1f;
    }

    public void QuitGame()
    {
        Debug.Log("Quit Game");
        Application.Quit();
    }
}
