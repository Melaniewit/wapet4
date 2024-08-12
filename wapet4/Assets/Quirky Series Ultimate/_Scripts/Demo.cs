using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine.InputSystem;

public class Demo : MonoBehaviour
{
    private GameObject[] animals;  // Array to handle animals; will use this to store the controlled object
    private int animalIndex;
    private List<string> animationList = new List<string>
                                        {
                                            "Idle_A", "Walk", "Bounce", "Clicked",
                                            "Eat", "Fly", "Jump", "Run",
                                            "Sit", "Swim", "Spin"
                                        };
    private List<string> shapekeyList = new List<string>
                                        {
                                            "Eyes_Blink", "Eyes_Excited", "Eyes_Happy",
                                            "Eyes_Sad", "Eyes_Sleep", "Eyes_Annoyed",
                                            "Eyes_Cry"
                                        };

    // Dictionary to map original animation names to display names
    private Dictionary<string, string> animationNameMap = new Dictionary<string, string>
    {
        { "Idle_A", "Idle" },
        { "Walk", "Walk" },
        { "Bounce", "Bounce" },
        { "Clicked", "Clicked" },
        { "Eat", "Eat" },
        { "Fly", "Fly" },
        { "Jump", "Jump" },
        { "Run", "Run" },
        { "Sit", "Sit" },
        { "Swim", "Swim" },
        { "Spin", "Spin" }
    };

    // Dictionary to map original shapekey names to display names
    private Dictionary<string, string> shapekeyNameMap = new Dictionary<string, string>
    {
        { "Eyes_Blink", "Blink" },
        { "Eyes_Excited", "Excited" },
        { "Eyes_Happy", "Happy" },
        { "Eyes_Sad", "Sad" },
        { "Eyes_Sleep", "Sleep" },
        { "Eyes_Annoyed", "Annoyed" },
        { "Eyes_Cry", "Cry" }
    };

    // Dictionary to store animation speed multipliers
    private Dictionary<string, float> animationSpeedMap = new Dictionary<string, float>
    {
        { "Idle_A", 0.8f },
        { "Walk", 1.0f },
        { "Bounce", 0.7f },
        { "Clicked", 0.8f },
        { "Eat", 0.8f },
        { "Fly", 1.0f },
        { "Jump", 0.8f },
        { "Run", 1.0f },
        { "Sit", 0.9f },
        { "Swim", 1.0f },
        { "Spin", 0.3f }
    };

    // Dictionary to store available animations for each animal
    private Dictionary<string, List<string>> animalAnimationMap = new Dictionary<string, List<string>>
    {
        { "Cat", new List<string> { "Idle_A","Walk", "Run", "Sit", "Jump", "Eat",  "Swim","Spin" } },
        { "Dog", new List<string> { "Idle_A", "Walk", "Run", "Sit", "Jump", "Eat" ,  "Swim","Spin"} },
        { "Dove", new List<string> { "Idle_A", "Bounce", "Clicked", "Fly", "Eat" , "Spin"} },
        { "Goldfish", new List<string> { "Idle_A", "Bounce", "Clicked", "Swim","Eat", "Spin" } },
        { "Mouse", new List<string> { "Idle_A", "Walk", "Run", "Jump", "Eat",  "Swim","Spin" } },
        { "Parrot", new List<string> { "Idle_A", "Bounce", "Clicked", "Fly", "Eat", "Spin" } },
        { "Pigeon", new List<string> { "Idle_A", "Bounce", "Clicked", "Fly", "Eat", "Spin" } },
        { "Rabbit", new List<string> { "Idle_A", "Walk", "Run", "Jump", "Eat", "Spin" } },
        { "Tortoise", new List<string> { "Idle_A", "Walk", "Run", "Sit", "Eat", "Swim", "Spin" } }
    };

    [Space(10)]
    Dropdown dropdownAnimal;
    Dropdown dropdownAnimation;
    Dropdown dropdownShapekey;

    private Keyboard keyboard; // For input checking

    // Method to set the controlled object from the PlaceObject script
    public void SetControlledObject(GameObject animal)
    {
        if (animals == null)
            animals = new GameObject[1];  // Initialize the array if null
        animals[0] = animal;  // Set the controlled object

        // Initialize UI and animations
        InitializeUI();
        ChangeAnimal();  // Ensure correct animal is set up
    }

