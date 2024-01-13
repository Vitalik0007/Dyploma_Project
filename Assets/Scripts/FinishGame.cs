using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class FinishGame : MonoBehaviour
{
    private GameManagerBehavior gameManager;

    public GameObject star1;
    public GameObject star2;
    public GameObject star3;

    public GameObject winPanel;
    public GameObject losePanel;

    private int starsOnCurrentLevel = 0;
    private int currentLevel;

    private void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManagerBehavior>();
        currentLevel = SceneManager.GetActiveScene().buildIndex;
        starsOnCurrentLevel = PlayerPrefs.GetInt("starsLevel" + currentLevel, 0);
    }

    public void GameOver()
    {
        losePanel.SetActive(true);
    }

    public void GameWin()
    {
        winPanel.SetActive(true);

        if (SceneManager.GetActiveScene().buildIndex < SceneManager.sceneCountInBuildSettings - 1)
        {
            if (PlayerPrefs.GetInt("lvl") < SceneManager.GetActiveScene().buildIndex + 1)
            {
                PlayerPrefs.SetInt("lvl", SceneManager.GetActiveScene().buildIndex + 1);
            }
        }

        if (PlayerPrefs.GetInt("rewardButtons") < currentLevel && currentLevel < 5)
            PlayerPrefs.SetInt("rewardButtons", currentLevel);

        int newStars = 0;

        if (gameManager.Health == 5)
        {
            newStars = 3;
            star1.SetActive(true);
            star2.SetActive(true);
            star3.SetActive(true);
        }
        if (gameManager.Health < 5 && gameManager.Health >= 3)
        {
            newStars = 2;
            star1.SetActive(true);
            star2.SetActive(true);
        }
        if (gameManager.Health < 3 && gameManager.Health >= 1)
        {
            newStars = 1;
            star1.SetActive(true);
        }

        if (starsOnCurrentLevel < 3 && starsOnCurrentLevel < newStars)
        {
            PlayerPrefs.SetInt("starsLevel" + currentLevel, newStars);
            if (starsOnCurrentLevel == 0)
                PlayerPrefs.SetInt("stars", PlayerPrefs.GetInt("stars") + newStars);
            else if (starsOnCurrentLevel > 0)
            {
                PlayerPrefs.SetInt("stars", PlayerPrefs.GetInt("stars") + (newStars - starsOnCurrentLevel));
            }
        }

        SpawnEnemy.starsActivator = false;
    }

}
