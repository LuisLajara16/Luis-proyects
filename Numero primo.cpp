#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int numero, i = 0;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    for (int x = 1; x <= numero; x++)
    {
        if (numero % x == 0)
        {
            i++;
        }
    }
    if (i == 2)
    {
        cout<<"Numero primo."<<endl;
    }
    else 
    {
        cout<<"No es numero primo."<<endl;
    }
    return 0;
}




