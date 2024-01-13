using UnityEngine;
using System.Collections;

public class MoveEnemy : MonoBehaviour
{

    [HideInInspector]
    public GameObject[] waypoints;
    private int currentWaypoint = 0;
    private float lastWaypointSwitchTime;
    public float speed = 1.0f;

    private AudioSource audioSource;
    private GameManagerBehavior gameManager;

    private bool shouldFlipSprite = false;

    // Use this for initialization
    void Start()
    {
        lastWaypointSwitchTime = Time.time;
        audioSource = GetComponent<AudioSource>();
        gameManager = GameObject.Find("GameManager").GetComponent<GameManagerBehavior>();
    }

    // Update is called once per frame
    void Update()
    {
        // 1. Pobieranie pozycji startowej i docelowej
        Vector3 startPosition = waypoints[currentWaypoint].transform.position;
        Vector3 targetPosition = waypoints[currentWaypoint + 1].transform.position;

        // 2. Interpolacja liniowa między pozycjami startową i docelową
        float pathLength = Vector2.Distance(startPosition, targetPosition);
        float totalTimeForPath = pathLength / speed;
        float currentTimeOnPath = Time.time - lastWaypointSwitchTime;
        gameObject.transform.position = Vector2.Lerp(startPosition, targetPosition, currentTimeOnPath / totalTimeForPath);

        // 3. Sprawdzanie, czy osiągnięto docelową pozycję
        if (gameObject.transform.position.Equals(targetPosition))
        {
            if (currentWaypoint < waypoints.Length - 2)
            {
                // 4. Przełączanie na kolejny punkt kontrolny
                currentWaypoint++;
                lastWaypointSwitchTime = Time.time;
            }
            else
            {
                // 5 Destroy enemy
                Destroy(gameObject);

                AudioSource.PlayClipAtPoint(audioSource.clip, transform.position);
                gameManager.Health -= 1;
            }
        }

        // 6. Określanie, czy wroga należy odbić lustrzanie
        float startX = waypoints[currentWaypoint].transform.position.x;
        float endX = waypoints[currentWaypoint + 1].transform.position.x;

        shouldFlipSprite = startX > endX; // Jeśli drugi punkt jest mniejszy od pierwszego, to odbić lustrzanie

        // 7. Zmienianie skali w zależności od odbicia lustrzanego
        float scaleX = Mathf.Abs(gameObject.transform.localScale.x) * (shouldFlipSprite ? -1 : 1);
        gameObject.transform.localScale = new Vector3(scaleX, gameObject.transform.localScale.y, gameObject.transform.localScale.z);
    }

    public float DistanceToGoal()
    {
        float distance = 0;
        distance += Vector2.Distance(
            gameObject.transform.position,
            waypoints[currentWaypoint + 1].transform.position);
        for (int i = currentWaypoint + 1; i < waypoints.Length - 1; i++)
        {
            Vector3 startPosition = waypoints[i].transform.position;
            Vector3 endPosition = waypoints[i + 1].transform.position;
            distance += Vector2.Distance(startPosition, endPosition);
        }
        return distance;
    }

}