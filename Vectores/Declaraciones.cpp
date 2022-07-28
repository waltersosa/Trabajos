#include <iostream>
using namespace std;

int main ()
{
    //declaración de un vector
    int x [5];

    //iniciar el vector de manera natural
    x[0] = 10;
    x[1] = 20;
    x[2] = 18;
    x[3] = 19;
    x[4] = 18;
    x[5] = 17;
    x[6] = 16;
    //imprimir ciertos elementos del vector;
    cout<<endl<<"Elemento de una posición 0: "<<x[0];
    cout<<endl<<"Elemento de una posición 3: "<<x[9];

    //imprime todo vector
    cout<<endl<<"Imprimir todo el vector ";
    for (int k=0; k<8; k++)
    {
        cout<<" "<<x[k];
    }
    return 0;
}