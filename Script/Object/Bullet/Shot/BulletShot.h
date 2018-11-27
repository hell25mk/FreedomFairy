#pragma once

class BulletManager;

class BulletShot{

public:
	BulletShot(BulletManager* bullet);
	~BulletShot();

private:
	BulletManager* bulletManager;

};

