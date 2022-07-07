/*
3. Escriba la función que determina si un número pasado como parámetro es par o impar.
*/

#include <iostream>

using namespace std;

int sama(int x)
{
    if (x %2 == 0)
    {
        cout<<endl<<"El número ingresado es par";
    }
    else 
    {
        cout<<endl<<"El número ingresado es impar";
    }
    return x;
}


int main ()
{
    int x; 
    cout<<endl<<"Ingrese un número: ";
    cin>>x;
    sama (x);
    return 0;
}