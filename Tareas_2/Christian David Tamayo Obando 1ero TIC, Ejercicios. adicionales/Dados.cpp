#include <iostream>
#include <time.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int generarnum()
{
 int num = 1 + rand()%(6);
 return num;
}
void imprimirdado(int num)
{
if (num == 1)
{
cout<< "▄";
}
else if(num == 2)
{
cout<< "▄  ▄";
}
else if(num==3)
{
cout<< "▄  ▄  ▄";
}
else if(num==4)
{
cout<< "▄  ▄";
cout<<endl<< "▄  ▄";
}
else if(num==5)
{
cout<<endl<<"▄  ▄  ▄";
cout<<endl<<"  ▄ ▄";
}

else if(num==6)
{
cout<<endl<<"▄  ▄  ▄";
cout<<endl<<"▄  ▄  ▄"; 
}

}

bool valid(int dado1, int dado2)
{
    if (dado1==dado2)
    {
        cout<<endl<<"Feliciadades eres el gandor";
    }
    if ((dado1 + dado2) == 7 || (dado1 + dado2) ==1) 
    {
       cout<<endl<<"Feliciadades eres el gandor";
    }
    else 
    {
        cout<<endl<<"¡Perdiste!";
    }
}

int main ()
{
    srand (time (NULL)); 
    cout<<endl<<endl<<"Pulsa enter para lanzar los dados ";
    getch();
    cout<<endl; 
    int dado1 = generarnum();
    int dado2 = generarnum();
    cout<<endl<< " "<<dado1<<endl;
    imprimirdado(dado1), cout<<endl<<endl;
    cout<<endl<< " "<<dado2<<endl;
    imprimirdado(dado2), cout<<endl<<endl;


    valid(dado1, dado2);

cout<<endl<<"╔═══════════════╗";
cout<<endl<<"║ 10            ║";
cout<<endl<<"║    ♣     ♣    ║";                      
cout<<endl<<"║       ♣       ║";
cout<<endl<<"║    ♣     ♣    ║";                       
cout<<endl<<"║               ║";
cout<<endl<<"║    ♣     ♣    ║";
cout<<endl<<"║       ♣       ║";
cout<<endl<<"║    ♣     ♣    ║";
cout<<endl<<"║            10 ║";
cout<<endl<<"╚═══════════════╝";

cout<<endl<<"╔═══════════════╗";
cout<<endl<<"║ 10            ║";
cout<<endl<<"║    ♥     ♥    ║";
cout<<endl<<"║       ♥       ║";
cout<<endl<<"║    ♥     ♥    ║";
cout<<endl<<"║               ║";
cout<<endl<<"║    ♥     ♥    ║";
cout<<endl<<"║       ♥       ║";
cout<<endl<<"║    ♥     ♥    ║";
cout<<endl<<"║            10 ║";
cout<<endl<<"╚═══════════════╝";

cout<<endl<<"╔═══════════════╗";
cout<<endl<<"║ 10            ║";
cout<<endl<<"║    ♦     ♦    ║";
cout<<endl<<"║       ♦       ║";
cout<<endl<<"║    ♦     ♦    ║";
cout<<endl<<"║               ║";
cout<<endl<<"║    ♦     ♦    ║";
cout<<endl<<"║       ♦       ║";
cout<<endl<<"║    ♦     ♦    ║";
cout<<endl<<"║            10 ║";
cout<<endl<<"╚═══════════════╝";

cout<<endl<<"╔═══════════════╗";
cout<<endl<<"║ 10            ║";
cout<<endl<<"║    ♠     ♠    ║";
cout<<endl<<"║       ♠       ║";
cout<<endl<<"║    ♠     ♠    ║";
cout<<endl<<"║               ║";
cout<<endl<<"║    ♠     ♠    ║";
cout<<endl<<"║       ♠       ║";
cout<<endl<<"║    ♠     ♠    ║";
cout<<endl<<"║            10 ║";
cout<<endl<<"╚═══════════════╝";

    return 0; 
}



