#include "StationeryObject.h"
#include "DxLib.h"

BoxObject::BoxObject(){
}

BoxObject::BoxObject(float x, float y, int rad, unsigned int color):BaseObject(x, y, rad, color){
}

BoxObject::~BoxObject(){
}

void BoxObject::Update(){



}

void BoxObject::Draw(){

	DrawBox(vec2.GetDx(), vec2.GetDy(), vec2.GetDx() + radius, vec2.GetDy() + radius, color, true);

}