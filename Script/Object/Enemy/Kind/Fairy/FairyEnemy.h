#pragma once

#include "../../Base/BaseEnemy.h"

class FairyEnemy : public BaseEnemy{

public:
	FairyEnemy(float x, float y);
	virtual ~FairyEnemy() = default;
	virtual bool Update() override;
	virtual void Draw() const override;

protected:
	virtual void SetSize() override;

};