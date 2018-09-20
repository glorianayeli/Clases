#include <stdio.h>
#include <iostream>
using namespace std;

void histograma(int numero);

int main()
{
   histograma(5);
   histograma(10);
}

void histograma(int numero)
{
    for(int i=1; i<=numero; i++)
    {
        cout<<"*";
    }
    cout<<endl;
}
