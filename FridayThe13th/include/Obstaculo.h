#ifndef OBSTACULO_H
#define OBSTACULO_H
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>

class Obstaculo
{
    public:
        Obstaculo(sf::Vector2f w, sf::Vector2f  x, sf::Vector2f  y, sf::Vector2f  z);
        virtual ~Obstaculo();
        sf::Vector2f getCero();
        sf::Vector2f getUno();
        sf::Vector2f getDos();
        sf::Vector2f getTres();
    protected:
    private:
        sf::Vector2f cero;
        sf::Vector2f uno;
        sf::Vector2f dos;
        sf::Vector2f tres;
};

#endif // OBSTACULO_H
