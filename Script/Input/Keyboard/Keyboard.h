#pragma once

class Keyboard{

public:
	Keyboard();
	~Keyboard();
	void Update();
	int Input(int argKeyCode);

private:
	static const byte KeyType_Num;
	byte *arrKeyFrame;

};