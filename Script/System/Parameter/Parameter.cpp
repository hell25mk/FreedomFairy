#include "Parameter.h"

const int Error = -1;

void Parameter::Set(std::string key, int value){

	mapParameter[key] = value;

}

int Parameter::Get(std::string key) const{

	auto itr = mapParameter.find(key);

	if(mapParameter.end() == itr){
		return Error;
	}

	return itr->second;
}