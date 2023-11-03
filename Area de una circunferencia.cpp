//Este programa calcula el area de una circunferencia
// Realizado por Luis Lajara
// Fecha: 29 de octubre 2023
// Modificaciones:
#include <stdio.h>
#include <iostream>
#include <math.h>
    using namespace std;
int main()
    {
    float Diametro;
    float Radio;
    int area;
    printf( "Introduce Diametro " );
    cin>>Diametro;
    Radio = Diametro / 2;
    area = M_PI * (Radio * Radio);
    printf( "    RESULTADOS:\n" );
    printf( "*******************\n" );
    printf( "Area de la circunferencia........... %i\n", area);
        system ("PAUSE");
    return 0;
    }
    
    

