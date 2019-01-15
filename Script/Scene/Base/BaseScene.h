#pragma once

#include "../../Base/BaseObject.h"
#include "../SceneList.h"

class SceneManager;
class Parameter;

class BaseScene : public BaseObject{

public:
	BaseScene() = default;
	BaseScene(SceneManager* scene, const Parameter& param);
	virtual ~BaseScene() = default;
	virtual bool Update() = 0;
	virtual void Draw() const = 0;

protected:
	virtual void SceneChange() = 0;

protected:
	SceneManager* sceneManager;

};

