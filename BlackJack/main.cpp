#include <iostream>
#include "Jugador.h"
#include "Carta.h"

using namespace std;
//variables globales


//funciones.h
void menu (int );
void bienvenida (int, char);
void CrearUsuario ();






//funciones cpp
void menu (int num_jugador) //Numero de jugadores. Maximo 3.
{
    while (num_jugador < 1 || num_jugador > 3)
    {
        cout << "Cuantos jugadores quieren ingresar a la sala: ";
        cin >> num_jugador;
        cout << endl;

        if (num_jugador > 3)
        {
            cout << "Maximo 3 jugadores ! " << endl;
        }
        else if (num_jugador < 1)
        {
            cout << "Elige entre 1, 2 o 3 jugadores" << endl;
        }

        system ("Pause");
        system ("cls");
    }
}


void bienvenida () 				//Portada
{
    cout <<"==========================================================================="<< endl;
    cout <<"=                                                                         ="<< endl;
    cout <<"=                               ~BLACKJACK~                               ="<< endl;
    cout <<"=                                                                         ="<< endl;
    cout <<"==========================================================================="<< endl;

}


void CrearUsuario (int num_jugador, Jugador jugadores[] ) 	//Se ingresa el nombre de usuario. ****Ese nombre lo tenemos que llevar a la class usuario*****
{
    //Se repite la cantidad de veces que se haya ingresado como num_jugador
    char nombre [20];

    for (int i = 0; i < num_jugador; i++)
    {
        cout << "Nombre de Usuario " << i + 1 ;
        cin >>  nombre ;
        Jugador jugador(nombre);
    }

    system("cls");

}







int main()
{
    int num_jugadores;
    Jugador jugadores[3]; // VER MEMORIA DINAMICA

    bienvenida ();
    menu(num_jugadores);
    CrearUsuario (num_jugadores, jugadores);


    system ("pause");
    return 0;
}
