#pragma once

#include "../../DesignPattern/Singleton/Singleton.h"
#include <vector>
#include <map>

namespace ImageAllNum{
	namespace Enemy{
		constexpr int Fairy_ImageNum = 9;
	}
	namespace Bullet{

	}
}

class Image : public Singleton<Image>{

public:
	friend class Singleton<Image>;
	void Load();
	void Release();
	int GetImage(std::string) const;
	int* GetDivImage(std::string) const;

protected:
	Image();
	virtual ~Image() = default;

private:
	int MyLoadGraph(const char* fileName);
	int MyLoadDivGraph(const char* fileName, int allNum, int xNum, int yNum, int width, int height, int *buf);

private:
	std::map<std::string, int> mapImage;
	std::map<std::string, int*> mapDivImage;
	std::vector<int> vectorImage;
	int fairyEnemyImage[ImageAllNum::Enemy::Fairy_ImageNum];

};

