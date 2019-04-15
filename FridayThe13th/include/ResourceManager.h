#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
#include <memory>

template<class T>
class ResourceManager
{
protected:
	std::unordered_map<std::string, std::pair<int, std::unique_ptr<T>>> resourceMap;
	bool create(std::string name);  //should return true if the resource is first requested
	void destroy(std::string name);
public:
	ResourceManager(){};
	virtual ~ResourceManager(){};
};

template<class T>
bool ResourceManager<T>::create(std::string name)
{
	if(resourceMap.count(name)==0)
	{
		resourceMap[name].first=1;
		resourceMap[name].second.reset(new T());
		std::cout<<"Loading "<<name<<" for the first time. Ref count: "<<resourceMap[name].first<<"\n";
		return true;
	}
	else if(resourceMap.count(name)>0)
	{
		resourceMap[name].first++;
		std::cout<<name<<" already loaded. Ref count: "<<resourceMap[name].first<<"\n";
	}
	else //Something wrong!!
		std::cout<<"Something's wrong in creating. Ref count: "<<resourceMap[name].first<<"\n"; 
	return false;
}

template<class T>
void ResourceManager<T>::destroy(std::string name)
{
	//if there is only one reference
	if(resourceMap[name].first==1)
	{
		std::cout<<resourceMap[name].first;
		resourceMap.erase(name);
		std::cout<<"Final Destroy";
	}
	//if there is more than one reference
	else if(resourceMap[name].first>1)
	{
		resourceMap[name].first--;//decrement the ref count
		std::cout<<"Destroying "<<"refcount: "<<resourceMap[name].first<<"\n";
	}
	else//Something's wrong!
		std::cout<<"Something's wrong in destroying. Ref count: "<<resourceMap[name].first<<"\n";
}
