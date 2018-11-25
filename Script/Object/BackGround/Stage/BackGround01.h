#pragma once

#include "../Base/BaseBackground.h"

class Background01 final : public BaseBackground{

public:
	Background01();
	virtual ~Background01() = default;
	virtual bool Update() override;
	virtual void Draw() const override;

};

