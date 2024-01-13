using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

[System.Serializable]
public class Wave
{
    public GameObject[] enemyPrefab;
    public float spawnInterval = 2;
    public int maxEnemies = 20;
}

[System.Serializable]
public class Lane
{
    public GameObject[] waypoints;
}

public class SpawnEnemy : MonoBehaviour
{
    private int randLane;
    public Lane[] lanes;

    public Wave[] waves;
    public int timeBetweenWaves = 5;

    private GameManagerBehavior gameManager;
    private FinishGame gameFinish;

    private float lastSpawnTime;
    private int enemiesSpawned = 0;

    public static bool starsActivator = true;

    // Use this for initialization
    void Start()
    {
        lastSpawnTime = Time.time;
        gameManager = GameObject.Find("GameManager").GetComponent<GameManagerBehavior>();
        gameFinish = GameObject.FindGameObjectWithTag("GameWon").GetComponent<FinishGame>();
        starsActivator = true;
    }

    // Update is called once per frame
    void Update()
    {
        randLane = Random.Range(0, lanes.Length);
        // 1
        int currentWave = gameManager.Wave;
        if (currentWave < waves.Length)
        {
            // 2
            float timeInterval = Time.time - lastSpawnTime;
            float spawnInterval = waves[currentWave].spawnInterval;
            if (((enemiesSpawned == 0 && timeInterval > timeBetweenWaves) || timeInterval > spawnInterval) && enemiesSpawned < waves[currentWave].maxEnemies)
            {
                int randEnemy;
                randEnemy = Random.Range(0, waves[currentWave].enemyPrefab.Length);
                lastSpawnTime = Time.time;
                GameObject newEnemy = (GameObject)Instantiate(waves[currentWave].enemyPrefab[randEnemy]);
                newEnemy.GetComponent<MoveEnemy>().waypoints = lanes[randLane].waypoints;
                enemiesSpawned++;
            }
            // 4 
            if (enemiesSpawned == waves[currentWave].maxEnemies &&
                GameObject.FindGameObjectWithTag("Enemy") == null)
            {
                gameManager.Wave++;
                gameManager.Gold = Mathf.RoundToInt(gameManager.Gold * 1.1f);
                enemiesSpawned = 0;
                lastSpawnTime = Time.time;
            }
            // 5 
        }
        else
        {
            gameManager.gameOver = true;
            if (starsActivator == true)
                gameFinish.GameWin();
        }
    }

    public void NextLvl()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    public void RestartLvl()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

}