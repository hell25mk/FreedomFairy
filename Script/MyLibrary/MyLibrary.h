#pragma once

#define SELF_DELETE(p) delete p;p = nullptr;

namespace keycode{

#pragma region KeyCode : A-Z
	const int Code_A = 0x1E;
	const int Code_B = 0x30;
	const int Code_C = 0x2E;
	const int Code_D = 0x20;
	const int Code_E = 0x12;
	const int Code_F = 0x21;
	const int Code_G = 0x22;
	const int Code_H = 0x23;
	const int Code_I = 0x17;
	const int Code_J = 0x24;
	const int Code_K = 0x25;
	const int Code_L = 0x26;
	const int Code_M = 0x32;
	const int Code_N = 0x31;
	const int Code_O = 0x18;
	const int Code_P = 0x19;
	const int Code_Q = 0x10;
	const int Code_R = 0x13;
	const int Code_S = 0x1F;
	const int Code_T = 0x14;
	const int Code_U = 0x16;
	const int Code_V = 0x2F;
	const int Code_W = 0x11;
	const int Code_X = 0x2D;
	const int Code_Y = 0x15;
	const int Code_Z = 0x2C;
#pragma endregion

#pragma region Arrow
	const int Code_Up = 0xC8;
	const int Code_Left = 0xCB;
	const int Code_Right = 0xCD;
	const int Code_Down = 0xD0;
#pragma endregion

#pragma region Other
	const int Code_Space = 0x39;
	const int Code_LShift = 0x2A;
	const int Code_Escape = 0x01;
#pragma endregion

}