#pragma once

#include "../../../DesignPattern/Singleton/Singleton.h"
#include <memory>

template<class Type>
class Vector2D;
class BulletManager;

class BulletFactory final : public Singleton<BulletFactory>{

public:
	friend class Singleton<BulletFactory>;
	void Init(BulletManager* bulletManager);
	void BulletCreate(Vector2D<float>& vec);

protected:
	BulletFactory() = default;
	virtual ~BulletFactory() = default;

private:
	BulletManager* bulletManager;

};

