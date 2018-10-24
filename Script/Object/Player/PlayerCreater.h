#pragma once

#include "../../DesignPattern/Singleton/Singleton.h"

class PlayerCreater : public Singleton<PlayerCreater>{

public:
	friend class Singleton<PlayerCreater>;
	virtual void Create() override;
	virtual void Destroy() override;
	void PlayerCreate();

protected:
	PlayerCreater(){ }
	virtual ~PlayerCreater(){ }

};

