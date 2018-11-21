#pragma once

#include "../../Base/BaseObject.h"
#include "../Move/BulletMove.h"

class BaseBullet : public BaseObject{

public:
	BaseBullet(float x,float y);
	virtual ~BaseBullet() = default;
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
	BulletMove bulletMove;
	float moveSpeed;
	float moveAngle;

	int counter;
	int width;
	int height;

	int* imageHandle;
	int movePatternID;

};

