using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlaceTower : MonoBehaviour
{
    public GameObject[] towers;
    private GameObject currentTower;
    public GameObject towerPanel;
    public GameObject upgradePanel;
    public Image upgradeImg;
    public Text upgradeCost;
    private Vector3 initialClickPosition;
    private GameObject tower;
    private GameObject towerPlace;
    private GameManagerBehavior gameManager;
    private Vector3 currentPos;

    private void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManagerBehavior>();
    }

    public void SelectTower(int index)
    {
        if (index >= 0 && index < towers.Length)
        {
            currentTower = towers[index];
        }

        // 3. Sprawdzenie, czy można postawić daną wieżę
        if (CanPlaceTower())
        {
            tower = (GameObject)Instantiate(currentTower, currentPos, Quaternion.identity); // 4. Postawienie wieży
            Destroy(towerPlace); // 5. Usunięcie miejsca, gdzie była postawiana wieża

            AudioSource audioSource = gameObject.GetComponent<AudioSource>();
            audioSource.PlayOneShot(audioSource.clip); // 6. Odtworzenie dźwięku

            gameManager.Gold -= tower.GetComponent<TowerData>().CurrentLevel.cost; // 7. Odejmowanie złota za postawienie wieży
            towerPanel.SetActive(false); // 8. Ukrycie panelu wyboru wieży
        }
        Time.timeScale = 1f; // 9. Wznowienie czasu w grze
    }

    public void UpgradeTower()
    {
        tower.GetComponent<TowerData>().increaseLevel();
        AudioSource audioSource = gameObject.GetComponent<AudioSource>();
        audioSource.PlayOneShot(audioSource.clip);

        gameManager.Gold -= tower.GetComponent<TowerData>().CurrentLevel.cost;
        Time.timeScale = 1f;
    }

    private void Update()
    {
        if (Input.GetMouseButtonUp(0))
        {
            RaycastHit2D hit = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);
            initialClickPosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            initialClickPosition.z = 1;

            if (hit.collider != null && hit.collider.CompareTag("towerPlace"))
            {
                towerPlace = hit.collider.gameObject;
                OpenTowerPanel(initialClickPosition);
            }
            if (hit.collider == null)
            {
                towerPanel.SetActive(false);
                upgradePanel.SetActive(false);
                Time.timeScale = 1f;
            }
            if (hit.collider != null && hit.collider.CompareTag("tower"))
            {
                tower = hit.collider.gameObject;
                if (CanUpgradeTower())
                    OpenUpgradePanel(hit.transform.position);
                /*if (CanUpgradeTower())
                {
                    tower.GetComponent<TowerData>().increaseLevel();
                    AudioSource audioSource = gameObject.GetComponent<AudioSource>();
                    audioSource.PlayOneShot(audioSource.clip);

                    gameManager.Gold -= tower.GetComponent<TowerData>().CurrentLevel.cost;
                }*/
            }
        }
    }

    private bool CanPlaceTower()
    {
        int cost = currentTower.GetComponent<TowerData>().levels[0].cost;
        return gameManager.Gold >= cost;
    }

    private bool CanUpgradeTower()
    {
        if (tower != null)
        {
            TowerData towerData = tower.GetComponent<TowerData>();
            TowerLevel nextLevel = towerData.getNextLevel();
            if (nextLevel != null)
            {
                return gameManager.Gold >= nextLevel.cost;
            }
        }
        return false;
    }

    private void OpenTowerPanel(Vector3 position)
    {
        Time.timeScale = 0f;
        towerPanel.SetActive(true);
        towerPanel.transform.position = new Vector2(position.x, position.y + 2f);
        currentPos = initialClickPosition;
    }

    private void OpenUpgradePanel(Vector3 position)
    {
        Time.timeScale = 0f;
        upgradePanel.SetActive(true);
        upgradePanel.transform.position = new Vector2(position.x, position.y + 2f);
        TowerData towerData = tower.GetComponent<TowerData>();
        TowerLevel nextLevel = towerData.getNextLevel();
        Sprite towerSprite = towerData.CurrentLevel.upgradeImage;
        upgradeImg.sprite = towerSprite;
        upgradeCost.text = nextLevel.cost + "";
    }
}
