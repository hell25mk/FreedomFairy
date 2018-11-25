#pragma once

#include "../Base/BaseObject.h"
#include "SceneList.h"

class Parameter;

class SceneChanger : public BaseObject{

public:
	SceneChanger() = default;
	virtual ~SceneChanger() = default;
	virtual bool Update() = 0;
	virtual void Draw() const = 0;
	virtual void SceneChange(const eSceneType scene, const Parameter& parameter, const bool isStackClear) = 0;

};