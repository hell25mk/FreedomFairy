#include "StationeryCollider.h"
#include "DxLib.h"

CircleCollider::CircleCollider(){
}

CircleCollider::CircleCollider(Vector2D<float> &vec, int rad, int tag):BaseCollider(vec,rad,tag){
}

CircleCollider::~CircleCollider(){
}

bool CircleCollider::Update(){



	return true;
}

void CircleCollider::Draw(){

	DrawCircle(vec2.GetDx(), vec2.GetDy(), radius, color, true);

}