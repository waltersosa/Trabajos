#include <iostream>
using namespace std;

int main ()
{

//declarar
int notas[10];

//lectura de las notas del vector
for (int k = 0; k < 10; k++)
{
    cout<<endl<<"La nota del estudiante # " <<k+1<<" : ";
    cin>>notas[k]; 
}
//impresion 
cout<<endl<<"La nota de estudaiante.";
for (int k = 0; k < 10; k++)
{
    cout<<endl<<"La nota del estudiante # " <<k<<" es: ";
    cout<<notas[k]; 
}
//Calculara la sumatoria y promedio de las notas
//Imprimir el resultado
int y;
for (int pe = 0; pe <= 9; pe++)
{
    y += notas[pe];
}
cout<<endl<<"La suma de las notas es:"<<y<<endl<<"El promedio es de: "<<(double(y)/10);
return 0;

}