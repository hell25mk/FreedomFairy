#include "Image.h"
#include "DxLib.h"

void Image::Load(){

	//ˆê–‡‰æ‘œ
	mapImage["Player"] = MyLoadGraph("Image/Player/Player.png");
	mapImage["Board"] = MyLoadGraph("Image/Board/Board02.png");
	mapImage["BackGround01"] = MyLoadGraph("Image/BackGround/Stage01.png");

	//•¡”‰æ‘œ
	MyLoadDivGraph("Image/Enemy/Fairy.png", 9, 3, 3, 54, 54, fairyEnemyImage);
	mapDivImage["Fairy"] = fairyEnemyImage;

}

void Image::Release(){

	const int vecSize = vectorImage.size();

	for(int i = 0; i < vecSize; i++){

		DeleteGraph(vectorImage[i]);

	}

	vectorImage.clear();

}

int Image::GetImage(std::string key) const{

	return mapImage.at(key);
}

int* Image::GetDivImage(std::string key) const{

	return mapDivImage.at(key);
}

int Image::MyLoadGraph(const char* fileName){

	int ret = LoadGraph(fileName);
	vectorImage.push_back(ret);

	return ret;
}

int Image::MyLoadDivGraph(const char* fileName, int allNum, int xNum, int yNum, int width, int height, int *buf){

	int ret = LoadDivGraph(fileName, allNum, xNum, yNum, width, height, buf);

	for(int i = 0; i < allNum; i++){

		vectorImage.push_back(buf[i]);

	}

	return ret;
}