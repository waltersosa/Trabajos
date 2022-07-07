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
     bool opo = true;
  for (int i = 1; i <= s; i++)
  {  
    if (opo == true)
    {
         suma = suma + i;     
    }
    else 
    {
         suma = suma - i;
    }
    opo = !opo;
  }
  cout<<endl<<suma;
  return suma;
}

int main ()
{
    int s;
    cout<<endl<<"Ingrese el limite de la suma ";
    cin>>s;
    Bucle (s);
    return 0;
}