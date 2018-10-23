#include <stdio.h>
#include <iostream>
using namespace std;
#include <time.h>
#include <stdlib.h>
int lanzardado();
void llenarvector(int tablero[],int tam);
int main()
{
    srand(time(0));
    int tablero[101];
    int juno=0, jdos=0;
    llenarvector(tablero,101);
    while(juno<100&&jdos<100)
    {
        juno+=lanzardado();
        if(juno<100)
        {
            juno+=tablero[jdos];
        }
        jdos+=lanzardado();
        if(jdos<100)
        {
            jdos+=tablero[jdos];
        }
    }
    return 0;
}
int lanzardado()
{
    int dado=0;
    dado=rand()%6+1;
    return dado;
}
void llenarvector(int tablero[],int tam)
{
    for(int i=0;i<101;i++)
    {
        tablero[i]=0;
    }
    tablero[11]=28;
    tablero[16]=24;
    tablero[17]=50;
    tablero[19]=26;
    tablero[21]=35;
    tablero[43]=41;
    tablero[52]=24;
    tablero[70]=22;
    tablero[74]=26;
    tablero[22]=-20;
    tablero[18]=-12;
    tablero[36]=-16;
    tablero[75]=-45;
    tablero[78]=-29;
    tablero[83]=-75;
    tablero[93]=-53;
    tablero[96]=-27;
}
