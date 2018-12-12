#pragma once

#include "../DesignPattern/Singleton/Singleton.h"
#include <array>
#include <vector>

namespace{
	enum class eObjectType : int{
		Player,
		Enemy,
		Bullet,

		ObjectNum,
	};
}

class Debug : public Singleton<Debug>{

public:
	friend class Singleton<Debug>;
	virtual void Create() override{ }
	virtual void Destroy() override{ }
	void Draw();
	void SetObjectNum(const int key, const int num);

private:
	std::array<int, static_cast<int>(eObjectType::ObjectNum)> objectNum = {};

};

