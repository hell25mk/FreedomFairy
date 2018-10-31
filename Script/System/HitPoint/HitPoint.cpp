#include "HitPoint.h"

HitPoint::HitPoint():hp(0){
}

HitPoint::HitPoint(int value){

	hp = value;

}

HitPoint::~HitPoint(){
}

void HitPoint::Set(int value){

	hp = value;

}

int HitPoint::Get(){

	return hp;
}

void HitPoint::Add(int value){

	hp += value;

}

void HitPoint::Sub(int value){

	hp -= value;

}