#include "Ventana.h"
#include <vector>
#include <string>
#include<iostream>
#include<set>
#include <SFML/Graphics.hpp>

Ventana::Ventana()
{

}

Ventana::~Ventana()
{
    //dtor
}
bool Ventana::load(const std::string& tileset, sf::Vector2u tileSize, const int* tiles, unsigned int width, unsigned int height)
{

        if (!m_tileset.loadFromFile(tileset))
            return false;

        // resize para que entre en el level
        m_vertices.setPrimitiveType(sf::Quads);
        m_vertices.resize(width * height * 4);



        // lleno el vertex con un quad/tile
        for (unsigned int i = 0; i < width; ++i)
            for (unsigned int j = 0; j < height; ++j)
            {
                //meh
                int tileNumber = tiles[i + j * width];

                // posición en el textureee
                int tu = tileNumber % (m_tileset.getSize().x / tileSize.x);
                int tv = tileNumber / (m_tileset.getSize().x / tileSize.x);

                // puntero al tile en el que está el quad
                sf::Vertex* quad = &m_vertices[(i + j * width) * 4];

                // defino la posición
                quad[0].position = sf::Vector2f(i * tileSize.x, j * tileSize.y);
                quad[1].position = sf::Vector2f((i + 1) * tileSize.x, j * tileSize.y);
                quad[2].position = sf::Vector2f((i + 1) * tileSize.x, (j + 1) * tileSize.y);
                quad[3].position = sf::Vector2f(i * tileSize.x, (j + 1) * tileSize.y);


                sf::Vector2f v1(quad[0].position.x, quad[0].position.y);
                sf::Vector2f v2(quad[1].position.x, quad[1].position.y);
                sf::Vector2f v3(quad[2].position.x, quad[2].position.y);
                sf::Vector2f v4(quad[3].position.x, quad[3].position.y);
                ///Obstaculo o(v1, v2, v3, v4);
                ///obstacles.insert(&o); fffffffffffffff

                quad[0].texCoords = sf::Vector2f(tu * tileSize.x, tv * tileSize.y);//
                quad[1].texCoords = sf::Vector2f((tu + 1) * tileSize.x, tv * tileSize.y);
                quad[2].texCoords = sf::Vector2f((tu + 1) * tileSize.x, (tv + 1) * tileSize.y);
                quad[3].texCoords = sf::Vector2f(tu * tileSize.x, (tv + 1) * tileSize.y);

            }
        return true;
}
void Ventana::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
        states.transform *= getTransform();
        states.texture = &m_tileset;
        target.draw(m_vertices, states);
}

