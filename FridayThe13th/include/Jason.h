#ifndef JASON_H
#define JASON_H
#include "Personaje.h"
#include "Jugador.h"

class Jason : public Personaje
{
    public:
        Jason(const std::string&);
        virtual ~Jason();
        void mover(Jugador plyr);
        ///bool movimientoValido(double, double);
    protected:
    private:
};

#endif // JASON_H
