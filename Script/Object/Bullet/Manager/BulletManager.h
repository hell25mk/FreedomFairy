#pragma once

#include "../../Base/BaseManager.h"

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
	void Create(std::shared_ptr<BaseBullet> bullet);

};