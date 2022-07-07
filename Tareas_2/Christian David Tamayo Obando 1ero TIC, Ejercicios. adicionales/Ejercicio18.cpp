/*
18. Una función recibe 3 números enteros. 
La función devuelve verdadero si uno de esos números es la suma de los otros dos.
*/
#include <iostream>

using namespace std;

bool comparador (int num1, int num2, int num3)
{

bool aux;

if (num1 == num2 + num3)
{
    aux = true;
}
else if (num2 == num1 + num3)
{
    aux = true;
}
else if (num3 == num2 + num1)
{
    aux = true;
}


if (aux == true)
{
cout<<endl<<"Verdadero";
}
else 
{
cout<<endl<<"Falso";
}
}

int main ()
{
    int num1;
    int num2;
    int num3;
    cout<<endl<<"Ingrese un número: ";
    cin>>num1;
    cout<<endl<<"Ingrese otro número: ";
    cin>>num2;
    cout<<endl<<"Ingrese otro número de nuevo: ";
    cin>>num3;

    comparador(num1, num2, num3);
    return 0;
}