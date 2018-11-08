#include "Define.h"

using Win = Define::Window;

//ウィンドウのサイズ
const int Win::Window_Width	 = 640;
const int Win::Window_Height = 480;

//ゲーム画面サイズ
const int Win::Out_Width	 = (int)(Window_Width * 0.7);
const int Win::Out_Height	 =		 Window_Height;
const int Win::In_Width		 = (int)(Window_Width * 0.6);
const int Win::In_Height	 = (int)(Window_Height * 0.9);
const int Win::Center_Px	 = (int)(Out_Width / 2);
const int Win::Center_Py	 = (int)(Out_Height / 2);
const int Win::In_Px		 = (int)((Out_Width - In_Width) / 2);
const int Win::In_Py		 = (int)((Out_Height - In_Height) / 2);