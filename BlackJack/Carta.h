#include <string>
#ifndef CARTA_H
#define CARTA_H


class Carta{
    public:
        Carta();
        virtual ~Carta();
        int getValor();
        void mostrarCarta();

    private:
        int valor;
        int palo;
        std::string palos[4] = {"Picas", "Corazon","Trebol","Diamante"};
        std::string valores[13] = {"As","Dos","Tres","Cuatro", "Cinco", "Seis",
        "Siete", "Ocho", "Nueve", "Diez", "Jota", "Reina", "Rey"};
};

#endif // CARTA_H
