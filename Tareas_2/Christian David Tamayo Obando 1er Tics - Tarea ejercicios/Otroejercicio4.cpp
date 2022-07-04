/*
4. Escriba la función que determina si un número pasado como parámetro es múltiplo de 5.
*/
#include <iostream>

using namespace std;

bool fede (int e)
{
    return e%5;
}

int main ()
{
    int e;
    cout<<endl<<"ingrese un número:";
    cin>>e;
    fede (e);
    if (e == 0)
    {
        cout<<endl<<"Es par";
    }
    else 
    {
       cout<<endl<<"Es impar";
    }
    return 0; 
}