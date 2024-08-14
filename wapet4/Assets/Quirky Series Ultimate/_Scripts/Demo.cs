using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine.InputSystem;  // Add this to use the new Input System


public class Demo : MonoBehaviour
{
    public GameObject currentModel; // 新增：用于引用当前模型

    public void UpdateModelReference(GameObject newModel)
    {
        currentModel = newModel;
        Debug.Log("Current model updated to: " + currentModel.name);
    }

    private GameObject[] animals;
    private int animalIndex;
    private List<string> animationList = new List<string>
                                            {   "Idle_A",
                                                "Walk",
                                                "Bounce",
                                                "Clicked",
                                                "Eat",
                                                "Fly",
                                                "Jump",
                                                "Run",
                                                "Sit",
                                                "Swim",
                                                "Spin"
                                            };
    private List<string> shapekeyList = new List<string>
                                            {   "Eyes_Blink",
                                                "Eyes_Excited",
                                                "Eyes_Happy",
                                                "Eyes_Sad",
                                                "Eyes_Sleep",
                                                "Eyes_Annoyed",
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
    private Dictionary<string, List<string>> animalAnimationMap = new Dictionary<string, List<string>> //changed!!
    { //changed!!
        { "Cat", new List<string> { "Idle_A","Walk", "Run", "Sit", "Jump", "Eat",  "Swim","Spin" } }, //changed!!
        { "Dog", new List<string> { "Idle_A", "Walk", "Run", "Sit", "Jump", "Eat" ,  "Swim","Spin"} }, //changed!!
        { "Dove", new List<string> { "Idle_A", "Bounce", "Clicked", "Fly", "Eat" , "Spin"} }, //changed!!
        { "Goldfish", new List<string> { "Idle_A", "Bounce", "Clicked", "Swim","Eat", "Spin" } }, //changed!!
        { "Mouse", new List<string> { "Idle_A", "Walk", "Run", "Jump", "Eat",  "Swim","Spin" } }, //changed!!
        { "Parrot", new List<string> { "Idle_A", "Bounce", "Clicked", "Fly", "Eat", "Spin" } }, //changed!!
        { "Pigeon", new List<string> { "Idle_A", "Bounce", "Clicked", "Fly", "Eat", "Spin" } }, //changed!!
        { "Rabbit", new List<string> { "Idle_A", "Walk", "Run", "Jump", "Eat", "Spin" } }, //changed!!
        { "Tortoise", new List<string> { "Idle_A", "Walk", "Run", "Sit", "Eat", "Swim", "Spin" } } //changed!!
    }; //changed!!

    [Space(10)]
    Transform animal_parent;
    Dropdown dropdownAnimal;
    Dropdown dropdownAnimation;
    Dropdown dropdownShapekey;

    private Keyboard keyboard; // For input checking
    void Start()
    {

        Transform canvas = GameObject.Find("Canvas").transform;
        dropdownAnimal = canvas.Find("Animal").Find("Dropdown").GetComponent<Dropdown>();
        dropdownAnimation = canvas.Find("Animation").Find("Dropdown").GetComponent<Dropdown>();
        dropdownShapekey = canvas.Find("Shapekey").Find("Dropdown").GetComponent<Dropdown>();

        int count = animal_parent.childCount;
        animals = new GameObject[count];
        List<string> animalList = new List<string>();


        for (int i = 0; i < count; i++)
        {
            animals[i] = animal_parent.GetChild(i).gameObject;
            string n = animal_parent.GetChild(i).name;
            animalList.Add(n);
            if (i == 0) animals[i].SetActive(true);
            else animals[i].SetActive(false);
        }

        dropdownAnimal.AddOptions(animalList);

        // Initialize with the first animal's animations
        ChangeAnimal();

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
        keyboard = Keyboard.current; // Initialize keyboard
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
        Debug.Log("Attempting to switch animal. Current model: " + (currentModel != null ? currentModel.name : "None"));

        animalIndex = (animalIndex + 1) % animals.Length;
        UpdateCurrentModel(animalIndex);
        Debug.Log("NextAnimal: Switched to animal index: " + animalIndex);
    }

    public void PrevAnimal()
    {
        Debug.Log("Attempting to switch animal. Current model: " + (currentModel != null ? currentModel.name : "None"));

        animalIndex = (animalIndex - 1 + animals.Length) % animals.Length;
        UpdateCurrentModel(animalIndex);
        Debug.Log("PrevAnimal: Switched to animal index: " + animalIndex);
    }

    private void UpdateCurrentModel(int index)
    {
        if (currentModel != null)
        {
            Destroy(currentModel); // 销毁旧的模型实例
            Debug.Log("Destroyed previous model instance.");
        }

        // 通过索引实例化新模型
        currentModel = Instantiate(animals[index], animal_parent.position, Quaternion.identity);
        Debug.Log("Instantiated new model: " + currentModel.name);

        // 更新动画和形状键
        UpdateAnimationDropdown();
        ChangeAnimation();
        ChangeShapekey();
    }

    public void ChangeAnimal()
    {
        // 使用 dropdown 的值更新 currentModel
        UpdateCurrentModel(dropdownAnimal.value);
    }


    void UpdateAnimationDropdown()
    { //changed!!
        string animalName = animals[dropdownAnimal.value].name; //changed!!
        if (animalAnimationMap.ContainsKey(animalName))
        { //changed!!
            List<string> animations = animalAnimationMap[animalName]; //changed!!
            List<string> displayAnimations = new List<string>(); //changed!!
            foreach (string anim in animations)
            { //changed!!
                string displayName = animationNameMap.ContainsKey(anim) ? animationNameMap[anim] : anim; //changed!!
                displayAnimations.Add(displayName); //changed!!
            } //changed!!
            dropdownAnimation.ClearOptions(); //changed!!
            dropdownAnimation.AddOptions(displayAnimations); //changed!!
        } //changed!!
    } //changed!!

    public void NextAnimation()
    {
        Debug.Log("NextAnimation button clicked.");
        if (dropdownAnimation.value >= dropdownAnimation.options.Count - 1)
            dropdownAnimation.value = 0;
        else
            dropdownAnimation.value++;

        ChangeAnimation();
        Debug.Log("NextAnimation: Switched to animation index: " + dropdownAnimation.value);
    }

    public void PrevAnimation()
    {
        Debug.Log("PrevAnimation button clicked.");
        if (dropdownAnimation.value <= 0)
            dropdownAnimation.value = dropdownAnimation.options.Count - 1;
        else
            dropdownAnimation.value--;

        ChangeAnimation();
        Debug.Log("PrevAnimation: Switched to animation index: " + dropdownAnimation.value);
    }
    public void ChangeAnimation()
    {
        if (currentModel == null)
        {
            Debug.LogWarning("ChangeAnimation: currentModel is null.");
            return;
        }

        Animator animator = currentModel.GetComponent<Animator>();
        if (animator != null)
        {
            Debug.Log("Animator component found on current model: " + currentModel.name);
            string animName = animalAnimationMap[currentModel.name][dropdownAnimation.value];

            if (animationSpeedMap.ContainsKey(animName))
            {
                animator.speed = animationSpeedMap[animName];
            }
            else
            {
                animator.speed = 1.0f;
            }

            animator.Play(animName);
            Debug.Log("Playing animation: " + animName + " on model: " + currentModel.name);
        }
        else
        {
            Debug.LogWarning("ChangeAnimation: Animator component not found on currentModel.");
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
        if (currentModel == null)
        {
            Debug.LogWarning("ChangeShapekey: currentModel is null.");
            return;
        }

        Animator animator = currentModel.GetComponent<Animator>();
        if (animator != null)
        {
            string shapeKeyName = shapekeyList[dropdownShapekey.value];
            animator.Play(shapeKeyName);
            Debug.Log("Playing shapekey: " + shapeKeyName + " on model: " + currentModel.name);
        }
        else
        {
            Debug.LogWarning("ChangeShapekey: Animator component not found on currentModel.");
        }
    }


    public void GoToWebsite(string URL)
    {
        Application.OpenURL(URL);
    }
}
