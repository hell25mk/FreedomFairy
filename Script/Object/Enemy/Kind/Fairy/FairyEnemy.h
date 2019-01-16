#pragma once

#include "../../Base/BaseEnemy.h"
#include <memory>

class BaseCollider;

class FairyEnemy : public BaseEnemy{

public:
	FairyEnemy(float x, float y);
	virtual ~FairyEnemy() = default;
	virtual void Init() override{ }
	virtual void Destroy() override;
	virtual bool Update() override;
	virtual void Draw() const override;

protected:
	virtual void SetSize() override;

private:
	std::shared_ptr<BaseCollider> collider;

};