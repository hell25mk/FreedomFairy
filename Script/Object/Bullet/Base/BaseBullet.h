#pragma once

#include "../../Base/BaseObject.h"

class BaseBullet : public BaseObject{

public:
	BaseBullet();
	virtual ~BaseBullet() = default;
	virtual bool Update() override;
	virtual void Draw() const override;

};

