#pragma once

#include <vector>
#include <memory>

class BaseEnemy;

class EnemyMove{

public:
	EnemyMove();
	virtual ~EnemyMove() = default;
	void Move(BaseEnemy* enemy);

private:
	typedef void(EnemyMove::*Func)(BaseEnemy* enemy);
	void SetFunction();

	void MovePattern00(BaseEnemy* enemy);
	void MovePattern01(BaseEnemy* enemy);
	void MovePattern02(BaseEnemy* enemy);

private:
	std::vector<Func> movePattern;

};
