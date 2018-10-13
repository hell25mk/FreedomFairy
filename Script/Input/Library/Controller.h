#pragma once

#pragma region Keyboard
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
#pragma endregion

#pragma region GamePad
class GamePad{

public:
	GamePad();
	~GamePad();

};
#pragma endregion