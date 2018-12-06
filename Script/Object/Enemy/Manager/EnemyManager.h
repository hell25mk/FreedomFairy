#pragma once

#include "../../Base/BaseManager.h"

class EnemyManager : public BaseManager{

public:
	EnemyManager();
	virtual ~EnemyManager() = default;
	virtual bool Update() override;
	void Create();

};

