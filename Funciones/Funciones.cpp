#include <iostream>
using namespace std;

/*
1) Una función recibe como parámetro 1 entero que indica el día de la Semana. 
La función debe devolver el nombre del día de la semana. Por ejemplo, si es 1, devuelve "LUNES"
*/

string Dia(int dia)
{
     

     string aux;
     if (dia==1)
aux = "Lunes ";
else if(dia==2)
aux = "Martes ";
else if(dia==3)
aux = "Miercoles ";
else if(dia==4)
aux = "Jueves ";
else if(dia==5)
aux = "Viernes ";
else if(dia==6)
aux = "Sabado ";
else if(dia==7)
aux = "Domingo ";

return aux;
}

/*
2) Escriba la función que devuelve el factorial de un número. 
El factorial se calcula solo si el número está entre 1 y 15. 
Si el número no está en este rango, la función devuelve -1.
*/

int factorial(int F)
{
    int i=1; 
if (F>=1 && F<=15)
    {  
        for (int x=1; x<=F;)
        {i=(x*i);
        x++;       
        }
     return i; 
    }   
else 
    {
        return -1;
    }
}

/*
3) Una función recibe como parámetro 1 entero que indica el número de filas de un rectángulo. 
Por ejemplo si la fila es 5, se imprimen 5 filas, como se muestra a continuación:

* * * * * * * * * *

* * * * * * * * * *

* * * * * * * * * *

* * * * * * * * * *

* * * * * * * * * *
*/

void filas (int r)
{int b = 1; 

    while(b<=r)
    {
        cout<<endl<<"***************************************************";
        b++;
    }
}

/*
4)Una función recibe como parámetro 1 entero que indica el mes de año. 
La función debe devolver el total de días que tiene ese mes. 
Por ejemplo, si el mes es 3, debe devolver 31. 
Si el mes es 6, debe devolver 30. 
Si el mes es 12 debe devolver 31. etc.
*/
string Numer(int H)

{
    string aux;
     if (H==1)
aux = "Tiene 31 días ";
else if(H==2)
aux = "Tiene 28 o 29 días ";
else if(H==3)
aux = "Tiene 31 días ";
else if(H==4)
aux = "Tiene 30 días ";
else if(H==5)
aux = "Tiene 31 días ";
else if(H==6)
aux = "Tiene 30 días ";
else if(H==7)
aux = "Tiene 31 días ";
else if(H==8)
aux = "Tiene 31 días ";
else if(H==9)
aux = "Tiene 30 días ";
else if(H==10)
aux = "Tiene 31 días ";
else if(H==11)
aux = "Tiene 30 días ";
else if(H==12)
aux = "Tiene 31 días ";
return aux;
}

int main()
{
    cout<<endl<<"Hoy es: " <<Dia (1); 
    cout<<endl<<"Hoy es: " <<Dia (2); 
    cout<<endl<<"Hoy es: " <<Dia (3); 
    cout<<endl<<"Hoy es: " <<Dia (4); 
    cout<<endl<<"Hoy es: " <<Dia (5); 
    cout<<endl<<"Hoy es: " <<Dia (6);
    cout<<endl<<"Hoy es: " <<Dia (7);  

   int z; 
   cout<<endl<<"Ingrese un valor: ";
   cin>>z;
   filas (z);

   int q;
   cout<<endl<<"Ingrese otro valor: ";
   cin>>q;
   cout<<endl<<"Su factorial es:" <<factorial (q);
   

   

   cout<<endl<<"Enero " <<Numer(1); 
   cout<<endl<<"Febrero " <<Numer(2); 
   cout<<endl<<"Marzo " <<Numer(3); 
   cout<<endl<<"Abril " <<Numer(4); 
   cout<<endl<<"Mayo " <<Numer(5); 
   cout<<endl<<"Junio " <<Numer(6); 
   cout<<endl<<"Julio " <<Numer(7);
   cout<<endl<<"Agosto " <<Numer(8); 
   cout<<endl<<"Septiembre " <<Numer(9);
   cout<<endl<<"Octube " <<Numer(10); 
   cout<<endl<<"Noviembre " <<Numer(11);
   cout<<endl<<"Diciembre " <<Numer(12);   

return 0;
}