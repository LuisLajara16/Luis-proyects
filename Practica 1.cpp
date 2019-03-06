#include <iostream>
#include <math.h> 
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
using namespace std; 
int main()

{
float costo, peso,precio,costo2;
string nombre,apellido, cedula;

programa:  
// cuando sea menor a 50
cout << "Calcular el costo de envio" << endl; 
cout << "Por favor introduzca su nombre (Primer nombre, Primer apellido): "<< endl;
cin >> nombre >>apellido;
cout << "Por favor introduzca su numero de cedula: "<< endl;
cin >> cedula;
cout << "introduzca el peso(en libras) y precio(en pesos) de la mercancia: "<< endl;
cin >> peso >> precio;

cout<<""<< endl<< endl;
if(peso < 50)
{ 
if(precio > 75 )
  { cout<< left << setw(13)<<"Nombre"<< left << setw(13)<<"Apellido"<< left<< setw(17)<<"Cedula"<< setw(9)<<"Peso"<< setw(15)<<"Precio"<< setw(10)<<"Costo" <<endl;
cout<< left<< setw(13)<<nombre<< left<< setw(13)<<apellido<< left << setw(17)<<cedula<< setw(9)<<peso<< setw(15)<<precio<< setw(12)<<"$0.0"<<endl;
  }
    else if(precio <=75 && precio >=50 )
  { cout<< left << setw(13)<<"Nombre"<< left << setw(13)<<"Apellido"<< left<< setw(17)<<"Cedula"<< setw(9)<<"Peso"<< setw(15)<<"Precio"<< setw(10)<<"Costo" <<endl;
cout<< left<< setw(13)<<nombre<< left<< setw(13)<<apellido<< left << setw(17)<<cedula<< setw(9)<<peso<< setw(15)<<precio<< setw(12)<<"$5.0"<<endl;

  }
    else if(precio <=50 && precio >=25 )
  { cout<< left << setw(13)<<"Nombre"<< left << setw(13)<<"Apellido"<< left<< setw(17)<<"Cedula"<< setw(9)<<"Peso"<< setw(15)<<"Precio"<< setw(10)<<"Costo" <<endl;
cout<< left<< setw(13)<<nombre<< left<< setw(13)<<apellido<< left << setw(17)<<cedula<< setw(9)<<peso<< setw(15)<<precio<< setw(12)<<"$10.0"<<endl;

  }
      else if(precio <=25 && precio >=0 )
  { cout<< left << setw(13)<<"Nombre"<< left << setw(13)<<"Apellido"<< left<< setw(17)<<"Cedula"<< setw(9)<<"Peso"<< setw(15)<<"Precio"<< setw(10)<<"Costo" <<endl;
cout<< left<< setw(13)<<nombre<< left<< setw(13)<<apellido<< left << setw(17)<<cedula<< setw(9)<<peso<< setw(15)<<precio<< setw(12)<<"$15.0"<<endl;

  }
}

// caso de que sea mayor 50

else if(peso >= 50)
{
costo2 = (25*(1-pow(1.01,(-9.21*peso))));

cout<< left << setw(13)<<"Nombre"<< left << setw(13)<<"Apellido"<< left<< setw(17)<<"Cedula"<< setw(9)<<"Peso"<< setw(15)<<"Precio"<< setw(10)<<"Costo" <<endl;
cout<< left<< setw(13)<<nombre<< left<< setw(13)<<apellido<< left << setw(17)<<cedula<< setw(9)<<peso<< setw(15)<<precio<< setw(12)<<costo2<<endl;


}
system("pause");
system("cls");
        goto programa;
}



