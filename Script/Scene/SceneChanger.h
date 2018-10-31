#pragma once

#include "SceneList.h"

class SceneChanger{

public:
	SceneChanger() = default;
	virtual ~SceneChanger() = default;
	virtual void SceneChange(const eSceneType scene, const Parameter& parameter, const bool stackClear);

};