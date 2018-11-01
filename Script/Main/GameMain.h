#pragma once

class SceneManager;

class GameMain{

public:
	GameMain();
	~GameMain();
	bool GameLoop();

private:
	SceneManager* sceneManager;

};

