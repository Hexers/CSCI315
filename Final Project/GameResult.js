#pragma strict
import UnityEngine.UI;
import UnityEngine.SceneManagement;

private var highScore: int;
public var resultTime: Text;
public var bestTime: Text;
public var parts: GameObject;

function Start() {
	if (PlayerPrefs.HasKey("HighScore")) {
		highScore = PlayerPrefs.GetInt("HighScore");
	}
	else {
		highScore = 999;
	}
}

function Update() {
	if (GoalArea.goal) {
		parts.SetActive(true);
		var result = Mathf.FloorToInt(Timer.time);
		resultTime.text = "Result Time: " + result;
		bestTime.text = "Best Time: " + highScore;
		if (highScore > result) {
			PlayerPrefs.SetInt("HighScore: ", result);
		}
	}
}

function OnRestart() {

	//Application.LoadLevel("main");
	SceneManager.LoadScene("main");
	//SceneManager.LoadScene(SceneManager.GetActiveScene().main);
}
