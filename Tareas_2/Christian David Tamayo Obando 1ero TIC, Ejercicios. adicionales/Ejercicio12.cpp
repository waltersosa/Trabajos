/*
12. Diseñe la función que calcula la ecuación cuadrática, usando las fórmulas siguientes:

x1 = (-b+ raizCuadrada(b*b - 4*a*c))/(2*a)

x2 = (-b- raizCuadrada(b*b - 4*a*c))/(2*a)

Los valores a,b,c pasan como parámetros de la función.

x1 - x2 son parámetros por referencia que devuelven los resultados de la ecuación.

La función devuelve 1 si es una ecuación válida, y 0 si la ecuación no es válida.
*/

#include <iostream>
#include <math.h>

using namespace std; 

float cuadro (float &a, float &b, float &c, double &x1, double &x2)
{
    if (a==0)
    {
        return 0;
    }
    double discri;
    if (discri < 0)
    {
        return 0;
    }



    x1 = ( - b + sqrt((b*b - 4*a*c)))/(2*a);
    x2 = (-  b - sqrt((b*b - 4*a*c)))/(2*a);
    return 1;
}


int main ()
{
    float b;
    float a;
    float c;
    cin>>a;
    cin>>b; 
    cin>>c;
    double x2;
    double x1;

    int u = cuadro (a,b,c, x1, x2);
    if (u==1)
    {
    cout<<endl<<"La solución es "<<x1;
    cout<<endl<<"La solución es "<<x2;
    }
    else if (u==0)
    {
    cout<<endl<<"La ecuación es invalida porque el discriminate es negativo."; 
    }
    else
    {
    cout<<endl<<"No se puede dividir por 0";    
    }
   
    return 0;
}