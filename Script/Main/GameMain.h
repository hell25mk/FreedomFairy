#pragma once

class SceneManager;

class GameMain{

public:
	GameMain();
	~GameMain();
	bool Update();
	void Draw();

private:
	SceneManager* sceneManager;

};

