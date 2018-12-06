#pragma once

#include "../../Base/BaseObject.h"
#include <memory>

class BaseObject;

class Factory{

public:
	virtual std::shared_ptr<BaseObject> Create() = 0;

};