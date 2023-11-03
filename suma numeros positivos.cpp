#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    //numeros del 1 al 10
    int numero, suma = 0;
    cout<<"Ingrese un numero: ";
    cin>> numero;
    while (numero >=0) {
        suma += numero;
        cout<<"Ingrese mas numeros: ";
        cin>>numero;
        
    }
    cout<<"la suma es: "<<suma<<endl;
    return 0;
}
 



