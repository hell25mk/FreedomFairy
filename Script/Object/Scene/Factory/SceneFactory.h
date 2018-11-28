#pragma once

#include <memory>
#include "../SceneList.h"

class SceneManager;
class BaseScene;
class Parameter;

class SceneFactory{

public:
	std::shared_ptr<BaseScene> Create(SceneManager* scene, eSceneType type, const Parameter& param);

};

