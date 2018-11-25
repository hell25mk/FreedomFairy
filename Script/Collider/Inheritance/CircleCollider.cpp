#include "StationeryCollider.h"
#include "DxLib.h"

CircleCollider::CircleCollider(Vector2D<float> &vec, int rad, int tag):BaseCollider(vec,rad,tag){
}

bool CircleCollider::Update(){

	return true;
}

void CircleCollider::Draw() const{

	DrawCircle(vec2.GetDx(), vec2.GetDy(), radius, color, true);

}