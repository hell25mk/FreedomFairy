#pragma once

namespace Define{

	/// <summary>
	/// @brief �E�B���h�E�T�C�Y
	/// </summary>
	constexpr int Window_Width = 640;
	constexpr int Window_Height = 480;

	/// <summary>
	/// @brief �Q�[����ʊ֘A�̒萔�Q
	/// </summary>
	class GameSize final{

	public:
		const static int Out_Width;			//�O�g
		const static int Out_Height;
		const static int In_Width;			//���g
		const static int In_Height;
		const static int Center_Px;			//������͈͂̒������W
		const static int Center_Py;
		const static int In_Px;				//���g���W
		const static int In_Py;

	};

	/// <summary>
	/// @brief �F�֘A�̒萔�Q
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
	/// @brief �v�Z�֘A�̒萔�Q
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
	/// @brief �Q�[����Փx�֘A�̒萔�Q
	/// </summary>
	enum eGameLevel{
		Easy,
		Normal,
		Hard,
		Lunatic,

		LevelNum,
	};

}

