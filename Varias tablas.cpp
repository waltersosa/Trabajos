#include <iostream>

using namespace std;

int main()
{
    /*
       Se pide por teclado un entero que represente una tabla de multiplicar.
       Se generaran tantas tablas de multilicar, hasta que la tabla ingresada 
       sea igual a 0

    */
int num;
cout<<endl<<endl<<"Ingrese la tabla que deseas generar: ";
cin>>num;
while ( num>=0 )
{
int tabla=num;
    int i=1;
    while (i<=10)
    {
    cout<<"\n" << tabla << " X " << i<< " = " << (tabla * i);
        i++;
}
    return 0;
}
}