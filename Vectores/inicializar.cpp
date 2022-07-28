#include <iostream>
using namespace std;

int main ()
{

//inicializar el vector en la declaración
int edades[5] = {10, 11, 45, 76, 1};
return 0;

//cambio un elemento del vector
edades[4]=11; //reemplaza el 1 por el 11

//imprimir todo el vector
int k;
for (k = 0; k<5; k++)
{
    cout<<endl<<"El elemento de la pisición "<<k << "es: "<< edades[k];
}

//declare un vector de string y agregue 7 nombres de ciudades. Luego imprima todo el vector.
string ciudadedodeus[7];
ciudadedodeus[1] = "Panama_City";
ciudadedodeus[2] = "Mexico_City";
ciudadedodeus[3] = "Santiago";
ciudadedodeus[4] = "Lima";
ciudadedodeus[5] = "La_Paz";
ciudadedodeus[6] = "Managua";
ciudadedodeus[7] = "Caracas";

for (int j; j<8; j++)
{
cout<<endl<<ciudadedodeus[k];
}
}