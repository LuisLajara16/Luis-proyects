//Este programa calcula y muestra la a suma, resta, multiplicacióin y división de 2 números
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
    int suma;
    int resta;
    int multiplicacion;
    int division;
    printf( "Introduce primer numero " );
    cin>>num1;
    printf( "Introduce Segundo numero " );
    cin>>num2;
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;
    printf( "Resultados \n");
    printf( "La sumatoria.......... %i\n", suma );
    printf( "La resta.............. %i\n", resta );
    printf( "La multiplicacion..... %i\n", multiplicacion );
    printf( "La division........... %i\n", division );
    system ("PAUSE");
    return 0;
    }
    
