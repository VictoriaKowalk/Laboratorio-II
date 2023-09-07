#ifndef MENU_H
#define MENU_H
#include "Usuario.h"

class Menu
{
    public:
        Menu();
        virtual ~Menu();
        void Bienvenida();
        int PedirJugadores();
        void CrearUsuario(int);
        /// void Opciones();
        Usuario usuarios[3]; /// VER POR QUÉ EN PRIVATE NO LO TOMA
    private:

};

#endif // MENU_H
