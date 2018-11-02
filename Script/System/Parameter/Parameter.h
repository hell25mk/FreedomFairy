#pragma once

#include <map>

class Parameter{

public:
	Parameter() = default;
	virtual ~Parameter() = default;
	void Set(std::string key, int value);
	int Get(std::string key) const;

private:
	std::map<std::string, int> mapParameter;

};

