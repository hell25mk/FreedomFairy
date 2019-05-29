#include "ColliderFactory.h"
#include "../Manager/ColliderManager.h"
#include "../Inheritance/StationeryCollider.h"

void ColliderFactory::Init(ColliderManager* colliderManager){

	this->colliderManager = colliderManager;

}

/// <summary>
/// @brief �~�`�̓����蔻���ǉ�����
/// </summary>
/// <param name="vec">���W</param>
/// <param name="rad">���a</param>
/// <param name="tag">�^�O</param>
/// <param name="isDraw">����ʒu��`�悷�邩</param>
/// <returns>������������</returns>
std::shared_ptr<CircleCollider> ColliderFactory::CreateCircleCollider(Vector2D<float>* const vec, const int rad, const int tag, const bool isDraw){

	std::shared_ptr<CircleCollider> collider = std::make_shared<CircleCollider>();

	collider->SetVector(vec);
	collider->SetRadius(rad);
	collider->SetObjectTag(tag);
	collider->SetIsDraw(isDraw);

	colliderManager->AppendCollider(collider);

	return collider;
}