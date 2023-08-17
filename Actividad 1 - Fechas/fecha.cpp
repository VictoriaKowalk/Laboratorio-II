#include "Fecha.h"
#include <iostream>

    void Cargar(int dia, int mes, int anio)
{
        std :: cout<<"DIA: ";
        std :: cin>>dia;
        std :: cout<<"MES: ";
        std :: cin>>mes;
        std :: cout<<"ANIO: ";
        std :: cin>>anio;
    }

int Fecha::getDia()
{
    return _dia;
}

int Fecha::getMes()
{
    return _mes;
}

int Fecha::getAnio()
{
    return _anio;
}



bool Fecha:: es_valida (int dia, int mes, int anio)
{
    if (mes < 1 || mes > 12) return false; // si no esta entre 1 y 12 falso
    if (dia < 1 || dia > 31 ) return false;
    if (mes == 2)   // febrero puede ser biciesto
    {
        if( anio % 4 == 0 && ( anio % 100 !=0 || anio % 400 == 0) )   // Si es biciesto
        {
            if (dia > 29) return false; //
        }
        else    // año no biciesto
        {
            if (dia > 28) return false;
        }
    }
    if (mes ==4 || mes == 6 || mes== 9 || mes== 11)  // estos meses tienen 30 dias
    {
        if (dia >30) return false;
    }
    return true; // si pasa todas las validaciones
}




//Actividad 3
//Realizar un constructor que reciba tres parámetros llamados dia, mes y anio.
//El mismo debe almacenar la fecha sólo si la misma es válida. De lo contrario, debe asignar por defecto la
//fecha 1/1/2023.

Fecha::Fecha(int dia, int mes, int anio) // inicializo el constructor
{
    if (es_valida(dia, mes, anio))   //Si la fecha es válida, se asignan los valores
    {
        _dia = dia;
        _mes = mes;
        _anio = anio;
    }
    else   //Si no, se asigna la fecha por defecto
    {
        _dia = 1;
        _mes = 1;
        _anio = 2023;
    }
}

//Actividad 4
//Realizar un constructor que no reciba parámetros. El mismo debe asignar a la fecha el valor 1/1/2023.

Fecha ::Fecha(  )
{
    _dia = 1;
    _mes = 1;
    _anio = 2023;
}


//Actividad 5
//Hacer dos métodos privados llamados AgregarDia y RestarDia. El método AgregarDia debe aumentar en uno la fecha y el método RestarDia debe disminuir
//en uno la fecha. Tener en cuenta que los métodos deben tener en cuenta los cambios de mes y años si corresponde.
//Por ejemplo, si la fecha almacenada en el objeto es 30/04/2023 y se llama a AgregarDia, entonces la fecha debería cambiar a 01/05/2023.
//Por otro lado, si la fecha almacenada es 01/01/2024 y se llama a RestarDia entonces la fecha debería cambiar a 31/12/2023.
//Los métodos deben tener en cuenta los años bisiestos para los cálculos.

void Fecha::  AgregarDia (int dia, int mes, int anio)
{
    if ((dia >1 && dia < 27) || (dia ==29 && mes !=2))
    {
        _dia = dia +1;
        _mes = mes;
        _anio = anio;
    }
    else if (dia == 28 && mes ==2 && anio % 4 == 0 && ( anio % 100 !=0 || anio % 400 == 0)) // si es anio biciesto
    {
        _dia = dia +1;
        _mes = mes;
        _anio = anio;
    }
    else if ((dia == 28 && mes ==2) && (anio % 4 != 0 || ( anio % 100 ==0 || anio % 400 != 0)))      // Si no es año biciesto
    {

        _dia = 1;
        _mes = 3;
        _anio = anio;
    }
    else if ( dia == 29 && mes == 2)
    {
        _dia = 1;
        _mes = 3;
        _anio = anio;
    }
    else if (dia ==30 && (mes ==4 || mes == 6 || mes== 9 || mes== 11) )
    {
        _dia = 1;
        _mes = mes +1;
        _anio = anio;
    }
    else if (dia ==31 && (mes ==1 ||mes ==3 || mes == 5 || mes ==7 || mes== 8 || mes== 10 ) )
    {
        _dia = 1;
        _mes = mes +1;
        _anio = anio;
    }
    else if (dia ==31 && mes ==12)
    {
        _dia = 1;
        _mes = 1;
        _anio = anio +1;
    }


}



void Fecha::RestarDia (int dia, int mes, int anio)
{
    if (dia >1 && dia <=31)
    {
        _dia = dia -1;
        _mes = mes;
        _anio = anio;
    }
    else if (dia == 1 && (mes == 4|| mes == 6 || mes== 9 || mes== 11))     // meses de 30 y el mes anterior es de 31
    {
        _dia = 31;
        _mes = mes-1;
        _anio = anio;
    }
    else if (dia == 1 && (mes ==2 || mes == 5 || mes ==7 || mes== 8 || mes== 10 || mes == 12))      // Aca no me sirve el mes 3 porque pasa al mes 2
    {
        // y puede tener 28 o 29 dias
        _dia = 30;
        _mes = mes-1;
        _anio = anio;
    }
    else if (dia == 1 && mes ==3 &&  anio % 4 == 0 && ( anio % 100 !=0 || anio % 400 == 0))   // si es anio biciesto
    {
        _dia = 29;
        _mes = mes-1;
        _anio = anio;
    }
     else if (dia == 1 && mes ==3 &&  anio % 4 != 0 && ( anio % 100 ==0 || anio % 400 != 0))   // si NO anio biciesto
    {
        _dia = 28;
        _mes = mes-1;
        _anio = anio;
    }
     else if (dia == 1 && mes ==1)
    {
        _dia = 31;
        _mes = 12;
        _anio = anio -1;
    }

}
