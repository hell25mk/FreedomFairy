#pragma once

#include "../../DesignPattern/Singleton/Singleton.h"

template<class Type>
class Vector2D;

class BulletCreater : public Singleton<BulletCreater>{

public:
	friend class Singleton<BulletCreater>;
	virtual void Create() override;
	virtual void Destroy() override;
	bool Update();
	void BulletCreate(Vector2D<float> vec, int rad, float moveVector, int tag);

protected:
	BulletCreater(){ }
	virtual ~BulletCreater(){ }

};

