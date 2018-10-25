#pragma once

#include <array>

class Keyboard{

public:
	Keyboard();
	~Keyboard();
	bool Update();
	int GetPressCount(int keyCode);
	int GetReleasCount(int keyCode);

private:
	bool IsAvailableCode(int keyCode);

private:
	static const int InputKey_Num = 256;

private:
	std::array<int, InputKey_Num> aryPressCount;
	std::array<int, InputKey_Num> aryReleasCount;

};

