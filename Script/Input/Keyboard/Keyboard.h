#pragma once

class Keyboard{

public:
	Keyboard();
	~Keyboard();
	void Update();
	int Input(int argKeyCode);

private:
	static const int KeyType_Num;
	int *arrKeyFrame;

};