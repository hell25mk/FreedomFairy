#pragma once

#include "../../Base/BaseManager.h"

enum eBulletType{
	Normal,

	Type_Num,
};

class BulletManager : public BaseManager{

public:
	BulletManager() = default;
	virtual ~BulletManager() = default;
	virtual void Init() override;
	virtual bool Update() override;
	void Create();

};