#include <iostream>

using namespace std;

int main()
{
    cout<<"ejemplo bulce for ";
    cout<<"Tabla del 10 ";

    int tabla=10;
    for(int k=1; k<=10; k++)
    (
        cout<<endl<<tabla<< " X " << k << " = " <<(tabla * k));

    cout<<endl<<endl<<"tabla del 3";
    tabla=3;
    for(int k=1; k<=30; k+=2)
    {
        cout<<endl<<tabla<< " X " << k << " = " <<(tabla * k); 
    }
    return 0;
    
}