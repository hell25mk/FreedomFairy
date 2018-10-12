#pragma once

#include "Vector2D.h"

class Rigidbody{

public:
	Rigidbody();
	Rigidbody(Vector2D<float> *vec);
	~Rigidbody();
	void Update();
	void Gravity();
	void SetJumpPower(float jumpPower);
	void Jump();

private:
	Vector2D<float> *vec2;
	bool isJump;
	float jumpPower;
	
};

