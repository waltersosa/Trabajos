/*
20. Una función recibe como parámetro 3 enteros que indican el año, mes y día del nacimiento de una persona. 
La función debe devolver la edad de la persona en años, meses y días. 
Debe investigar como capturar la fecha actual de la computadora.

*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>
#include <string>

using namespace std;


void Dias( int & Y, int & M, int & D, int & Yy2, int & Mm2, int & Dd2) 
{

time_t years;
years = time (0);
tm * yea = localtime (&years); 

int ala = yea -> tm_year + 1900;
int Yy1 = ala - Y;  //Los años en días, desde el año marcado hasta el actual.


time_t months = time (0);
tm * mot = localtime (&months); 

int ele = mot -> tm_mon + 1; //Los meses actuales.


time_t deis = time (0);
tm * da = localtime (&deis); 

int olo = da -> tm_mday;  // Los días actuales.

if (olo < D)
{ 
    if (ele < M)
    {
        Dd2 = (30 - D ) + olo;
        Mm2 = (12 - M ) + ele;
        Yy2 = Yy1 - 1;
    }
    else 
    {
        Dd2 = (30 - D ) + olo;
        Mm2 = ele - M - 1;
        Yy2 = Yy1;
    }
}
else 
{
       if (ele < M)
    {
        Dd2 = olo - D;
        Mm2 = (12 - M ) + ele;
        Yy2 = Yy1 - 1;
    }
    else 
    {
        Dd2 = olo - D;
        Mm2 = ele - M;
        Yy2 = Yy1;
    }
}
if (ele == M & olo < D) 
{
 Mm2 = 11;
 Yy2 = Yy2 - 1;
}
else if (ele == M & olo > D)
{
 Mm2 = 0;
}
}
 

int main() 
{
    int Y; 
    int M;
    int D;
    int Yy2 = 0;
    int Mm2 = 0;
    int Dd2 = 0; 
    cout<<endl<<"Ingrese el año en el que nació: ";
    cin>>Y;
    cout<<endl<<"Ingrese el mes en el que nació: ";
    cin>>M;
    cout<<endl<<"Ingrese el día en el que nació: ";
    cin>>D;
   
   Dias(Y, M, D, Yy2, Mm2, Dd2);
   if ( Mm2 == 0 & Dd2 == 0 )
   {
    cout<<endl<< "Su edad es de: "<< Yy2 << "/" << Mm2 << "/" << Dd2;
    cout<<endl;
    cout<<endl<< "==================="; 
    cout<<endl<< "¡FELIZ CUMPLEAÑOS!";
    cout<<endl<< "==================="; 
    cout<<endl<< "==================="; 
    cout<<endl<< "https://www.youtube.com/watch?v=FE_KnGLsX5c"; 

   }
   else 
   {
   cout<<endl<< "Su edad es de: "<< Yy2 << "/" << Mm2 << "/" << Dd2;  
   }
   return 0;
}