#include <iostream>

using namespace std;

int main()
{
    cout<<"\n\nEjemplo de bucle en la tabla del 9";

    int tabla=9;
    int i=i;
    while (i<=10)
    {
    cout<<"\n" << tabla << " X " << i<< " = " << (tabla * i);
        i++;
    }

 //Se pide por teclado un número entero que debe estar entre 1 y 20.
 //Este número repreenta la tabla de que el usuario desea generar.
 //Se pide con un bucle while la tabla de multiplicar. 
int num;
cout<<endl<<endl<<"Ingrese la tabla que deseas generar: ";
cin>>num;
if( !(num>=1 && num<=20) )
{
    cout<<endl<<"Rango no valido...";
    return 0; //Abandonar la ejecución del programa.

}

i=1;
while(i<=12)
{
   cout<<"\n" << num << " X " << i<< " = " << (num * i);
        i++; 
}
    return 0;
}