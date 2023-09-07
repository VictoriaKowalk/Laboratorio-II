#ifndef JUGADOR_H
#define JUGADOR_H
#include <vector>
#include "Carta.h"


class Jugador
{
    public:
        Jugador();
        virtual ~Jugador();
        void pedirCarta();
        void plantar();
        void repartirCartas();
        void mostrarMano();
        void calcularMano();
        void setMano(int);
        void setPerdio();
        void setPlantarse();
        int getCantCartas();
        Carta * getMisCartas();
    private:
        //int id;
        Carta miCarta;
        int cantCartas=0;
        Carta _misCartas[20];
        int _mano;
        bool perdio;
        bool sePlanta;
};

#endif // JUGADOR_H
