#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>

using namespace std;



const string currentDateTime( int Y, int M, int D) 
{
    int day1 = Y * 365;  
int day2 = M * 30;

int sum = day1 + day2 + D; 

    int ear;
    int outh;
    int ay;
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%m", &tstruct);
    cout<<endl;
     strftime(buf, sizeof(buf), "%Y", &tstruct);
    return buf;
}
 

int main() 
{
    int Y; 
    int M;
    int D;
    cout<<endl<<"Ingrese el año de nacimiento";
    cin>>Y;
    cout<<endl<<"Ingrese el mes de nacimiento";
    cin>>M;
    cout<<endl<<"Ingrese el día de nacimiento";
    cin>>D;
  cout<<currentDateTime(Y, M, D);
    getchar();
}
