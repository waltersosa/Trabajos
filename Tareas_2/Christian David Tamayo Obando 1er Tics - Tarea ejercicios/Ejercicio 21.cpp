/*
21. Una función recibe como parámetro 3 enteros que indican el año, mes y día de una fecha 
cualquiera. La función debe devolver los días transcurridos desde esa fecha comparada con 
la fecha actual de la computadora.
*/
#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>

using namespace std;


int Dias( int &Y, int &M, int &D) 
{
    int day1 = Y * 365;  
int day2 = M * 30;

int sum = day1 + day2 + D; 


time_t years;
years = time (0);
tm * yea = localtime (&years); 

int ala = yea -> tm_year + 1900;
int y;
y = ala * 365;
int plus = y - day1;  //Los años en días, desde el año marcado hasta el actual.

time_t months = time (0);
tm * mot = localtime (&months); 

int ele = mot -> tm_mon + 1; 
int x;
x = ele * 30;
int sharp = x - day2; //Los meses en días, desde el mes marcado hasta el actual.

time_t deis = time (0);
tm * da = localtime (&deis); 

int olo = da -> tm_mday; 
int harp = olo - D; // Los días desde el marcado hasta el actual.

int dayf1 = plus + sharp + harp;
return dayf1;
}
 

int main() 
{
    int Y; 
    int M;
    int D;
    cout<<endl<<"Ingrese el año que desee: ";
    cin>>Y;
    cout<<endl<<"Ingrese el mes que desee: ";
    cin>>M;
    cout<<endl<<"Ingrese el día que desee: ";
    cin>>D;
  
   cout<<endl<<"Los dias transcurridos entre la fecha marcada y el día de hoy, son: "<< Dias(Y, M, D);
}
