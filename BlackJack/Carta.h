#ifndef CARTA_H
#define CARTA_H


class Carta
{
public:
    Carta();
    Carta (int numero, std::string palo);
    virtual ~Carta();
    int getValor();
    void mostrarCarta();

protected:

private:
    int numero;
    std::string palo;
};

#endif // CARTA_H
