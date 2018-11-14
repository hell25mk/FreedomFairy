#pragma once

class Debug{

public:
	Debug() = default;
	~Debug() = default;
	static void Draw();

public:
	static int playerNum;
	static int enemyNum;
	static int bulletNum;

};

