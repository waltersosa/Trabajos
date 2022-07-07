/*
19. Una función recibe como parámetro un entero. 
La función debe imprimir este entero en su equivalente en hexadecimal(base 16).

*/
#include <iostream>

using namespace std;

int binar (int f)
{
if (f>1)
{
    binar(f/16);
}
if (f%16 < 10)
{
cout<<f%16;
}
if (f%16 == 10)
{
  cout<<"A";  
}
else if (f%16 == 11)
{
  cout<<"B";  
}
else if (f%16 == 12)
{
  cout<<"C";  
}
else if (f%16 == 13)
{
  cout<<"D";  
}
else if (f%16 == 14)
{
  cout<<"E";  
}
else if (f%16 == 15)
{
  cout<<"F";  
}
}


int main ()
{  
  cout<<endl<<"Ingrese un valor: ";
  int f;
  cin>>f;
  cout<<endl<<"Su hexadecimal es ";
binar (f);

    return 0;
}
