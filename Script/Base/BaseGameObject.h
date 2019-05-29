#pragma once

#include "BaseObject.h"
#include "../System/Vector2D.h"

//オブジェクトがどのタイプかを表すタグ
enum ObjectTags{
	eTag_Player,
	eTag_Enemy,
};

class BaseGameObject : public BaseObject{

public:
	BaseGameObject();
	BaseGameObject(float x, float y);
	BaseGameObject(Vector2D<float>& vec);
	virtual ~BaseGameObject() = default;
	//更新処理
	virtual bool Update() = 0;
	//描画処理
	virtual void Draw() const = 0;
	//座標を取得する
	Vector2D<float>& GetVector();
	//生きているかのフラグをセットする
	void SetAlive(bool alive);

protected:
	Vector2D<float> vec2;
	float moveSpeed;
	bool isAlive;

	int width;
	int height;

	int imageHandle;
	int* imageDivHandle;

};

