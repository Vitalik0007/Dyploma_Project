using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PoisonCloud : MonoBehaviour
{
    public float damagePerSecond = 3f;

    private GameManagerBehavior gameManager;

    // Start is called before the first frame update
    void Start()
    {
        GameObject gm = GameObject.Find("GameManager");
        gameManager = gm.GetComponent<GameManagerBehavior>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnParticleCollision(GameObject other)
    {
        if (other.gameObject.CompareTag("Enemy"))
        {
            HealthBar healthBar = other.GetComponentInChildren<HealthBar>();

            if (healthBar != null)
            {
                healthBar.currentHealth -= damagePerSecond * Time.deltaTime;
                if (healthBar.currentHealth <= 0)
                {
                    Destroy(other.gameObject);

                    gameManager.Gold += 50;
                }
            }
        }
    }
}
