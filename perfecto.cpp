#include <stdio.h>
#include <iostream>
using namespace std;
void divisores(int numero);
void perfecto(int numero);
int main()
{
    int numero;
    cout<<"Ingresa el numero";
    cin>>numero;
    cout<<"Divisores:"<<endl;
    divisores(numero);
    perfecto(numero);
    return 0;
}
void divisores(int numero)
{
    int i;
    for(i=1;i<numero;i++)
    {
       if(numero%i==0)
       {
           cout<<i<<"\t";
       }
    }
}
void perfecto(int numero)
{
    int suma=0;
    for(int i=1;i<numero;i++)
    {
        if(numero%i==0)
            suma=i+suma;
    }
    if(suma==numero)
            cout<<"Es un numero perfecto";
}
