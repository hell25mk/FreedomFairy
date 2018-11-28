#include "PlayerFactory.h"
#include "../Player.h"
#include "../../../System/Vector2D.h"

std::shared_ptr<BaseGameObject> PlayerFactory::Create(const float x, const float y){

	Vector2D<float> vec(x,y);

	return std::make_shared<Player>(vec);
}