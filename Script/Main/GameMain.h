#pragma once

#include "../FPS/FPS.h"
#include <memory>

class SceneManager;

class GameMain{

public:
	GameMain();
	~GameMain() = default;
	bool GameLoop();

private:
	std::shared_ptr<SceneManager> sceneManager;
	FPS fps;

};

