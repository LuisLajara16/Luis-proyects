#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    // tabla de multiplicar
    int numero,numero2,contador = 1, tabla;
        
    cout<<"Ingrese un numero: ";
    cin>>numero;
    cout<<"Hasta que numero desea multiplicar? ";
    cin>> numero2;
    
    while (contador <= numero2) {
        
        tabla = numero * contador;
        cout<<numero<<" x "<<contador<<" = "<<tabla<<endl;
        contador++;
        
    }
    
    return 0;
}
 



