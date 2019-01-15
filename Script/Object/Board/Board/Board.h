#pragma once

#include "../../../Base/BaseGameObject.h"

class Board : public BaseGameObject{

public:
	Board();
	virtual ~Board() = default;
	virtual bool Update() override;
	virtual void Draw() const override;
	void GameFrame() const;

private:
	int bgbImageHandle;

};

