#ifndef JUGADOR_H
#define JUGADOR_H
#include <vector>
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Obstaculo.h"
#include <set>
#include "Personaje.h"


class Jugador : public Personaje
{
    public:
        Jugador(const std::string&);
        virtual ~Jugador();
    protected:
    private:

};

#endif // JUGADOR_H
