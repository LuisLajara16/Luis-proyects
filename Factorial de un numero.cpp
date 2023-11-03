#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int i,numero,factorial = 1;

    cout<<"introduce un numero: ";
    cin>>numero;
    for (int i = 1; i <= numero; i++)
    {
        factorial = factorial * i;
    }
    cout <<"El factorial de "<<numero<<" "<< "es " <<factorial<<endl;
    return 0;
}




