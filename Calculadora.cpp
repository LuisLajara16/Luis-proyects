#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//calculadora
int main(){
     
    char operador;
    double a, b;
    cout<< "Ingresa un operador:\n+  - * / "<<endl;
    cin >>operador;
    cout<<"Ingrese 2 numeros: "<< endl;
    cin>> a >> b;
    switch (operador) {
        case '+':
            cout << a <<" + "<< b <<" = "<< a + b <<endl;
            break;
        case '-':
            cout << a <<" - "<< b <<" = "<< a - b <<endl;
            break;
        case '*':
            cout << a <<" * "<< b <<" = "<< a * b <<endl;
            break;
        case '/':
            cout << a <<" / "<< b <<" = "<< a / b <<endl;
            break;
        
            
        default:
            cout<<"Error operador incorrecto.....";
            break;
    }
    
    return 0;
}
 



