#include <stdio.h>
#include <iostream>
using namespace std;
void llenar(int v[], int tam, int valor);
void mostrar(int vec[],int tam);
int sumar(int v[],int tam);
void mostrarinverso(int v[],int tam);
void girararriba(int v[],int tam);
void girarabajo(int v[],int tam);
void invertir(int v[], int tam);

int main()
{
    int vec[10];
    int num;
    cout<<"Ingresa el numero";
    cin>>num;
    llenar(vec,10,num);
    mostrar(vec,10);cout<<endl;
    cout<<sumar(vec,10)<<endl;
    mostrarinverso(vec,10);cout<<endl;
    girararriba(vec,10);cout<<endl;
    mostrar(vec,10);
    invertir(vec,10);cout<<endl;
    mostrar(vec,10);
    girarabajo(vec,10);cout<<endl;
    mostrar(vec,10);
    return 0;
}
void llenar(int v[], int tam, int valor)
{
    for(int i=0;i<tam;i++)
    {
        v[i]=valor;
        valor++;
    }
}
void mostrar(int vec[],int tam)
{
    for(int i=0;i<tam;i++)
    {
        cout<<vec[i]<<"\t";
    }
}
int sumar(int v[],int tam)
{
    int suma=0;
    for(int i=0;i<tam;i++)
    {
        suma=suma+v[i];
    }
    return suma;
}
void mostrarinverso(int v[],int tam)
{
    for(int i=tam-1;i>=0;i--)
    {
        cout<<v[i]<<"\t";
    }                                                      
}
void girararriba(int v[],int tam)
{
    int aux=v[0];
    for(int i=0;i<tam-1;i++)
    {
        v[i]=v[i+1];
    }
    v[tam-1]=aux;
}
void invertir(int v[], int tam)
{
    int i,j,aux;
    for(i=0,j=tam-1;i<tam/2;i++,j--)
    {
        aux=v[j];
        v[j]=v[i];
        v[i]=aux;
    }
}
void girarabajo(int v[],int tam)
{
    int aux=v[tam-1];
    for(int i=tam-1;i>0;i--)
    {
        v[i]=v[i-1];
    }
    v[0]=aux;
}
