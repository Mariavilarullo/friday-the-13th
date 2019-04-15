#pragma once
#include "resource.h"
#include <SFML\Graphics.hpp>
#include "TextureResourceManager.h"

class TextureResource :public Resource
{
private:
	static TextureResourceManager manager;
	sf::Sprite sprite;
public:
	TextureResource(std::string name);
	virtual ~TextureResource();
	sf::Sprite& get(){return sprite;}
};

