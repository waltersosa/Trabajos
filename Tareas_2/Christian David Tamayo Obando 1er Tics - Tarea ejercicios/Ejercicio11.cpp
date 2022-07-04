/*
11. Diseñe la función que recibe como parámetro un entero N comprendido 1 y 10. 
La función debe imprimir las tablas de múltiplicar desde el 1 a N. 
Por ejemplo, si N=3, se imprimirá:

Tabla del 1

1 x 1 = 1

1 x 2 = 2

...

1 x 10 = 10



Tabla del 2

2 x 1 = 2

2 x 2 = 4

...

2 x 10 = 20



Tabla del 3

3 x 1 = 3

3 x 2 = 3

...

3 x 10 = 30
*/

#include <iostream>

using namespace std;

int Bucle ( int j)
{
     int prod; 
     int opo;
  for (opo = 1; opo <= j; opo++)
  {  
    cout<<endl;
    cout<<endl<< "La tabla del: "<< opo;
    for (int lu = 1; lu <= 10; lu++)
    {
      prod = lu * opo;
      cout<<endl<< lu << " * "<< opo << " = " << prod;
    }
    cout<<endl<<"----------------";
  }
}

int main ()
{
    int j;
    cout<<endl<<"Ingrese el limite de las tablas: ";
    cin>>j;
    Bucle (j);
    return 0;
}