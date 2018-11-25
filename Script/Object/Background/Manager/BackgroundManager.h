#pragma once

#include "../../Base/BaseObject.h"
#include <memory>
#include <list>

class  BaseBackground;

class BackgroundManager : public BaseObject{

public:
	BackgroundManager();
	virtual ~BackgroundManager() = default;
	virtual bool Update() override;
	virtual void Draw() const override;

private:
	std::list<std::shared_ptr<BaseBackground>>  listBackground;

};

