#pragma once

#include "../../../Base/BaseManager.h"

enum eBulletType{
	Normal,

	Type_Num,
};

template<class Type>
class Vector2D;
class BaseBullet;

class BulletManager : public BaseManager{

public:
	BulletManager() = default;
	virtual ~BulletManager() = default;
	virtual void Init() override;
	virtual bool Update() override;
	virtual void Draw() const override;
	void Create(std::shared_ptr<BaseBullet> bullet);
	void PlayerShotCreate(std::shared_ptr<BaseBullet> bullet);

private:
	std::list<std::shared_ptr<BaseGameObject>> listPlayerBullet;

};