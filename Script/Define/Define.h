#pragma once

namespace Define{

	/// <summary>
	/// @brief �E�B���h�E�֘A�̒萔�Q
	/// </summary>
	class Window final{

	public:
		const static int Window_Width;
		const static int Window_Height;
		const static int GameRange_Width;
		const static int GameRange_Height;

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

	};

	/// <summary>
	/// @brief �v�Z�֘A�̒萔�Q
	/// </summary>
	class Mach final{

	public:
		const static float Math_Pai;

	};

	/// <summary>
	/// @brief �Q�[����Փx�֘A�̒萔�Q
	/// </summary>
	enum eGameLevel{
		Easy,
		Normal,
		Hard,
		Lunatic,
	};

}

