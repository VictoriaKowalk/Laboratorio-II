#include <iostream>
#include "Menu.h"
#include "Usuario.h"

Menu::Menu()
{
    //ctor
}

Menu::~Menu()
{
    //dtor
}

void Menu::Bienvenida () 				//Portada
{
    std::cout <<"==========================================================================="<< std::endl;
    std::cout <<"=                                                                         ="<< std::endl;
    std::cout <<"=                               ~BLACKJACK~                               ="<< std::endl;
    std::cout <<"=                                                                         ="<< std::endl;
    std::cout <<"==========================================================================="<< std::endl;

}

int Menu::PedirJugadores() //Numero de jugadores. Maximo 3.
{
    int cant_jugadores = 0;
    while (cant_jugadores < 1 || cant_jugadores > 3)
    {
        std::cout << "¿Cuantos jugadores quieren ingresar a la sala? ";
        std::cin >> cant_jugadores;
        std::cout << std::endl;

        if (cant_jugadores > 3)
        {
            std::cout << "Maximo 3 jugadores! " << std::endl;
        }
        else if (cant_jugadores < 1)
        {
            std::cout << "Elige entre 1, 2 o 3 jugadores" << std::endl;
        }
    }
    system ("Pause");
    system ("cls");
    return cant_jugadores;
}

void Menu::CrearUsuario(int cant_jugadores)
    ///Se ingresa el nombre de usuario. ****Ese nombre lo tenemos que llevar a la class usuario*****
    {
    ///Se repite la cantidad de veces que se haya ingresado como num_jugador
    char nombre[20];

    for(int i=0; i<cant_jugadores;i++)
    {
        std::cout<< "Nombre de Usuario: " << i + 1 << " ";
        std::cin>> nombre;
        Usuario usuario(nombre);
        usuarios[i] = usuario;
    }

    system("cls");
}
