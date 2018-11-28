#pragma once

#include "../../Base/BaseManager.h"

class PlayerManager : public BaseManager{

public:
	PlayerManager();
	virtual ~PlayerManager() = default;
	void Create(const float x, const float y);

};

