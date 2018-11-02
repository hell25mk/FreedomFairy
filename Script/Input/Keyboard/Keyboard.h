#pragma once

#include <array>
#include "../DefineController.h"

class Keyboard{

public:
	Keyboard();
	~Keyboard() = default;
	bool Update();
	int GetPressCount(int keyCode) const;
	int GetReleasCount(int keyCode) const;

private:
	bool IsAvailableCode(int keyCode) const;

private:
	std::array<int, Input::Key_Num> aryPressCount;
	std::array<int, Input::Key_Num> aryReleasCount;

};

