#pragma once

#include "../../Base/BaseObject.h"
#include <memory>
#include <list>

class BaseEnemy;

class EnemyManager : public BaseObject{

public:
	EnemyManager();
	virtual ~EnemyManager() = default;
	virtual bool Update() override;
	virtual void Draw() const override;

private:
	std::list<std::shared_ptr<BaseEnemy>> listEnemy;

};

