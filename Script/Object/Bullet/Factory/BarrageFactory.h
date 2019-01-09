#pragma once

#include "../../../DesignPattern/Singleton/Singleton.h"
#include <memory>

template<class Type>
class Vector2D;
class BulletManager;

class BarrageFactory final : public Singleton<BarrageFactory>{

public:
	friend class Singleton<BarrageFactory>;
	void Init(BulletManager* bulletManager);
	void BarrageCreate(Vector2D<float>& vec);

protected:
	BarrageFactory() = default;
	virtual ~BarrageFactory() = default;

private:
	BulletManager* bulletManager;

};
