#include "Jason.h"
#include <time.h>
#include "Personaje.h"

Jason::Jason(const std::string& arch):Personaje(arch)
{
    srand (time(0));
    this->setScale(0.5,0.5);
    unsigned int ix, iy;
    ix=rand() % 390 + 1;
    iy=rand() % 490 + 1;
    if(esObstaculo(ix,iy))
    {
        while(esObstaculo(ix,iy))
        {
            ix=rand() % 390 + 1;
            iy=rand() % 500 + 1;
        }
        this->setPosition(ix, iy);
    }
    else
    {
        this->setPosition(ix, iy);
    }
}
void Jason::mover(Jugador plyr)
{
    int px= plyr.getPosition().x;
    int py= plyr.getPosition().y;

    int jx=this->getPosition().x;
    int jy=this->getPosition().y;

///jx<px

    if(jx<px &&jy==py)
    {
        if(movimientoValido(0.05, 0))
        {
            this->move(0.05, 0);
        }
        else
        {
            if(movimientoValido(0, 0.05))
            {
                this->move(0, 0.05);
            }
            else if(movimientoValido(0, -0.05))
            {
                this->move(0, -0.05);
            }

        }
    }
    if(jx<px && jy<py)
    {
        if(movimientoValido(0.05, 0.05))
        {
            this->move(0.05, 0.05);
        }
        else
        {
            if(movimientoValido(0.05, -0.05))
            {
                this->move(0.05, -0.05);
            }
            else if(movimientoValido(-0.05, 0.05))
            {
                this->move(-0.05, 0.05);
            }
        }
    }
    if(jx<px && jy>py)
    {
        if(movimientoValido(0.05, -0.05))
        {
            this->move(0.05, -0.05);
        }
        else
        {
            if(movimientoValido(0.05, 0.05))
            {
                this->move(0.05, 0.05);
            }
            else if(movimientoValido(-0.05, -0.05))
            {
                this->move(-0.05, -0.05);
            }
        }
    }
///jx>px
    if(jx>px && jy == py)
    {
        if(movimientoValido(-0.05, 0))
        {
            this->move(-0.05 ,0);
        }
        else
        {
            if(movimientoValido(0, 0.05))
            {
                this->move(0, 0.05);
            }
            else if(movimientoValido(0, -0.05))
            {
                this->move(0, -0.05);
            }
        }
    }
    if(jx>px && jy<py)
    {
        if(movimientoValido(-0.05, 0.05))
        {
            this->move(-0.05, 0.05);
        }
        else
        {
            if(movimientoValido(-0.05, -0.05))
            {
                this->move(-0.05, -0.05);
            }
            else if(movimientoValido(0.05, 0.05))
            {
                this->move(0.05, 0.05);
            }
        }
    }
    if(jx>px && jy>py)
    {
        if(movimientoValido(-0.05, -0.05))
        {
            this->move(-0.05, -0.05);
        }
        else
        {
            if(movimientoValido(-0.05, 0.05))
            {
                this->move(-0.05, 0.05);
            }
            else if(movimientoValido(0.05, -0.05))
            {
                this->move(0.05, -0.05);
            }
        }
    }
///jy<py
    if(jy<py && jx==px)
    {
        if(movimientoValido(0, 0.05))
        {
            this->move(0, 0.05);
        }
        else
        {
            if(movimientoValido(0.05, 0))
            {
                this->move(0.05, 0);
            }
            else if(movimientoValido(-0.05, 0))
            {
                this->move(-0.05, 0);
            }
        }
    }
///jy>py
    if(jy>py && jx==px)
    {
        if(movimientoValido(0, -0.05))
        {
            this->move(0, -0.05);
        }
        else
        {
            if(movimientoValido(0.05, 0))
            {
                this->move(0.05, 0);
            }
            else if(movimientoValido(-0.05, 0))
            {
                this->move(-0.05, 0);
            }
        }
    }
}
Jason::~Jason()
{

}
