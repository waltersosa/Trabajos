/*
17. Figura en espejo: Una función recibe como parámetro un entero que indica las filas de una figura. 
Adicionalmente, recibe como parámetro un string que indica el relleno de la figura a dibujar. 
Por ejemplo, si filas es 4 y el relleno es 'o', la figura sería:

o

oo

ooo

oooo

ooo

oo

o


*/

#include <iostream>

using namespace std;

string relleno (int num_fil, string simbol)
{
   
   int beta = 1;
   int alpha;
    for (int h = 1; h <= num_fil; h++)
    {
        for (alpha = 1; alpha <= beta; alpha++)
        {
        cout<<simbol;
        }

    beta++;
    cout<<endl;
    }
    
    for (int h = num_fil - 1; h >= 1; h--)
    {
        for(alpha = h; alpha >=1; alpha--)
        {
        cout<<simbol;
        }
        cout<<endl;
    }
}

int main ()
{
    int num_fil;
    cout<<endl<<"Ingrese el número de las filas: ";
    cin>>num_fil;

    string simbol;
    cout<<endl<<"Ingrese el simbolo que desea que se imprima: ";
    cin>> simbol;   

    cout<<endl;
    relleno (num_fil, simbol);
    
    
    return 0;
}