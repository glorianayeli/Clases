#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;
int aleatorioliebre();
int aleatoriotortuga();
void gano(int liebre, int tortuga);

void histograma(int numero);

int main()
{
    int liebre=0,tortuga=0;
    srand(time(0));
    while(liebre<80&&tortuga<80)
    {
        liebre=liebre+aleatorioliebre();
        tortuga=tortuga+aleatoriotortuga();
        cout<<"Tortuga"<<"\t"<<tortuga<<"\t"<<"Liebre"<<"\t"<<liebre<<endl;
        
    }
    gano(liebre,tortuga);
}

int aleatorioliebre()
{
    int corre,camina;
    corre=1+rand()%10;

    if(corre==1||corre==2)
    {
        camina=0;
    }
    else if(corre==3||corre==4)
    {
        camina=9;
    }
    else if(corre==5||corre==6||corre==7)
    {
        camina=1;
    }
    else if(corre==8)
    {
        camina=-10;
    }
    else
    {
        camina=-2;
    }
    
    return camina;
}

int aleatoriotortuga()
{
    int corre, camina;
    corre=1+rand()%10;
    if(corre==1||corre==2||corre==3||corre==4)
    {
        camina=3;
    }
    else if(corre==5||corre==6||corre==7)
    {
        camina=-6;
    }
    else
    {
        camina=1;
    }
    
    return camina;
}

void gano(int liebre, int tortuga)
{
    if(tortuga>80&&liebre>80)
    {
        cout<<"Es empate";
    }
    if else (liebre>tortuga)
    {
        cout<<"gano la liebre";
    }
    else
    {
        cout<<"gano la tortuga";
    }
   
}
