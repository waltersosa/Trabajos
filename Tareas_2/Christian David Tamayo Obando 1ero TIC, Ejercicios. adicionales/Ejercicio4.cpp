/*
4. Escriba la función que determina si un número pasado como parámetro es múltiplo de 5.
*/
#include <iostream>

using namespace std;

int sama(int x)
{
    if (x %5 == 0)
    {
        cout<<endl<<"El número ingresado es multiplo de 5";
    }
    else 
    {
        cout<<endl<<"El número ingresado no es multiplo de 5";
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