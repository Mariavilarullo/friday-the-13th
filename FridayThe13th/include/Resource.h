#pragma once
#include <string>

//Base class for all resources.........
class Resource
{
protected:
	std::string name;
public:
	Resource(std::string name_):name(name_){};
	virtual ~Resource(){};
};

