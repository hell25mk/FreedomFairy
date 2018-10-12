#pragma once

#include <stack>

class BaseScene;

class SceneManager{

public:
	SceneManager();
	~SceneManager();
	void Update();
	void Draw();

private:
	SceneManager(const SceneManager &sMgr);

private:
	std::stack<BaseScene*> stackScene;

};

