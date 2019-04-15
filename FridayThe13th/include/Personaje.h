#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <vector>
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <set>
#include "Obstaculo.h"

class Personaje : public sf::Sprite
{
    public:
        Personaje(const std::string&);
        virtual ~Personaje();
        bool movimientoValido(double, double);
        void mover();
        bool esObstaculo(double, double);
        void setTex(const std::string&);
    protected:
    private:
        std::set <Obstaculo *> obstaculos;
        sf::Texture tex;
};

#endif // PERSONAJE_H
