#pragma once

#include "../Base/BaseObject.h"

class Board : public BaseObject{

public:
	Board();
	virtual ~Board() = default;
	virtual bool Update() override;
	virtual void Draw() const override;
	void GameFrame() const;

};

