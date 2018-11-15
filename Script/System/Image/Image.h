#pragma once

#include "../../DesignPattern/Singleton/Singleton.h"
#include <vector>
#include <map>

namespace{
	const int Fairy_ImageNum = 9;
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
	int MyLoadDivGraph(const char* fileName, int n, int xn, int yn, int w, int h, int *buf);

private:
	std::map<std::string, int> mapImage;
	std::map<std::string, int*> mapDivImage;
	std::vector<int> vectorImage;

	int fairyEnemyImage[Fairy_ImageNum];

};

