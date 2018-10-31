#pragma once

class HitPoint{

public:
	HitPoint();
	HitPoint(int value);
	~HitPoint();
	void Set(int value);
	int Get();
	void Add(int value);
	void Sub(int value);

private:
	int hp;

};

