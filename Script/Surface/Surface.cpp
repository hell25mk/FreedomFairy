#include "Surface.h"
#include "../Define/Define.h"

const float Wid_X = 256.0f;
const float Wid_Y = 0.0f;
const float Wid_Z = 256.0f;
const float Scroll_Speed = 0.1f;
const float Space = 5;
const float Speed = 0.01f;
const float CsDefRotaX = (-Define::Math::Math_Pai / 5.0f);
const VECTOR vMove = { 0.5,-50 };
const VECTOR GvPos[Surface::DataNum][4] = {
	{ {0,Wid_Y,0},{0,Wid_Y,Wid_Z},{0,0,Wid_Z},{0,0,0} },
	{ {0,0,0},{0,0,Wid_Z},{Wid_X,0,Wid_Z},{Wid_X,0,0} },
	{ {Wid_X,Wid_Y,0},{Wid_X,Wid_Y,Wid_Z},{Wid_X,0,Wid_Z},{Wid_X,0,0} },
	{ {0,Wid_Y,0},{0,Wid_Y,Wid_Z},{Wid_X,Wid_Y,Wid_Z},{Wid_X,Wid_Y,0} },
};

Surface::Surface(int z, int sHndl, unsigned int uType){

	VECTOR vPos[DataNum][4] = {};

	for(int i = 0; i < DataNum; i++){
		for(int j = 0; j < 4; j++){

			vPos[i][j].x = GvPos[i][j].x - Wid_X / 2;
			vPos[i][j].y = GvPos[i][j].y - Wid_Y / 2;

		}
	}

	unsigned tp = uType;
	handle = sHndl;
	angle = VGet(-Speed, 0.0f, -Speed);

	vertex[0].pos = VGet(vPos[tp][0].x, vPos[tp][0].y, vPos[tp][0].z + Wid_Z * z);
	vertex[0].norm = VGet(1.0f, 0.0f, 0.0f);
	vertex[0].dif = GetColorU8(255, 255, 255, 255);
	vertex[0].spc = GetColorU8(0, 0, 0, 0);
	vertex[0].u = 0.0f;
	vertex[0].v = 0.0f;
	vertex[0].su = 0.0f;
	vertex[0].sv = 0.0f;

	vertex[1].pos = VGet(vPos[tp][1].x, vPos[tp][1].y, vPos[tp][1].z + Wid_Z * (z + 1));
	vertex[1].norm = VGet(0.0f, 1.0f, 0.0f);
	vertex[1].dif = GetColorU8(255, 255, 255, 255);
	vertex[1].spc = GetColorU8(0, 0, 0, 0);
	vertex[1].u = 1.0f;
	vertex[1].v = 0.0f;
	vertex[1].su = 0.0f;
	vertex[1].sv = 0.0f;

	vertex[2].pos = VGet(vPos[tp][2].x, vPos[tp][2].y, vPos[tp][2].z + Wid_Z * (z + 1));
	vertex[2].norm = VGet(-1.0f, 0.0f, 0.0f);
	vertex[2].dif = GetColorU8(255, 255, 255, 255);
	vertex[2].spc = GetColorU8(0, 0, 0, 0);
	vertex[2].u = 1.0f;
	vertex[2].v = 1.0f;
	vertex[2].su = 0.0f;
	vertex[2].sv = 0.0f;

	vertex[3].pos = VGet(vPos[tp][3].x, vPos[tp][3].y, vPos[tp][3].z + Wid_Z * z);
	vertex[3].norm = VGet(0.0f, -1.0f, 0.0f);
	vertex[3].dif = GetColorU8(255, 255, 255, 255);
	vertex[3].spc = GetColorU8(0, 0, 0, 0);
	vertex[3].u = 0.0f;
	vertex[3].v = 1.0f;
	vertex[3].su = 0.0f;
	vertex[3].sv = 0.0f;

	//2ポリゴン分のインデックスデータをセット
	index[0] = 0;
	index[1] = 1;
	index[2] = 2;
	index[3] = 2;
	index[4] = 3;
	index[5] = 0;

}

bool Surface::Update(){

	for(int i = 0; i < 4; i++){

		vertex[i].pos.z -= Scroll_Speed;

	}

	return true;
}

void Surface::Draw(VECTOR offset){

	MATRIX matrix = MGetRotX(CsDefRotaX);
	VERTEX3D tempVertex[4];

	memcpy(tempVertex, vertex, sizeof(vertex));

	for(int i = 0; i < 4; i++){

		tempVertex[i].pos = VTransform(tempVertex[i].pos, matrix);
		tempVertex[i].pos = VAdd(tempVertex[i].pos, vMove);
		tempVertex[i].pos = VAdd(tempVertex[i].pos, offset);

	}

	DrawPolygonIndexed3D(tempVertex, 4, index, 2, handle, true);

}

float Surface::GetZ() const{

	return vertex[0].pos.z;
}

float Surface::GetZWidth() const{

	return Wid_Z;
}

void Surface::AddZ(const float fZ){

	for(int i = 0; i < 4; i++){

		vertex[i].pos.z += fZ;

	}

}