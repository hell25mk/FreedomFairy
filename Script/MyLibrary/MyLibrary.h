#pragma once

/// <summary>
/// @brief 動的ポインタを開放してnullを代入
/// </summary>
template<typename Type>
constexpr void Self_Delete(Type p){

	delete p;
	p = nullptr;

}

namespace KeyCode{

#pragma region KeyCode : A-Z
	constexpr int Code_A = 0x1E;
	constexpr int Code_B = 0x30;
	constexpr int Code_C = 0x2E;
	constexpr int Code_D = 0x20;
	constexpr int Code_E = 0x12;
	constexpr int Code_F = 0x21;
	constexpr int Code_G = 0x22;
	constexpr int Code_H = 0x23;
	constexpr int Code_I = 0x17;
	constexpr int Code_J = 0x24;
	constexpr int Code_K = 0x25;
	constexpr int Code_L = 0x26;
	constexpr int Code_M = 0x32;
	constexpr int Code_N = 0x31;
	constexpr int Code_O = 0x18;
	constexpr int Code_P = 0x19;
	constexpr int Code_Q = 0x10;
	constexpr int Code_R = 0x13;
	constexpr int Code_S = 0x1F;
	constexpr int Code_T = 0x14;
	constexpr int Code_U = 0x16;
	constexpr int Code_V = 0x2F;
	constexpr int Code_W = 0x11;
	constexpr int Code_X = 0x2D;
	constexpr int Code_Y = 0x15;
	constexpr int Code_Z = 0x2C;
#pragma endregion

#pragma region Arrow
	constexpr int Code_Up = 0xC8;
	constexpr int Code_Left = 0xCB;
	constexpr int Code_Right = 0xCD;
	constexpr int Code_Down = 0xD0;
#pragma endregion

#pragma region Other
	constexpr int Code_Space = 0x39;
	constexpr int Code_LShift = 0x2A;
	constexpr int Code_Escape = 0x01;
#pragma endregion

}