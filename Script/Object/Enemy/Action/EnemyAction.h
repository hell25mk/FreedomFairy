#pragma once

#include <vector>
#include <memory>

class BaseEnemy;

class EnemyAction{

public:
	EnemyAction();
	virtual ~EnemyAction() = default;
	void Move(BaseEnemy* enemy);

private:
	typedef void(EnemyAction::*Func)(BaseEnemy* enemy);
	//using Func = void(EnemyAction::*EnemyAction::*)(BaseEnemy* enemy);
	void SetFunction();

	void MovePattern00(BaseEnemy* enemy);
	void MovePattern01(BaseEnemy* enemy);
	void MovePattern02(BaseEnemy* enemy);
	void MovePattern03(BaseEnemy* enemy);

private:
	std::vector<Func> movePattern;

};

