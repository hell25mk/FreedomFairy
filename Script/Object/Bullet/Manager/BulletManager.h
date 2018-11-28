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
	virtual bool Update() override;
	void Create();

};