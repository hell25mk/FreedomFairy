#pragma once

namespace Define{

	/// <summary>
	/// @brief ウィンドウサイズ
	/// </summary>
	constexpr int Window_Width = 640;
	constexpr int Window_Height = 480;

	/// <summary>
	/// @brief ゲーム画面関連の定数群
	/// </summary>
	class GameSize final{

	public:
		const static int Out_Width;			//外枠
		const static int Out_Height;
		const static int In_Width;			//内枠
		const static int In_Height;
		const static int Center_Px;			//動ける範囲の中央座標
		const static int Center_Py;
		const static int In_Px;				//内枠座標
		const static int In_Py;

	};

	/// <summary>
	/// @brief 色関連の定数群
	/// </summary>
	class Color final{

	public:
		const static int Color_White;
		const static int Color_Red;
		const static int Color_Green;
		const static int Color_Blue;
		const static int Color_FBlue;
		const static int Color_SkyBlue;
		const static int Color_Black;

	};

	/// <summary>
	/// @brief 計算関連の定数群
	/// </summary>
	constexpr float Math_Pai = 3.141592654f;
	/*class Math final{

	public:
		const static float Math_Pai;

	};*/

	enum eStage{
		Stage1,
		Stage2,
		Stage3,
		Stage4,
		Stage5,

		StageNum,
	};

	/// <summary>
	/// @brief ゲーム難易度関連の定数群
	/// </summary>
	enum eGameLevel{
		Easy,
		Normal,
		Hard,
		Lunatic,

		LevelNum,
	};

}

