#ifndef VENTANA_H
#define VENTANA_H
#include <vector>
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Jugador.h"

class Ventana : public sf::Drawable, public sf::Transformable
{
    public:
        Ventana();
        virtual ~Ventana();
        bool load(const std::string&, sf::Vector2u, const int*, unsigned int, unsigned int);
    protected:
    private:
        virtual void draw(sf::RenderTarget&, sf::RenderStates) const;
        sf::VertexArray m_vertices;
        sf::Texture m_tileset;

};

#endif // VENTANA_H
