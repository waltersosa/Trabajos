#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>

using namespace std;

int  Fernanda ()
{
int k;
srand(time(NULL));
k = 1 + rand () % (19);
//cout<<k<<endl;
return k;
}

void Jugar( int oportunidades) // Aqui empieza la función.
{
    int num;
    bool ganaste = false;

    int num2 = Fernanda();
    cout<<endl<<"*****************************************************";
    cout<<endl<<"*****************************************************";
    cout<<endl<<"El juego es adivinar el número correcto entre 20 y 1";
    cout<<endl<<"*****************************************************";
    cout<<endl<<"*****************************************************";

int j = 0;

 while (j < oportunidades && ganaste == false)
 {
    j++;
    cout<<endl<<"Oportunidad # "<<j;
    cout<<endl<<"ingresa el número ";
    cin>>num;;
    


    if (num == num2){
        
    ganaste = true;
    }
    else if (num < num2) {
        cout<<endl<<"Ingresa un número mayor";

    }
    else
    {
          cout<<endl<<"Ingresa un número menor";
    }
       
 } //Acá termina el bucle. 
 if (ganaste == true)
 {
    cout<<endl<<"Felicidades wachin, ganaste";
 }
 else 
 {
     cout<<endl<<"============================================";
    cout<<endl<<"Perdiste, eres más malo que el arquero del 9 de octubre";
     cout<<endl<<"============================================";
 }
}


//Si pierde el programa le pregunta que si desea volver a jugar.
//No debe estar el número aleatorio. 


int main()
{

    bool Otra;
    Fernanda;
    Jugar (3);
    cout<<endl<<"¿Desea jugar otra vez?";
    cout<<endl<<"0 = Si, 1 = No";
    cin>>Otra;
    if (Otra = false)
    {
        Jugar (3);
    }
    
    return 0;
}
