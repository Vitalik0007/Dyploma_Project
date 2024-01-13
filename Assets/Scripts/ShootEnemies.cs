using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ShootEnemies : MonoBehaviour
{

    public List<GameObject> enemiesInRange;

    private float lastShotTime;
    private TowerData towerData;

    // Use this for initialization
    void Start()
    {
        enemiesInRange = new List<GameObject>();
        lastShotTime = Time.time;
        towerData = gameObject.GetComponentInChildren<TowerData>();
    }

    // Update is called once per frame
    void Update()
    {
        GameObject target = null;
        // 1
        float minimalEnemyDistance = float.MaxValue;
        foreach (GameObject enemy in enemiesInRange)
        {
            float distanceToGoal = enemy.GetComponent<MoveEnemy>().DistanceToGoal();
            if (distanceToGoal < minimalEnemyDistance)
            {
                target = enemy;
                minimalEnemyDistance = distanceToGoal;
            }
        }
        // 2
        if (target != null)
        {
            if (Time.time - lastShotTime > towerData.CurrentLevel.fireRate)
            {
                Shoot(target.GetComponent<Collider2D>());
                lastShotTime = Time.time;
            }
        }
    }

    private void OnEnemyDestroy(GameObject enemy)
    {
        enemiesInRange.Remove(enemy);
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.tag.Equals("Enemy"))
        {
            enemiesInRange.Add(other.gameObject);
        }
    }

    void OnTriggerExit2D(Collider2D other)
    {
        if (other.gameObject.tag.Equals("Enemy"))
        {
            enemiesInRange.Remove(other.gameObject);
        }
    }

    private void Shoot(Collider2D target)
    {
        GameObject bulletPrefab = towerData.CurrentLevel.bullet;
        Vector3 startPosition = gameObject.transform.position;
        Vector3 targetPosition = target.transform.position;
        startPosition.z = bulletPrefab.transform.position.z;
        targetPosition.z = bulletPrefab.transform.position.z;

        GameObject newBullet = Instantiate(bulletPrefab);
        newBullet.transform.position = startPosition;

        
        BulletType bulletType = towerData.CurrentLevel.bulletType;
        if (bulletType == BulletType.Parabolic)
        {
            ParabolicBulletBehavior bulletComp = newBullet.GetComponent<ParabolicBulletBehavior>();
            bulletComp.target = target.gameObject;
        }
        else if (bulletType == BulletType.Straight)
        {
            BulletBehavior bulletComp = newBullet.GetComponent<BulletBehavior>();
            bulletComp.target = target.gameObject;
        }
        else if (bulletType == BulletType.Antiseptic)
        {
            AntisepticBulletBehavior bulletComp = newBullet.GetComponent<AntisepticBulletBehavior>();
            bulletComp.target = target.gameObject;
        }

        AudioSource audioSource = gameObject.GetComponent<AudioSource>();
        audioSource.PlayOneShot(audioSource.clip);
    }

}
