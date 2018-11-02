#pragma once

#include "../SceneChanger.h"
#include <stack>
#include <memory>

class BaseScene;

class SceneManager final : public SceneChanger{

public:
	SceneManager();
	~SceneManager() = default;
	bool Update();
	void Draw() const;
	virtual void SceneChange(const eSceneType scene, const Parameter& parameter, const bool stackClear) override;

private:
	std::stack<std::shared_ptr<BaseScene>> stackScene;

};

