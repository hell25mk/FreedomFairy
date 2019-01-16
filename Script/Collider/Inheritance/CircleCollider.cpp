#include "StationeryCollider.h"
#include "DxLib.h"

CircleCollider::CircleCollider(){
}

bool CircleCollider::Update(){

	return true;
}

void CircleCollider::Draw() const{

	DrawCircle(vec2->GetDx(), vec2->GetDy(), radius, color, true);

}