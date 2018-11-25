#pragma once

#include "../../Base/BaseObject.h"
#include "../SceneChanger.h"

class SceneChanger;
class Parameter;

class BaseScene : public BaseObject{

public:
	BaseScene(SceneChanger* scene, const Parameter& parameter);
	virtual ~BaseScene() = default;
	virtual bool Update() = 0;
	virtual void Draw() const  = 0;

protected:
	virtual void SceneChange() = 0;

protected:
	SceneChanger* sceneChanger;

};

