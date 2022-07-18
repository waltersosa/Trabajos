/*
Tamayo Obando Christian David.
*/
/*
Diseñe una función que calcule el resultado de la siguiente serie
(2!/5) + (3!/5^2) + (4!/5^3) + (5!/5^4) + (6!/5^5)......(N!/5^N-1)
*/
#include <math.h>
#include <iostream>

using namespace std;
int exponente(int z, int &y)
{
    int aux = 1;
    y = 1; 
    while (aux <= z)
    {
        y= y * 5;
        aux++;
    }
    return y;
}

double factorial (int x, double &w)
{
    int v = 1;
    w = 1;
    for (int aux = 1; aux < x; aux++)
    {
        v++;
        w = w * v;
    }
    return w;
}

double serie (int n)
{
    int u = 1;
    double resultado = 0;
    double cociente;
    int z = 1;
    int y = 5;
    int x = 2;
    double w;
    while (u<n)
    { 
        cociente = factorial(x,w) / exponente(z,y);
        resultado = resultado + cociente;
        u++;
        z++;
        x++;
    }
    return resultado;
}

int main ()
{
    cout<<endl<<"-----------------------------------------------------------------------";
    cout<<endl<<"Diseñe una función que calcule el resultado de la siguiente serie:";
    cout<<endl;
    cout<<endl<<"(2!/5) + (3!/5^2) + (4!/5^3) + (5!/5^4) + (6!/5^5)......(N!/5^N-1)";
    cout<<endl;
    cout<<endl<<"Ingrese el limite de la serie: ";
    int n;
    cin>>n;
    cout<<endl<<"El resultado de la serie es: "<<serie(n);
    cout<<endl<<"-----------------------------------------------------------------------";
    return 0;
}