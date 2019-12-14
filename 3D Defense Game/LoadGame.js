#pragma strict

public var sceneName: String;

function LoadGame() {
	gameOver.gameOver = false;
	Application.LoadLevel(sceneName);
	Score.score = 0;
}
