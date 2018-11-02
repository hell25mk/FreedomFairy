#pragma once

namespace Define{

	/// <summary>
	/// ウィンドウ関連の定数群
	/// </summary>
	class Window final{

	public:
		const static int Window_Width;
		const static int Window_Height;

	};

	/// <summary>
	/// 色関連の定数群
	/// </summary>
	class Color final{

	public:
		const static int Color_White;
		const static int Color_Red;
		const static int Color_Green;
		const static int Color_Blue;

	};

	/// <summary>
	/// 計算関連の定数群
	/// </summary>
	class Mach final{

	public:
		const static float Defi_Pai;

	};

	/// <summary>
	/// ゲーム難易度関連の定数群
	/// </summary>
	enum eGameLevel{
		Easy,
		Normal,
		Hard,
		Lunatic,
	};

}

