/*
9. Diseñe la función que recibe como parámetro 1 entero positivo que indica una tabla de multiplicar. 
La función debe imprimir la tabla de multiplicar desde el 1 al 15. Por ejemplo:

5 x 1 = 5

5 x 2 = 10

5 x 3 = 15

...

...

5 x 15 = 75
*/


#include <iostream>

using namespace std;

int Bucle ( int j)
{
     int prod; 
     int opo;
    cout<<endl;
    cout<<endl<<"----------------";
    cout<<endl<< "La tabla del: "<< j;
    cout<<endl<<"----------------";
    cout<<endl;
  for (opo = 1; opo <= 15 ; opo++)
  {
    prod = opo * j;
    cout<<endl<<opo<<" * "<< j << " = " << prod; 
  }
  return 23;
}

int main ()
{
    int j;
    cout<<endl<<"Ingrese la tabla que desea: ";
    cin>>j;
    Bucle (j);
    cout<<endl;
    return 0;
}
