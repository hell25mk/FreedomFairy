#pragma once

#include "../../Base/BaseObject.h"
#include <memory>
#include <list>

class BaseBullet;

class BulletManager : public BaseObject{

public:
	BulletManager();
	virtual ~BulletManager() = default;
	virtual bool Update() override;
	virtual void Draw() const override;

private:
	std::list<std::shared_ptr<BaseBullet>> listBullet;

};