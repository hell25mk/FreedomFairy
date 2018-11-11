#pragma once

#include "DxLib.h"

class Surface{

public:
	enum eSurface{
		Wind,
		Flor,
		Door,
		Loof,

		DataNum,
	};

public:
	Surface(int z, int sHndl, unsigned int uType);
	bool Update();
	void Draw(VECTOR offset);

	float GetZ() const;
	float GetZWidth() const;
	void AddZ(const float fZ);

private:
	VERTEX3D vertex[4];
	WORD index[6];
	int handle;
	VECTOR angle;

};

