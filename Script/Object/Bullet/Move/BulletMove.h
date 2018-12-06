#pragma once

#include <vector>
#include <memory>

class BaseBullet;

class BulletMove{

public:
	BulletMove();
	~BulletMove() = default;
	void Move(BaseBullet* bullet);

private:
	typedef void(BulletMove::*Func)(BaseBullet* bullet);
	void SetFunction();

	void MovePattern00(BaseBullet* bullet);
	void MovePattern01(BaseBullet* bullet);
	void MovePattern02(BaseBullet* bullet);

private:
	std::vector<Func> movePattern;

};

