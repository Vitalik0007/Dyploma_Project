using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour
{
    public Animator anim;
    public GameObject lvlPanel;
    private int currentLvl;
    private int starsNumber;
    private int buttonsNumber = 0;
    public Text stars;

    public List<Button> myList;
    public List<Button> rewardButton;
    private int starsPerLevel;

    public Image characterImage;
    public List<Sprite> characterImages;
    public List<Text> characterTexts;

    private bool[] isButtonUsed;

    public ParticleSystem confettiEffect;

    // Start is called before the first frame update
    void Start()
    {
        Time.timeScale = 1f;

        isButtonUsed = new bool[rewardButton.Count];

        if (!PlayerPrefs.HasKey("lvl"))
            PlayerPrefs.SetInt("lvl", 1);
        else
            currentLvl = PlayerPrefs.GetInt("lvl");

        if (!PlayerPrefs.HasKey("stars"))
            PlayerPrefs.SetInt("stars", 0);
        else
            starsNumber = PlayerPrefs.GetInt("stars");

        if (!PlayerPrefs.HasKey("rewardButtons"))
            PlayerPrefs.SetInt("rewardButtons", 0);
        else
            buttonsNumber = PlayerPrefs.GetInt("rewardButtons");

        for (int i = 0; i < currentLvl; i++)
        {
            myList[i].interactable = true;
            starsPerLevel = PlayerPrefs.GetInt("starsLevel" + (i + 1), 0);

            for (int j = 0; j < starsPerLevel; j++)
            {
                myList[i].transform.GetChild(j + 3).gameObject.SetActive(true);
            }
        }

        for (int i = 0; i < buttonsNumber; i++)
        {
            rewardButton[i].interactable = true;


            if (PlayerPrefs.HasKey("rewardButton" + i) && PlayerPrefs.GetInt("rewardButton" + i) == 1)
            {
                isButtonUsed[i] = true;
            }
        }


        if (PlayerPrefs.HasKey("currentCharacterIndex"))
        {
            int currentIndex = PlayerPrefs.GetInt("currentCharacterIndex");
            characterImage.sprite = characterImages[currentIndex];
            for (int i = 0; i < currentIndex; i++)
            {
                characterTexts[i].gameObject.SetActive(false);
            }
            characterTexts[currentIndex].gameObject.SetActive(true);
        }

        stars.text = starsNumber + "";
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OpenLvlPanel()
    {
        lvlPanel.SetActive(true);
    }

    public void CloseLvlPanel()
    {
        anim.SetTrigger("closeLvl");
        Invoke("CloseLvlPanelWithTime", 1f);
    }

    public void CloseLvlPanelWithTime()
    {
        lvlPanel.SetActive(false);
    }

    public void PlayGame(int sceneNum)
    {
        SceneManager.LoadScene(sceneNum);
    }

    public void PlayAudio(AudioClip clip)
    {
        GetComponent<AudioSource>().PlayOneShot(clip);
    }

    public void HelpButtonPressed(int buttonIndex)
    {
        if (!isButtonUsed[buttonIndex])
        {
            Instantiate(confettiEffect, transform.position, Quaternion.identity);
            characterImage.sprite = characterImages[buttonIndex + 1];
            characterTexts[buttonIndex].gameObject.SetActive(false);
            characterTexts[buttonIndex + 1].gameObject.SetActive(true);
            isButtonUsed[buttonIndex] = true;

            PlayerPrefs.SetInt("rewardButton" + buttonIndex, 1);

            PlayerPrefs.SetInt("currentCharacterIndex", buttonIndex + 1);
        }
    }

    public void ClearAllProgress()
    {
        PlayerPrefs.DeleteAll();
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}
