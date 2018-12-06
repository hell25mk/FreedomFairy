#pragma once

#include "../Singleton/Singleton.h"
#include <memory>

class BaseScene;
class BaseGameObject;

class AbstractObjectFactory : public Singleton<AbstractObjectFactory>{

public:
	virtual std::shared_ptr<BaseGameObject> CreateGameObject() = 0;
	 
};