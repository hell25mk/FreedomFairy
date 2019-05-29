#include "ColliderFactory.h"
#include "../Manager/ColliderManager.h"
#include "../Inheritance/StationeryCollider.h"

void ColliderFactory::Init(ColliderManager* colliderManager){

	this->colliderManager = colliderManager;

}

/// <summary>
/// @brief ‰~Œ`‚Ì“–‚½‚è”»’è‚ğ’Ç‰Á‚·‚é
/// </summary>
/// <param name="vec">À•W</param>
/// <param name="rad">”¼Œa</param>
/// <param name="tag">ƒ^ƒO</param>
/// <param name="isDraw">”»’èˆÊ’u‚ğ•`‰æ‚·‚é‚©</param>
/// <returns>¶¬‚µ‚½”»’è</returns>
std::shared_ptr<CircleCollider> ColliderFactory::CreateCircleCollider(Vector2D<float>* const vec, const int rad, const int tag, const bool isDraw){

	std::shared_ptr<CircleCollider> collider = std::make_shared<CircleCollider>();

	collider->SetVector(vec);
	collider->SetRadius(rad);
	collider->SetObjectTag(tag);
	collider->SetIsDraw(isDraw);

	colliderManager->AppendCollider(collider);

	return collider;
}