#pragma once

#include "../FPS/FPS.h"
#include <memory>

class SceneManager;

class GameMain final{

public:
	GameMain();
	~GameMain() = default;
	bool GameLoop();

private:
	std::shared_ptr<SceneManager> sceneManager;
	FPS fps;

};

