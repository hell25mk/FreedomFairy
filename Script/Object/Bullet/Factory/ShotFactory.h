#pragma once

#include "../../../DesignPattern/Singleton/Singleton.h"
#include <memory>

template<class Type>
class Vector2D;
class BulletManager;

class ShotFactory final : public Singleton<ShotFactory>{

public:
	friend class Singleton<ShotFactory>;
	void Init(BulletManager* bulletManager);
	void PlayerBulletCreate(Vector2D<float>& vec);

protected:
	ShotFactory() = default;
	virtual ~ShotFactory() = default;

private:
	BulletManager* bulletManager;

};

