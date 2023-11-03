//Este programa calcula el promedio de 5 numeros ...................
// Realizado por Luis Lajara
// Fecha: 29 de octubre 2023
// Modificaciones:
#include <stdio.h>
#include <iostream>
    using namespace std;
int main()
    {
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int suma;
    int promedio;
    printf( "Introduce primer numero " );
    cin>>num1;
    printf( "Introduce Segundo numero " );
    cin>>num2;
    printf( "Introduce Tercer numero " );
    cin>>num3;
    printf( "Introduce Cuarto numero " );
    cin>>num4;
    printf( "Introduce Quinto numero " );
    cin>>num5;
    suma = num1 + num2 + num3 + num4 + num5;
    promedio = suma / 5;
    printf( "Has tecleado los numeros:\n" );
    printf( "********************************************************************************-\n" );
    printf( "El primero............ %i\n", num1 );
    printf( "El segundo............ %i\n", num2 );
    printf( "El tercero............ %i\n", num3 );
    printf( "El tercero............ %i\n", num4 );
    printf( "El tercero............ %i\n", num5 );
    printf( "------------------------\n\n" );
    printf( "La sumatoria.......... %i\n", suma );
    printf( "El promedio.......... %i\n", promedio );
    system ("PAUSE");
    return 0;
    }
    
    
