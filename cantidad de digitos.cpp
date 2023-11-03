#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    
   
    int numero, i = 0;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    do {
        numero = numero / 10;
        i++;
    } while (numero != 0);
  
    cout << "La cantidad de digitos es: "<< i << endl;
    return 0;
}
 



