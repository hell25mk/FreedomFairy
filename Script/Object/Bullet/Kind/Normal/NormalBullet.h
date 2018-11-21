#pragma once

#include "../../Base/BaseBullet.h"

class NormalBullet : public BaseBullet{

public:
	NormalBullet(float x, float y);
	virtual ~NormalBullet() = default;
	virtual void Draw() const override;

protected:
	virtual void SetSize() override;

};

