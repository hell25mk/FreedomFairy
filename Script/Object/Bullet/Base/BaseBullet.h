#pragma once

#include "../../../Base/BaseGameObject.h"
#include "../Move/BulletMove.h"

class BaseBullet : public BaseGameObject{

public:
	BaseBullet(float x,float y);
	BaseBullet(Vector2D<float> vec);
	BaseBullet(Vector2D<float> vec, const float ang);
	virtual ~BaseBullet() = default;
	virtual void Init() override;
	virtual bool Update() override;
	void Move();

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
	float moveAngle;
	int counter;
	int movePatternID;

};

