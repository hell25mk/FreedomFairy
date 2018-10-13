#pragma once

class Keyboard{

public:
	Keyboard();
	~Keyboard();
	void Update();
	int Input(int argKeyCode);

private:
	static const char KeyType_Num;
	char *arrKeyFrame;

};