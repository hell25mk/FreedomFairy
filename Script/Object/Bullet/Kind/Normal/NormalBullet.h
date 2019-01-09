#pragma once

#include "../../Base/BaseBullet.h"

class NormalBullet : public BaseBullet{

public:
	NormalBullet(const float x, const float y, const float spd, const float ang);
	virtual ~NormalBullet() = default;
	virtual void Draw() const override;

protected:
	virtual void SetSize() override;

};

