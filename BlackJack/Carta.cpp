#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "Carta.h"

Carta::Carta()  //constructor
{
    valor=rand() % 13 + 1; // Elige un valor entre 1 y 13 (para la carta)
    palo=rand() % 4 + 1; // Elige un valor entre 1 y 4 (para el palo)
}

Carta::~Carta()
{
    //destructor. ******No sé si lo necesitamos******
}

int Carta::getValor(){
    if (valor > 10) { // del 1 hasta el 10, la carta tiene su mismo valor. Las figuras valen 10.
        return 10;
    } else {
        return valor;
    }
}

void Carta::mostrarCarta(){
        std::cout << valores[valor-1] << " de " << palos[palo-1] << std::endl;
}
