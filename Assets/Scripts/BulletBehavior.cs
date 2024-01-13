using UnityEngine;

public class BulletBehavior : MonoBehaviour
{
    public float speed = 10f;
    public int damage;
    public GameObject target;

    public Vector3 targetPosition;
    public Vector3 startPosition;
    private GameManagerBehavior gameManager;

    private void Start()
    {
        GameObject gm = GameObject.Find("GameManager");
        gameManager = gm.GetComponent<GameManagerBehavior>();

        startPosition = transform.position;
        targetPosition = target.transform.position;
    }

    private void Update()
    {
        Vector3 direction = targetPosition - startPosition;
        float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;
        angle -= 90f;
        transform.rotation = Quaternion.AngleAxis(angle, Vector3.forward);

        float step = speed * Time.deltaTime;
        transform.position = Vector3.MoveTowards(transform.position, targetPosition, step);

        if (transform.position == targetPosition)
        {
            if (target != null)
            {
                HealthBar healthBar = target.GetComponentInChildren<HealthBar>();
                healthBar.currentHealth -= Mathf.Max(damage, 0);

                if (healthBar.currentHealth <= 0)
                {
                    Destroy(target);
                    AudioSource audioSource = target.GetComponent<AudioSource>();
                    AudioSource.PlayClipAtPoint(audioSource.clip, transform.position);

                    gameManager.Gold += 50;
                }
            }

            Destroy(gameObject);
        }
    }
}