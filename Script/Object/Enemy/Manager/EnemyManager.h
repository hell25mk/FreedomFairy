#pragma once

#include "../../Base/BaseManager.h"
#include <memory>
#include <list>

class EnemyManager : public BaseManager{

public:
	EnemyManager();
	virtual ~EnemyManager() = default;
	virtual void Create() override;

};

