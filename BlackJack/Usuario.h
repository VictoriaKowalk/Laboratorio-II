#ifndef USUARIO_H
#define USUARIO_H
#include "Jugador.h"

class Usuario:public Jugador
{
    public:
        Usuario();
        virtual ~Usuario();
        Doblar();
        Usuario(const char *);
        const char *_nombre; /// VOLVER A PONER A PRIVADO
        /// tiene que ser un vec de char [50]
    private:

};

#endif // USUARIO_H
