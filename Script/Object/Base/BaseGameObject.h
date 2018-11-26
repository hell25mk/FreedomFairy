#pragma once

#include "../../Base/BaseObject.h"
#include "../../System/Vector2D.h"

enum ObjectTags{
	eTag_Player,
	eTag_Enemy,
};

class BaseGameObject : public BaseObject{

public:
	BaseGameObject() = default;
	BaseGameObject(float x, float y);
	virtual ~BaseGameObject() = default;
	virtual bool Update() = 0;
	virtual void Draw() const = 0;

	Vector2D<float>& GetVector();
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

