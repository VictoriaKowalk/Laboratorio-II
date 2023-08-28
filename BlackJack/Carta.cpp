#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "Carta.h"

Carta::Carta(int numero, std::string palo)  //constructor
{

}
    int Carta::getValor(){
         if (numero > 10) { // del 2 hasta el 10, la carta tiene su mismo valor. Las figuras valen 10.
            return 10;
        } else {
            return numero;
        }
    }

    void Carta::mostrarCarta(){
          std::cout << numero << " de " << palo << std::endl;
    }
Carta::~Carta()
{
    //destructor. ******No sé si lo necesitamos******
}
