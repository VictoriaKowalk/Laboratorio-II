#ifndef JUGADOR_H
#define JUGADOR_H


class Jugador
{
    public:
        Jugador(const char *);
        Jugador();
        virtual ~Jugador();
       // void tomarCarta(Carta::Carta);
        void mostrarMano();
        int calcularTotal();

    protected:
        //std::vector<Carta> mano;

    private:
        //int id;
        const char *_nombre;
};

#endif // JUGADOR_H

