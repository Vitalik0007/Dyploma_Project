using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManagerBehavior : MonoBehaviour
{
    private FinishGame gameFinish;
    //public static int Level;

    private SpawnEnemy spEn;

    public Text goldLabel;
    private int gold;
    public int Gold
    {
        get
        {
            return gold;
        }
        set
        {
            gold = value;
            goldLabel.GetComponent<Text>().text = "ZŁOTO: " + gold;
        }
    }

    public Text waveLabel;
    public GameObject[] nextWaveLabels;

    public bool gameOver = false;

    private int wave;
    public int Wave
    {
        get { return wave; }
        set
        {
            wave = value;
            if (!gameOver)
            {
                for (int i = 0; i < nextWaveLabels.Length; i++)
                {
                    nextWaveLabels[i].GetComponent<Animator>().SetTrigger("nextWave");
                }
            }
            waveLabel.text = "FALA: " + (wave + 1) + "/" + spEn.waves.Length;
        }
    }

    public Text healthLabel;
    public GameObject[] healthIndicator;

    private int health;
    public int Health
    {
        get { return health; }
        set
        {
            // 1
            if (value < health)
            {
                Camera.main.GetComponent<CameraShake>().Shake();
            }
            // 2
            health = value;
            healthLabel.text = "ZDROWIE: " + health;
            // 2
            if (health <= 0 && !gameOver)
            {
                gameOver = true;
                Time.timeScale = 0f;
                gameFinish.GameOver();
            }
            // 3 
            for (int i = 0; i < healthIndicator.Length; i++)
            {
                if (i < Health)
                {
                    healthIndicator[i].SetActive(true);
                }
                else
                {
                    healthIndicator[i].SetActive(false);
                }
            }
        }
    }

    // Use this for initialization
    void Start()
    {
        Time.timeScale = 1f;

        gameFinish = GameObject.FindGameObjectWithTag("GameWon").GetComponent<FinishGame>();
        spEn = GameObject.Find("Road").GetComponent<SpawnEnemy>();

        //Level = SceneManager.GetActiveScene().buildIndex;

        if (SceneManager.GetActiveScene().buildIndex == 1)
            Gold = 1000;
        if (SceneManager.GetActiveScene().buildIndex == 2)
            Gold = 1500;
        if (SceneManager.GetActiveScene().buildIndex == 3)
            Gold = 2000;
        if (SceneManager.GetActiveScene().buildIndex == 4)
            Gold = 2500;
        if (SceneManager.GetActiveScene().buildIndex == 5)
            Gold = 3000;

        Wave = 0;
        Health = 5;
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void ExitGame()
    {
        SceneManager.LoadScene(0);
    }

    public void RestartGame()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

}
