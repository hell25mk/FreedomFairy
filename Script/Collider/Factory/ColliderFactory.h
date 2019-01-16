#pragma once

#include "../../DesignPattern/Singleton/Singleton.h"
#include <memory>

class ColliderManager;
class CircleCollider;
template<class Type>
class Vector2D;

namespace{
	enum ObjectType{
		eType_Player,
		eType_Enemy,
	};
}

class ColliderFactory final : public Singleton<ColliderFactory>{

public:
	friend class Singleton<ColliderFactory>;
	void Init(ColliderManager* colliderManager);
	std::shared_ptr<CircleCollider> CreateCircleCollider(Vector2D<float>* const vec, const int rad, const int tag, const bool isDraw);

protected:
	ColliderFactory(){ }
	virtual ~ColliderFactory(){ }

private:
	ColliderManager* colliderManager;

};

