#include "BaseGameObject.h"

BaseGameObject::BaseGameObject()
	:moveSpeed(0), isAlive(true), width(0), height(0), imageHandle(0), imageDivHandle(nullptr){
}

BaseGameObject::BaseGameObject(float x, float y){

	vec2.Set(x, y);

}

BaseGameObject::BaseGameObject(Vector2D<float>& vec):vec2(vec){
}

/// <summary>
/// @brief 自身の座標を返す
/// </summary>
/// <returns>座標</returns>
Vector2D<float>& BaseGameObject::GetVector(){

	return vec2;
}

/// <summary>
/// @brief そのオブジェクトが生きているかのフラグをセットする
/// </summary>
/// <param name="alive">生きているか</param>
void BaseGameObject::SetAlive(bool alive){

	isAlive = alive;

}