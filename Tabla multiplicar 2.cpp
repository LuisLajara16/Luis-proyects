#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    
    // tabla de multiplicar
    int numero,numero2,contador = 1, resultado;
        
    cout<<"Ingrese un numero: ";
    cin>>numero;
    cout<<"Hasta que numero desea multiplicar? ";
    cin>> numero2;
    
    while (contador <= numero2) {
        
        resultado = numero * contador;
        cout<<numero<<" x "<< setw(2)<<contador<<" = "<<resultado<<endl;
        contador++;
        
    }
    
    return 0;
}
 



