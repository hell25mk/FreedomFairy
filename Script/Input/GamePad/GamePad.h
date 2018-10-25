#pragma once

#include <array>

enum ePadType : int;

class GamePad{

public:
	GamePad();
	~GamePad();
	bool Update();
	int Input(ePadType eID) const;

private:
	const static int InputType_Num = 16;

private:
	std::array<int, InputType_Num> aryInputID;		//どのボタンがどのボタンに割当たっているか
	std::array<int, InputType_Num> padInputState;		//16ボタンのpad入力状態を格納

};

