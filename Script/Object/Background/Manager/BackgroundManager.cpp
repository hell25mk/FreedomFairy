#include "BackgroundManager.h"
#include "../Board/Board.h"
#include "../BackgroundIncluder.h"

BackgroundManager::BackgroundManager(){

	listObject.push_back(std::make_shared<Board>());
	listObject.push_back(std::make_shared<Background01>());

}