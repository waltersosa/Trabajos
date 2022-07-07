/*
7. Diseñe la función que determina la cantidad de cifras que tiene un número entero - 
este entero pasa como parámetro. Por ejemplo:

si el número es 12 tiene 2 cifras

si el número es 157 tiene 3 cifras

si el número es 999 tiene 3 cifras

si el número es 15000 tiene 5 cifras. 

si el número es -145 tiene 3 cifras

*/
#include <iostream>

using namespace std;

int contador (int a)
{
int aux = 1;
if (a < 0)
{
    a = a * -1;
}
while (a >= 10)
{
    a = a/10;
    aux++;
}
cout<<endl<<"El valor que ingresó tiene "<<aux<<" cifras.";
} 

int main()
{
    int a;
    cout<<endl<<"Ingrese un valor entero: ";
    cin>>a; 

    contador(a); 
    return 0;
}