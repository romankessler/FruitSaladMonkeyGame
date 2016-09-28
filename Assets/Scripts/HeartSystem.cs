using System.Linq;

using UnityEngine;
using UnityEngine.UI;

public class HeartSystem : MonoBehaviour
{
    private int _healthPerHeart;

    public Image[] _heartImages;

    public Sprite[] _heartSprites;

    private int _maxHeartAmount;

    void Start()
    {
        _healthPerHeart = _heartSprites.Count() - 1;
    }

    public int GetMaxHealthPoints()
    {
        Start();
        return _maxHeartAmount * _healthPerHeart;
    }

    public void UpdateMaxHeartAmount(int maxHeartAmount)
    {
        // Setzt die maximalen Herzen (Herzcontainer)
        _maxHeartAmount = maxHeartAmount;

        for (var i = 0; i < _heartImages.Count(); i++)
        {
            var isEnabled = _maxHeartAmount > i;
            Debug.Log("Heart number " + i + " is visible = " + isEnabled);
            _heartImages[i].enabled = isEnabled;
        }
    }

    public void UpdateHearts(int healthPoints)
    {
        // Setzt die Lebenspunkte (wie die herzen ausgefüllt sind)
        var empty = false;
        var i = 0;

        foreach (var image in _heartImages)
        {
            if (empty)
            {
                image.sprite = _heartSprites[0];
            }
            else
            {
                i++;
                if (healthPoints >= i * _healthPerHeart)
                {
                    image.sprite = _heartSprites[_heartSprites.Length - 1];
                }
                else
                {
                    var currentHearthHealth = _healthPerHeart - (_healthPerHeart * i - healthPoints);
                    var healthPerImage = _healthPerHeart / (_heartSprites.Length - 1);
                    var imageIndex = currentHearthHealth / healthPerImage;

                    image.sprite = _heartSprites[imageIndex];
                    empty = true;
                }
            }
        }
    }
}