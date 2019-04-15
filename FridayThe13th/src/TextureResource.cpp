#include "TextureResource.h"


TextureResourceManager TextureResource::manager=TextureResourceManager();

TextureResource::TextureResource(std::string name):Resource(name)
{
	if(manager.create(name))
		manager.resourceMap[name].second->loadFromFile(name);
	sprite.setTexture(*manager.resourceMap[name].second);
}


TextureResource::~TextureResource()
{
	manager.destroy(name);
}
