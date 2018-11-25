#pragma once

#include "../../Base/BaseObject.h"
#include <memory>
#include <list>

class BaseGameObject;

class BaseManager : public BaseObject{

public:
	BaseManager() = default;
	virtual ~BaseManager() = default;
	virtual bool Update() override;
	virtual void Draw() const override;
	virtual void Create() = 0;

protected:
	std::list < std::shared_ptr<BaseGameObject>> listObject;

};

