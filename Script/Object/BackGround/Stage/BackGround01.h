#pragma once

#include "../Base/BaseBackGround.h"
#include <list>
#include <array>
#include <memory>
#include "../../../Surface/Surface.h"

class BackGround01 final : public BaseBackGround{

public:
	BackGround01();
	virtual ~BackGround01() = default;
	bool Update() override;
	void Draw() const override;

private:
	void Draw(VECTOR offset) const;

private:
	std::list<std::shared_ptr<Surface>> listSurface;
	std::array<int, Surface::DataNum> arrayHandle;

};

