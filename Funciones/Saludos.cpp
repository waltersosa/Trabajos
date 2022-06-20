#include <iostream>
using namespace std;

/*Una función recibe como parametro entero que reperesnte un mes del año.
La función debe devolver el nomebre de ese mes,
Por ejemplo: Si se ingresa 6, la función debe deolver "junio"
*/
string mes(int mes)
{
     

     string aux;
     if (mes==1)
aux = "Enero";
else if(mes==2)
aux = "Febrero";
else if(mes==3)
aux = "Marzo";
else if(mes==4)
aux = "Abril";
else if(mes==5)
aux = "Mayo"; 
else if(mes==6)
aux = "Junio";
else if(mes==7)
aux = "Julio";
else if(mes==8)
aux = "Agosto"; 
else if(mes==9)
aux = "Septiembre";
else if(mes==10)
aux = "Octubre";
else if(mes==11)
aux = "Noviembre";   
else if(mes==12)
aux = "Diciembre";   
     return aux;
}



/*Una función recibe como parametro entero que reperesenta una taba de multiplicar.
La función debe imprimir la tabla de multiplicar.
Desde el main llame tres veces a esta función"
*/

int Tabla (int num);
{

cout<<endl<<"Ingrese una tabla: " << num;
for (int i=1, i<=10, i++)
{
cout<<endle<<num<< "x" << i<< " = " <<(num*1);

}
}

/*
Diseñe la función que envia un saludo
*/
void saludo(string nombre, string genero)
{
cout<<endl<<"++++++++++++++++++++++++++++++++++++";
cout<<endl<<"+++++++++ Hola "<<nombre<<" ++++++++++"; 
if (genero=="m")
cout<<endl<<"++++ Bienvenido a la pucese +++++++++";
else
cout<<endl<<"++++ Bienvenida a la pucese +++++++++";


cout<<endl<<"++++++++++++++++++++++++++++++++++++";
}

int main()
{
    cout<<endl<<"Ejemplo de una función que no devuelve valores";
    saludo("Juan", "m");
    cout<<endl;
    saludo("Marta","f");

cout<<endl<<"EL primer mes es: " <<mes (1); 

cout<<endl<<"EL segundo mes es: " <<mes (2); 
 
cout<<endl<<"EL tercer mes es: " <<mes (3);   

cout<<endl<<"EL cuarto mes es: " <<mes (4); 

cout<<endl<<"EL quinto mes es: " <<mes (5); 
 
cout<<endl<<"EL sexto mes es: " <<mes (6);   

cout<<endl<<"EL septimo mes es: " <<mes (7); 

cout<<endl<<"EL octavo mes es: " <<mes (8); 
 
cout<<endl<<"EL noveno mes es: " <<mes (9);   

cout<<endl<<"EL decimo mes es: " <<mes (10); 

cout<<endl<<"EL onceavo mes es: " <<mes (11); 
 
cout<<endl<<"EL doceavo mes es: " <<mes (12);   
   
   
   
   
cout<<endl<<Tabla(4);
   
cout<<endl<<Tabla(2);
      
cout<<endl<<Tabla(6);
   


 return 0; 

}