    private void InitializeUI()
    {
        Transform canvas = GameObject.Find("Canvas").transform;

        dropdownAnimal = canvas.Find("Animal").Find("Dropdown").GetComponent<Dropdown>();
        dropdownAnimation = canvas.Find("Animation").Find("Dropdown").GetComponent<Dropdown>();
        dropdownShapekey = canvas.Find("Shapekey").Find("Dropdown").GetComponent<Dropdown>();

        // Initialize the dropdown options based on the instantiated animal
        List<string> animalList = new List<string> { animals[0].name };
        dropdownAnimal.ClearOptions();
        dropdownAnimal.AddOptions(animalList);

        // Use the mapped display names for shape keys
        List<string> displayShapekeyList = new List<string>();
        foreach (string shapekey in shapekeyList)
        {
            string displayName = shapekeyNameMap.ContainsKey(shapekey) ? shapekeyNameMap[shapekey] : shapekey;
            displayShapekeyList.Add(displayName);
        }
        dropdownShapekey.ClearOptions();
        dropdownShapekey.AddOptions(displayShapekeyList);

        dropdownShapekey.value = 1;
        ChangeShapekey();
    }

    void Update()
    {
        if (keyboard == null)
            return;

        if (keyboard.upArrowKey.wasPressedThisFrame) { PrevAnimal(); }
        else if (keyboard.downArrowKey.wasPressedThisFrame) { NextAnimal(); }
        else if (keyboard.rightArrowKey.wasPressedThisFrame && keyboard.ctrlKey.isPressed) { NextShapekey(); }
        else if (keyboard.leftArrowKey.wasPressedThisFrame && keyboard.ctrlKey.isPressed) { PrevShapekey(); }
        else if (keyboard.rightArrowKey.wasPressedThisFrame) { NextAnimation(); }
        else if (keyboard.leftArrowKey.wasPressedThisFrame) { PrevAnimation(); }
    }

    public void NextAnimal()
    {
        // Since we're only working with one instantiated animal, we can simplify this
        dropdownAnimal.value = 0;
        ChangeAnimal();
    }

    public void PrevAnimal()
    {
        // Since we're only working with one instantiated animal, we can simplify this
        dropdownAnimal.value = 0;
        ChangeAnimal();
    }

    public void ChangeAnimal()
    {
        // Since we're only working with one animal, this method is simplified
        UpdateAnimationDropdown();
        ChangeAnimation();
        ChangeShapekey();
    }

    void UpdateAnimationDropdown()
    {
        string animalName = animals[0].name;
        if (animalAnimationMap.ContainsKey(animalName))
        {
            List<string> animations = animalAnimationMap[animalName];
            List<string> displayAnimations = new List<string>();
            foreach (string anim in animations)
            {
                string displayName = animationNameMap.ContainsKey(anim) ? animationNameMap[anim] : anim;
                displayAnimations.Add(displayName);
            }
            dropdownAnimation.ClearOptions();
            dropdownAnimation.AddOptions(displayAnimations);
        }
    }

    public void NextAnimation()
    {
        if (dropdownAnimation.value >= dropdownAnimation.options.Count - 1)
            dropdownAnimation.value = 0;
        else
            dropdownAnimation.value++;

        ChangeAnimation();
    }

    public void PrevAnimation()
    {
        if (dropdownAnimation.value <= 0)
            dropdownAnimation.value = dropdownAnimation.options.Count - 1;
        else
            dropdownAnimation.value--;

        ChangeAnimation();
    }

    public void ChangeAnimation()
    {
        Animator animator = animals[0].GetComponent<Animator>();
        if (animator != null)
        {
            string animName = animalAnimationMap[animals[0].name][dropdownAnimation.value];

            // Set the animation speed
            if (animationSpeedMap.ContainsKey(animName))
            {
                animator.speed = animationSpeedMap[animName];
            }
            else
            {
                animator.speed = 1.0f; // Default speed
            }

            animator.Play(animName); // Play using original name
        }
    }

    public void NextShapekey()
    {
        if (dropdownShapekey.value >= dropdownShapekey.options.Count - 1)
            dropdownShapekey.value = 0;
        else
            dropdownShapekey.value++;

        ChangeShapekey();
    }

    public void PrevShapekey()
    {
        if (dropdownShapekey.value <= 0)
            dropdownShapekey.value = dropdownShapekey.options.Count - 1;
        else
            dropdownShapekey.value--;

        ChangeShapekey();
    }

    public void ChangeShapekey()
    {
        Animator animator = animals[0].GetComponent<Animator>();
        if (animator != null)
        {
            string shapeKeyName = shapekeyList[dropdownShapekey.value];

            animator.Play(shapeKeyName); // Play using original name
        }
    }

    public void GoToWebsite(string URL)
    {
        Application.OpenURL(URL);
    }
}
