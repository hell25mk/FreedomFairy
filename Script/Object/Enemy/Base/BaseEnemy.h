#pragma once

#include "../../Base/BaseGameObject.h"
#include "../Action/EnemyAction.h"

class BaseEnemy : public BaseGameObject{

public:
	BaseEnemy(float x, float y);
	virtual ~BaseEnemy() = default;
	void Init();
	virtual bool Update() override;

#pragma region Accessor
	float GetSpeed() const;
	void SetSpeed(const float spd);
	float GetAngle() const;
	void SetAngle(const float ang);
	int GetCount() const;
	int GetMovePatternID() const;
#pragma endregion

protected:
	virtual void SetSize() = 0;
	bool IsInside() const;

protected:
	EnemyAction enemyAction;
	float moveAngle;
	int counter;
	int movePatternID;

};

