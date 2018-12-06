#pragma once

/// <summary>
/// @brief 定数群
/// </summary>
namespace Define{

	/// <summary>
	/// @brief ウィンドウサイズ
	/// </summary>
	namespace Window{
		constexpr int Window_Width = 640;
		constexpr int Window_Height = 480;
	}

	/// <summary>
	/// @brief ゲームサイズ
	/// </summary>
	namespace GameSize{
		constexpr int Out_Width = (int)(Window::Window_Width * 0.75);
		constexpr int Out_Height = (int)(Window::Window_Height);
		constexpr int In_Width = (int)(Out_Width * 0.858);
		constexpr int In_Height = (int)(Window::Window_Height * 0.95);
		constexpr int Center_Px = (int)(Out_Width / 2);
		constexpr int Center_Py = (int)(Out_Height / 2);
		constexpr int In_Px = (int)((Out_Width - In_Width) / 2);
		constexpr int In_Py = (int)((Out_Height - In_Height) / 2);
	}
	/*class GameSize final{

	public:
		const static int Out_Width;			//外枠
		const static int Out_Height;
		const static int In_Width;			//内枠
		const static int In_Height;
		const static int Center_Px;			//動ける範囲の中央座標
		const static int Center_Py;
		const static int In_Px;				//内枠座標
		const static int In_Py;

	};*/

	/// <summary>
	/// @brief 色関連
	/// </summary>
	namespace ColorCode{
		constexpr unsigned int Color_White		= 0xFFFFFF;		//255,255,255
		constexpr unsigned int Color_Red		= 0xFF0000;		//255,0,0
		constexpr unsigned int Color_Green		= 0x00FF00;		//0,255,0
		constexpr unsigned int Color_Blue		= 0x0000FF;		//0,0,255
		constexpr unsigned int Color_FBlue		= 0x0040F0;		//0,64,255
		constexpr unsigned int Color_SkyBlue	= 0x00D2FF;		//0,210,255
		constexpr unsigned int Color_Black		= 0x000000;		//0,0,0
	}
	/*class ColorCode final{

	public:
		const static int Color_White;
		const static int Color_Red;
		const static int Color_Green;
		const static int Color_Blue;
		const static int Color_FBlue;
		const static int Color_SkyBlue;
		const static int Color_Black;

	};*/

	/// <summary>
	/// @brief 計算関連の定数群
	/// </summary>
	constexpr float Math_Pai = 3.141592654f;
	/*class Math final{

	public:
		const static float Math_Pai;

	};*/

	/// <summary>
	/// @brief ステージ数
	/// </summary>
	enum class StageKind{
		Stage1 = 0,
		Stage2,
		Stage3,
		Stage4,
		Stage5,

		Stage_Num,
	};
	enum eStage{
		Stage1,
		Stage2,
		Stage3,
		Stage4,
		Stage5,

		Stage_Num,
	};

	/// <summary>
	/// @brief ゲーム難易度
	/// </summary>
	enum class GameLevel{
		Easy = 0,
		Normal,
		Hard,
		Lunatic,

		Level_Num,
	};
	enum eGameLevel{
		Easy,
		Normal,
		Hard,
		Lunatic,

		Level_Num,
	};

}

