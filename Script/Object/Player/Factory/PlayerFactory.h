#pragma once

#include <memory>

class BaseGameObject;

class PlayerFactory{

public:
	std::shared_ptr<BaseGameObject> Create(const float x, const float y);

};