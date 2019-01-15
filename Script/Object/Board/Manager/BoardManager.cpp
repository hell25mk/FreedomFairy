#include "BoardManager.h"
#include "../Board/Board.h"

BoardManager::BoardManager(){

	listObject.push_back(std::make_shared<Board>());

}