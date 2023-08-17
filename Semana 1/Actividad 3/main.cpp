
#include <iostream>
#include <cstdlib>
#include <cstdio>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    // Inicialización de los bidones
    float bidonBanana = 20, bidonAnana = 35, bidonSandia = 44;
    // Contadores de ventas
    int vec_venta [3] = {};
    int codigoBatido, tipoVaso;
    float litrosDescontados = 0;


    cout << "Ingrese el código de batido (1: Banana, 2: Ananá, 3: Sandia): ";
    cin >> codigoBatido;
    while (codigoBatido != 0)
    {
        cout << "Ingrese el tipo de vaso (1: 150 ml, 2: 200 ml, 3: 300 ml): ";
        cin >> tipoVaso;
        if( codigoBatido == 1 && bidonBanana <= tipoVaso)
        { vec_venta [0]++;

            switch ( tipoVaso)
            {
            case 1:
                litrosDescontados = 0.15;
                bidonBanana -= litrosDescontados;
                break;
            case 2:
                litrosDescontados = 0.2;
                bidonBanana -= litrosDescontados;
                break;
            case 3:
                litrosDescontados = 0.3;
                bidonBanana -= litrosDescontados;
                break;
            }
        }
        else if ( codigoBatido == 2 && bidonAnana <= tipoVaso )
        { vec_venta [1]++;
            switch ( tipoVaso)
            {
            case 1:
                litrosDescontados = 0.15;
                bidonAnana -= litrosDescontados;
                break;
            case 2:
                litrosDescontados = 0.2;
                bidonAnana -= litrosDescontados;
                break;
            case 3:
                litrosDescontados = 0.3;
                bidonAnana -= litrosDescontados;
                break;
            }
        }
        else if ( codigoBatido == 3 && bidonBanana <= tipoVaso)
        { vec_venta [2]++;
            switch ( tipoVaso)
            {
            case 1:
                litrosDescontados = 0.15;
                bidonSandia -= litrosDescontados;
                break;
            case 2:
                litrosDescontados = 0.2;
                bidonSandia -= litrosDescontados;
                break;
            case 3:
                litrosDescontados = 0.3;
                bidonSandia -= litrosDescontados;
                break;
            }
        }



            cout << "Ingrese el código de batido (1: Banana, 2: Ananá, 3: Sandia): ";
            cin >> codigoBatido;
        } //while

        cout << "Cantidad de batido en bidon de Banana: " << bidonBanana << " litros. " << endl;
        cout << "Cantidad de batido en bidon de Anana: " << bidonAnana << " litros. " << endl;
        cout << "Cantidad de batido en bidon de Sandia: " << bidonSandia << " litros. " << endl;

        cout << "Ventas de Banana: " << vec_venta [0] << endl;
        cout << "Ventas de Anana: " << vec_venta [1] << endl;
        cout << "Ventas de Sandia: " << vec_venta [2] << endl;

        system ("pause");
        return 0;
    }
