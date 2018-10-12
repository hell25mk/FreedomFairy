#pragma once

#include "../Singleton.h"

class Factory : public Singleton<Factory>{

public:
	friend class Singleton<Factory>;

protected:
	Factory(){ }
	virtual ~Factory(){ }

};