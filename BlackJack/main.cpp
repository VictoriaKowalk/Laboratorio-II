#include <iostream>
#include "Menu.h"

using namespace std;

int main()
{
    Menu menu;
    int cant_jugadores;

    menu.Bienvenida();
    cant_jugadores = menu.PedirJugadores();
    menu.CrearUsuario(cant_jugadores);
    for(int i=0;i<cant_jugadores;i++){
        cout << menu.usuarios[i]._nombre;
    }

    for(int i=0;i<cant_jugadores;i++){
        menu.usuarios[i].repartirCartas();
        menu.usuarios[i].mostrarMano();
    }
    system ("pause");
    return 0;
}
