#include <iostream>
using namespace std;

int cuadrado (int num)
{
/*
int num * num;
return x;
*/
return (num * num);
}

int main ()

{
    cout<<endl<<"Ejercicios con funciones";
    cout<<endl<<"Función que compruebe el cuadrado de un número.";
    cout<<endl<<"El cuadrado de 10 es "<<cuadrado (10);
    cout<<endl<<"El cuadrado de 12 es "<<cuadrado (12);
    
int n = cuadrado (20);
n+=2;
cout<<endl<<"El valor de n: "<<n;

int x; 
cout<<endl<<"Ingresa un entero";
cin>>x; 
cout<<endl<<"El cuadrado de " << x << " es " <<cuadrado (x); 

return 0; 
}