#pragma once

#include "../../DesignPattern/Factory/AbstractFactory.h"
#include "../../DesignPattern/Singleton/Singleton.h"
#include "../SceneList.h"

class SceneManager;
class BaseScene;
class Parameter;

class SceneFactory : public Singleton<SceneFactory>{

public:
	friend class Singleton<SceneFactory>;
	std::shared_ptr<BaseScene> Create(SceneManager* scene, eSceneType type, const Parameter& param);

protected:
	SceneFactory() = default;
	virtual ~SceneFactory() = default;

};