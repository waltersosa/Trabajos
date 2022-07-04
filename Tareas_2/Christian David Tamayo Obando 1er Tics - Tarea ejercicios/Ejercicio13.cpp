/*
13. Diseñe la función que devuelve el resultado de la siguiente serie:

1 - 2 + 3 - 4 + 5 - 6 + 7 - N

N es un parámetro que indica el límite de la serie

*/
#include <iostream>

using namespace std;

int Bucle ( int s)
{
     int suma; 
     int opo;
  for (opo = 0; opo <= s; opo++)
  {  
    if (opo %2 == 0)
    {
         suma = suma - opo;     
    }
    else 
    {
         suma = opo + suma;
    }
    
  }
  cout<<endl<<suma;
}

int main ()
{
    int s;
    cout<<endl<<"Ingrese el limite de la suma ";
    cin>>s;
    Bucle (s);
    return 0;
}