#pragma once

#include <list>

class Enemy;

class EnemyCreater{

public:
	EnemyCreater();
	~EnemyCreater();
	bool Update();
	void Create();

private:
	int count;
	std::list<Enemy*> listEnemy;

};

