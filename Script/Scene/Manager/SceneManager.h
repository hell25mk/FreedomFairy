#pragma once

#include <stack>
#include <memory>

class BaseScene;

class SceneManager{

public:
	SceneManager();
	~SceneManager();
	bool Update();
	void Draw();

private:
	SceneManager(const SceneManager &sMgr);

private:
	std::stack<std::shared_ptr<BaseScene>> stackScene;

};

