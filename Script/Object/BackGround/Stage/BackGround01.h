#pragma once

#include "../Base/BaseBackGround.h"

class BackGround01 final : public BaseBackGround{

public:
	BackGround01();
	virtual ~BackGround01() = default;
	virtual bool Update() override;
	virtual void Draw() const override;

};

