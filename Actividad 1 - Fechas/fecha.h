#ifndef FECHA_H
#define FECHA_H


class Fecha
{
private: // atributos o propiedades
    int _dia, _mes, _anio;
    bool es_valida (int dia, int mes, int anio); // para validar la fecha
    void AgregarDia(int dia, int mes, int anio);
    void RestarDia(int dia, int mes, int anio);

public: // metodos
    Fecha();
    Fecha(int dia, int mes, int anio); //Constructor
    Fecha (int dias_agregar);
    void Cargar(int dia, int mes, int anio);


    int getDia(); // Geter para obtener sus valores
    int getMes ();
    int getAnio ();
    void AgregarDias (int dias_agregar);

   /*) void setDia (int dia);
    void setMes (int mes);
    void setAnio (int anio);*/

};

#endif // FECHA_H

