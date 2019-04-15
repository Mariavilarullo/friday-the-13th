#include "Obstaculo.h"
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>

Obstaculo::Obstaculo(sf::Vector2f w, sf::Vector2f x, sf::Vector2f y, sf::Vector2f z)
{
    this->cero=w;
    this->uno=x;
    this->dos=y;
    this->tres=z;
}
sf::Vector2f Obstaculo::getCero()
{
    return this->cero;
}
sf::Vector2f Obstaculo::getUno()
{
    return this->uno;
}
sf::Vector2f Obstaculo::getDos()
{
    return this->dos;
}
sf::Vector2f Obstaculo::getTres()
{
    return this->tres;
}
Obstaculo::~Obstaculo()
{
    //dtor
}
