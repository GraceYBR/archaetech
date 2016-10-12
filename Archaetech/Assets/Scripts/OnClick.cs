using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class OnClick : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
    public void changeScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }

    // Update is called once per frame
    void Update () {
	
	}
}

