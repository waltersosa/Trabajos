/*
24. Diseñe la función que recibe como parámetro 2 enteros y los devuelve intercambiados. 
Por ejemplo si num1=45 y num2=50, luego de llamar a la función num1 sería igual a 50 y num2 igual a 45.
*/

#include <iostream>

using namespace std;

void intercambio (int & a, int & b )
{
    int c;
    int d;
    c = b;
    d = a;

    a = c;
    b = d; 
}

int main ()
{
    int a;
    int b;
    cout<<endl<<"ingrese un valor para a: ";
    cin>>a;

    cout<<endl<<"ingrese un valor para b ";
    cin>>b;
    intercambio(a , b);
    cout<<"El nuevo valor de a es: " << a << " El nuevo valor de b es: " << b;
    return 0;
}