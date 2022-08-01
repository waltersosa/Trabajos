#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
/*
Se tiene un vector de 50 números enteros.
Se pide buscar si un número cualquiera existe en el vector (devolver true or false).
Debes usar funciones y el vetor se debe llenar de manera aleatoria.
*/

//Asignación de números.

int num()
{
    int k;
    k = 1 + rand () % (49); 
    return k;  
}

bool buscar(int x[], int y, int TOTAL)
{
    for (int rar = 0; rar < TOTAL; rar++)
    {
        if (x[rar] == y)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    const int TOTAL = 50;
    int datos[TOTAL];
    int interrogante;
    for (int y = 0; y < TOTAL; y++)
    {
        datos[y]= num();
        cout<<endl<<"Los números asignados son: "<<datos[y]<<endl;
    }
    cout<<endl<<"Ingresa el número que deseas encontrar. ";
    cin>>interrogante;
    cout<<endl<<buscar(datos, interrogante,TOTAL);
    return 0;
}