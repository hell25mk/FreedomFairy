#include "StationeryObject.h"
#include "DxLib.h"

CircleObject::CircleObject(){
}

CircleObject::CircleObject(float x, float y, int rad, unsigned int color):BaseObject(x, y, rad, color){
}

CircleObject::~CircleObject(){
}

bool CircleObject::Update(){


	return true;
}

void CircleObject::Draw(){

	DrawCircle(vec2.GetDx(), vec2.GetDy(), radius, color, true);

}