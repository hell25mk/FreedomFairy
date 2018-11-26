#include "Image.h"
#include "DxLib.h"

void Image::Load(){

	//�ꖇ�摜
	mapImage["Player"] = MyLoadGraph("Image/Player/Player.png");
	mapImage["Board"] = MyLoadGraph("Image/Board/Board02.png");
	mapImage["Background01"] = MyLoadGraph("Image/Background/Stage01.png");

	//�����摜
	MyLoadDivGraph("Image/Enemy/Fairy.png", 9, 3, 3, 43, 43, fairyEnemyImage);
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

	return (mapImage.count(key) != 0) ? mapImage.at(key) : 0;
}

int* Image::GetDivImage(std::string key) const{

	return (mapDivImage.count(key) != 0) ? mapDivImage.at(key) : 0;
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