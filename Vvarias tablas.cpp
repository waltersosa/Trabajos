    /*
       Se pide por teclado un entero que represente una tabla de multiplicar.
       Se generaran tantas tablas de multilicar, hasta que la tabla ingresada 
       sea igual a 0

    */
#include <iostream>

using namespace std;

int main()
{
    cout<<"\n\nVarias tablas";
    int N;


    do (
        
        cout<<"Ingrese un número: " cin<<N);
    
        
    while (N > 0);
    for (int i=N; i==0; i++){
    cout<<"\n" << N << " X " << i<< " = " << (N * i);
        i++;
    }
}