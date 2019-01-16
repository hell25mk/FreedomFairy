#pragma once

#include "../../Base/BaseBullet.h"
#include <memory>

class BaseCollider;

class NormalBullet : public BaseBullet{

public:
	NormalBullet(const float x, const float y, const float spd, const float ang, const int tag);
	virtual ~NormalBullet() = default;
	virtual void Destroy() override;
	virtual void Draw() const override;

protected:
	virtual void SetSize() override;

private:
	std::shared_ptr<BaseCollider> collider;

};

