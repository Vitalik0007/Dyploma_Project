using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParabolicBulletBehavior : MonoBehaviour
{
    public int damage;
    public GameObject target;
    public LayerMask enemyLayer;

    private GameManagerBehavior gameManager;

    private Vector3 initialPosition;
    private Vector3 peakPosition;
    private Vector3 finalPosition;

    public ParticleSystem explosionEffect;

    private float startTime;
    public float duration = 1.5f;
    public float yOffset = 3f;

    private bool hasReachedTarget = false;
    public float rotationSpeed = 180.0f;

    private void Start()
    {
        GameObject gm = GameObject.Find("GameManager");
        gameManager = gm.GetComponent<GameManagerBehavior>();

        initialPosition = transform.position;
        finalPosition = target.transform.position;

        peakPosition = initialPosition + (finalPosition - initialPosition) / 2;
        peakPosition.y += yOffset;
        peakPosition.y = Mathf.Max(peakPosition.y, Mathf.Max(initialPosition.y, finalPosition.y));

        startTime = Time.time;
    }

    private void Update()
    {
        float currentTime = Time.time - startTime;
        float t = currentTime / duration;

        Vector3 ballisticPosition = CalculateBalisticInterpolation(initialPosition, peakPosition, finalPosition, t);
        transform.position = ballisticPosition;

        float rotationAngle = rotationSpeed * Time.deltaTime;
        transform.Rotate(Vector3.forward, rotationAngle);

        if (t >= 1 && !hasReachedTarget)
        {
            hasReachedTarget = true;

            Instantiate(explosionEffect, transform.position, Quaternion.identity);

            Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position, 2f, enemyLayer);

            foreach (Collider2D collider in colliders)
            {
                DealDamage(collider.gameObject);
            }

            Destroy(gameObject);
        }
    }

    private Vector3 CalculateBalisticInterpolation(Vector3 start, Vector3 peak, Vector3 end, float t)
    {
        float u = 1 - t;
        float tt = t * t;
        float uu = u * u;

        Vector3 position = (uu * start) + (2 * u * t * peak) + (tt * end);

        return position;
    }

    private void DealDamage(GameObject enemy)
    {
        HealthBar healthBar = enemy.GetComponentInChildren<HealthBar>();
        healthBar.currentHealth -= Mathf.Max(damage, 0);

        if (healthBar.currentHealth <= 0)
        {
            Destroy(enemy);
            AudioSource audioSource = enemy.GetComponent<AudioSource>();
            AudioSource.PlayClipAtPoint(audioSource.clip, transform.position);

            gameManager.Gold += 50;
        }
    }
}
