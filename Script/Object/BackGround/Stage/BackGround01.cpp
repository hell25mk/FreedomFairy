#include "BackGround01.h"
#include "../../../Define/Define.h"
#include "../../../System/Image/Image.h"
#include "DxLib.h"

const int Start_N = -1;
const int End_N = 7;

BackGround01::BackGround01(){

	arrayHandle[0] = Image::Instance().GetBackGround01();
	arrayHandle[1] = Image::Instance().GetBackGround01();
	arrayHandle[2] = arrayHandle[0];
	arrayHandle[3] = 0;

	for(int t = 0; t < Surface::DataNum; t++){
		for(int z = Start_N; z < End_N; z++){

			listSurface.push_back(std::make_shared<Surface>(z, arrayHandle[t], t));

		}
	}

	{
		SetCameraNearFar(1.0f, 10000.0f);	//ƒJƒƒ‰‚Ì—LŒø”ÍˆÍÝ’è
		SetCameraScreenCenter(Define::Window::Out_Width / 2.0f, Define::Window::Out_Height / 2.0f);
		SetCameraPositionAndTarget_UpVecY(VGet(0.0f, 0.0f, -100.0f), VGet(0.0f, 0.0f, 0.0f));
		SetFogEnable(true);
		SetFogColor(0, 0, 0);
		SetFogStartEnd(0.0f, 300.0f);
	}

	{
		MATERIALPARAM material;
		material.Diffuse = GetColorF(0.0f, 0.0f, 0.0f, 1.0f);
		material.Specular = GetColorF(0.0f, 0.0f, 0.0f, 0.0f);
		material.Ambient = GetColorF(1.0f, 1.0f, 1.0f, 1.0f);
		material.Emissive = GetColorF(1.0f, 1.0f, 1.0f, 0.0f);
		material.Power = 20.0f;
		SetMaterialParam(material);
		SetMaterialUseVertSpcColor(false);
		SetMaterialUseVertDifColor(false);
	}

}

bool BackGround01::Update(){

	for(auto srf : listSurface){

		srf->Update();
		
		if(srf->GetZ() < srf->GetZWidth() * (Start_N - 1)){
			srf->AddZ((End_N - Start_N) * srf->GetZWidth());
		}

	}

	return true;
}

void BackGround01::Draw() const{

	DrawGraph(Define::Window::In_Px, Define::Window::In_Py, Image::Instance().GetImage("BackGround01"), true);

	/*VECTOR offset;

	offset.x = offset.y = offset.z = 0;
	Draw(offset);*/

}

void BackGround01::Draw(VECTOR offset) const{

	SetDrawMode(DX_DRAWMODE_BILINEAR);

	for(auto srf : listSurface){

		srf->Draw(offset);

	}
	
	SetDrawMode(DX_DRAWMODE_NEAREST);

}