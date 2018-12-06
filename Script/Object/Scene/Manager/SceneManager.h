#pragma once

#include "../../Base/BaseManager.h"
#include <stack>
#include <memory>
#include "../SceneList.h"

class BaseScene;
class Parameter;

class SceneManager : public BaseManager{

public:
	SceneManager();
	virtual ~SceneManager();
	virtual void Init() override;
	virtual bool Update() override;
	virtual void Draw() const override;
	void SceneChange(const eSceneType scene, const Parameter& parameter, const bool stackClear);

private:
	std::stack<std::shared_ptr<BaseScene>> stackScene;

};

