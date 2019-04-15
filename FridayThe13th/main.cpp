#include <iostream>
#include "Ventana.h"
#include <vector>
#include <string>
#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <time.h>
#include "Obstaculo.h"
#include "Personaje.h"
#include "Jason.h"

using namespace std;

int main()
{
    const int level[] =
    {
        8, 3, 0, 2, 0, 0, 4, 0, 0, 6, 6, 6, 6, 6, 6, 6,
        0, 3, 3, 0, 1, 4, 2, 0, 0, 6, 6, 6, 6, 6, 6, 6,
        1, 0, 3, 3, 0, 0, 4, 2, 0, 0, 6, 6, 6, 6, 6, 6,
        0, 0, 4, 3, 3, 1, 0, 4, 0, 0, 6, 6, 6, 6, 6, 6,
        0, 1, 0, 2, 3, 0, 2, 1, 0, 4, 0, 0, 6, 6, 6, 6,
        4, 0, 0, 0, 3, 3, 0, 0, 1, 4, 0, 0, 6, 6, 6, 6,
        0, 0, 4, 1, 0, 3, 7, 1, 0, 2, 4, 0, 6, 6, 6, 6,
        1, 1, 0, 0, 0, 3, 3, 2, 4, 0, 0, 0, 6, 6, 6, 6,
        0, 2, 0, 2, 0, 3, 0, 0, 0, 1, 0, 6, 6, 6, 6, 6,
        1, 7, 0, 0, 7, 3, 1, 2, 0, 4, 0, 6, 6, 6, 6, 6,
        0, 3, 3, 3, 3, 3, 2, 0, 0, 6, 6, 6, 6, 6, 6, 6,
        0, 1, 0, 3, 1, 4, 4, 2, 0, 6, 6, 6, 6, 6, 6, 6,
        0, 0, 7, 3, 0, 0, 4, 1, 0, 2, 6, 6, 6, 6, 6, 6,
        0, 1, 3, 3, 1, 0, 0, 0, 4, 0, 5, 5, 5, 6, 6, 6,
        4, 0, 2, 3, 3, 2, 0, 6, 6, 6, 6, 6, 6, 6, 6, 6,
        0, 0, 1, 0, 3, 1, 0, 6, 6, 6, 6, 6, 6, 6, 6, 6,
        4, 0, 1, 7, 3, 0, 2, 6, 6, 6, 6, 6, 6, 6, 6, 6,
        0, 2, 0, 3, 3, 0, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
        1, 0, 1, 1, 0, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
        1, 0, 1, 0, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
        0, 4, 0, 2, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
        0, 0, 0, 0, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    };
    sf::Texture menutex, deadtex, esctex;
    if (!menutex.loadFromFile("menu.png"))
     {
         printf(" No se pudo cargar la imagen menu.png \n");
     }
    if (!deadtex.loadFromFile("youaredead.png"))
     {
         printf(" No se pudo cargar la imagen youaredead.png \n");
     }
    if (!esctex.loadFromFile("youescaped.png"))
     {
         printf(" No se pudo cargar la imagen youescaped.png \n");
     }
     sf::Sprite menusp, deadsp, escsp;
     ///sprite.setScale(0.5, 0.5);
     menusp.setTexture(menutex);
     deadsp.setTexture(deadtex);
     escsp.setTexture(esctex);


    sf::RenderWindow menu(sf::VideoMode(550, 450), "Friday the 13th");
    sf::Event event;
    int estadoJuego=0;
    while (menu.isOpen())
    {
        while (menu.pollEvent(event))
        {

            if(event.type == sf::Event::Closed)
                menu.close();
            if(event.type == sf::Event::KeyPressed)
            {
                estadoJuego=1;
                menu.close();
            }
        }
          menu.clear();
            menu.draw(menusp);
            menu.display();
    }
    Ventana map;
    if (!map.load("tiles.png", sf::Vector2u(25, 25), level, 16, 22))
        return -1;

    Jason jasonsp("jason.png");
    Jugador playersp("player.png");
    bool hidden =true;

    if(estadoJuego ==1)
    {
        sf::RenderWindow window(sf::VideoMode(400, 550), "Friday the 13th"); //400 550
        window.setPosition(sf::Vector2i(400, 0));
        while (window.isOpen())
        {
            window.setSize(sf::Vector2u(500, 650)); /// descomentar cuando quiera agrandar la ventana al estilo villa
            ///sf::Event event;
            if(!hidden)
            {
                jasonsp.mover(playersp);

            }

            while (window.pollEvent(event))
            {

               if(event.type == sf::Event::Closed)

                    window.close();

                if(event.type == sf::Event::KeyPressed)
                {
                    playersp.mover();
                    if(!hidden)
                    {
                        jasonsp.mover(playersp);
                    }

                }
                if (event.type == sf::Event::Closed)
                {
                    window.close();
                }
                if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape))
                {
                    window.close();
                }
            }
            int px= playersp.getPosition().x;
            int py= playersp.getPosition().y;

            int jx=jasonsp.getPosition().x;
            int jy=jasonsp.getPosition().y;
            if(py<=350)
            {
                hidden=false;
            }
            if((px>=100 && py>=475) || (px>=125 && py >=450) || (px>=150 &&py >=425)|| (px>=175 &&py >=350) ||(px>=325 && py >=300)
            || (px>=250 && py >=275 && py<300) || (px>=225 && py >=225 && py<275) ||(px>=275 && py >=200 && py <250)
            ||(px>=300 && py >=100 &&py <200) || (px>=250 && py >=25 &&py<75) ||(px>=225 && py >=0 &&py<25))
            {
                playersp.setTex("playersw.png");
            }
            else
            {
                playersp.setTex("player.png");
            }
            if(!hidden)
            {
                jasonsp.mover(playersp);

                if((jx>=100 && jy>=475) || (jx>=125 && jy >=450) || (jx>=150 && jy >=425) || (jx>=175 && jy >=350) || (jx>=325 && jy >=300)
                || (jx>=250 && jy >=275 && jy<300) || (jx>=225 && jy >=225 && jy<275) ||(jx>=275 && jy >=200 && jy <250)
                ||(jx>=300 && jy >=100 && jy <200) || (jx>=250 && jy >=25 && jy<75) ||(jx>=225 && jy >=0 && jy<25))
                {
                    jasonsp.setTex("jasonsw.png");
                }
                else
                {
                    jasonsp.setTex("jason.png");
                }
                if(px ==jx && py==jy)
                {
                    estadoJuego=2;
                    window.close();

                }
                if(py <=5 && (px >=25 && px<= 50))
                {
                    estadoJuego=3;
                    window.close();
                }
            }

            // dibujo todo siempre cleareando todo antessssss
            window.clear();
            window.draw(map);
            window.draw(playersp);
            if(!hidden)
            {
                window.draw(jasonsp);
            }
            window.display();
        }
    }

    if(estadoJuego ==2)
    {
        sf::RenderWindow ventanaKilled(sf::VideoMode(550, 500), "JASON KILLED YOU");

        while (ventanaKilled.isOpen())
        {
            while (ventanaKilled.pollEvent(event))
            {

                if(event.type == sf::Event::Closed)
                    ventanaKilled.close();
            }
            ventanaKilled.clear();
            ventanaKilled.draw(deadsp);
            ventanaKilled.display();
        }
    }
    if(estadoJuego ==3)
    {
        sf::RenderWindow ventanaEscaped(sf::VideoMode(650, 500), "YOU WON");

        while (ventanaEscaped.isOpen())
        {
            while (ventanaEscaped.pollEvent(event))
            {

                if(event.type == sf::Event::Closed)
                    ventanaEscaped.close();
            }
             ventanaEscaped.clear();
             ventanaEscaped.draw(escsp);
             ventanaEscaped.display();
        }
    }
    return 0;
}
