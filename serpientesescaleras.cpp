#include <stdio.h>
#include <iostream>
using namespace std;
#include <time.h>
int lanzardado();
int main()
{
    srand(time(0));
    int tablero[101];
    int juno=0, jdos=0;
    while(juno<100&&jdos<100)
    {
        juno+=lanzardado();
        if(juno<100)
            juno+=v[jdos];
        jdos+=lanzardado();
        
        jdos+=tablero[jdos];
    }
    return 0;
}
int lanzardado()
{
    srand(time(0));
    dado=srand()%6+1;
    return dado;
}
