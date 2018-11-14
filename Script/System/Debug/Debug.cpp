#include "Debug.h"
#include "DxLib.h"

int Debug::playerNum = 0;
int Debug::enemyNum = 0;
int Debug::bulletNum = 0;

void Debug::Draw(){

	clsDx();
	printfDx("p:%d,e:%d,b:%d", playerNum, enemyNum, bulletNum);

}