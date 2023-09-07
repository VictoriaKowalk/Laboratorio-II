#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include "Jugador.h"

Jugador::Jugador(){
}

Jugador::~Jugador()
{
    //dtor
}

void Jugador::mostrarMano(){
    int i;
    for(i=0;i<getCantCartas();i++){
        _misCartas[i].mostrarCarta();
    }
}

void Jugador::calcularMano(){
    int total;
    int i;
    int valorCarta;
    bool hayAs;
    // DEBERIA MOSTRAR LOS 2 RESULTADOS 6+AS MOSTRAR 7 / 17 Y AHI EL USUARIO ELIGE QUE HACER
    for(i=0;i<getCantCartas();i++){
        valorCarta = _misCartas[i].getValor();
        if (valorCarta == 1){
            hayAs = true;
        }
        total+=valorCarta;
    }
    if (hayAs && total <= 11){
        total += 10;
    }
    setMano(total);
    if (hayAs){
        std::cout << "Tu mano es de " << total-10 << " y de " << total << std::endl;
    } else {
        std::cout << "Tu mano es de " << total << std::endl;
    }
}

void Jugador::setMano(int mano){
    _mano = mano;
}

void Jugador::repartirCartas(){
    Carta carta;
    _misCartas[0] = carta;
}

void Jugador::pedirCarta(){
    int indice;
    Carta nuevaCarta;
    indice = getCantCartas();
    _misCartas[indice] = nuevaCarta;
    cantCartas++;
}

Carta * Jugador::getMisCartas(){
    return _misCartas;
}

void Jugador::setPerdio(){
    perdio = true;
}

void Jugador::setPlantarse(){
    sePlanta = true;
}

int Jugador::getCantCartas(){
    return cantCartas;
}
