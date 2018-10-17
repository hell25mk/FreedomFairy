#pragma once

#include "../../DesignPattern/Singleton/Singleton.h"

class Enemy;

class EnemyCreater : public Singleton<EnemyCreater>{

public:
	friend class Singleton<EnemyCreater>;
	virtual void Create() override;
	virtual void Destroy() override;
	bool Update();
	void EnemyCreate();

protected:
	EnemyCreater(){ }
	virtual ~EnemyCreater(){ }

private:
	int count;

};

