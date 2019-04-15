#include "Jugador.h"
#include <vector>
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Obstaculo.h"


Jugador::Jugador(const std::string& arch):Personaje(arch)
{
    this->setPosition(0, 525);///0, 525

}

Jugador::~Jugador()
{
    //dtor
}
