#pragma once

namespace Define{

	/// <summary>
	/// �E�B���h�E�֘A�̒萔�Q
	/// </summary>
	class Window final{

	public:
		const static int Window_Width;
		const static int Window_Height;

	};

	/// <summary>
	/// �F�֘A�̒萔�Q
	/// </summary>
	class Color final{

	public:
		const static int Color_White;
		const static int Color_Red;
		const static int Color_Green;
		const static int Color_Blue;

	};

	/// <summary>
	/// �v�Z�֘A�̒萔�Q
	/// </summary>
	class Mach final{

	public:
		const static float Defi_Pai;

	};

	/// <summary>
	/// �Q�[����Փx�֘A�̒萔�Q
	/// </summary>
	enum eGameLevel{
		Easy,
		Normal,
		Hard,
		Lunatic,
	};

}

