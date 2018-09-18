#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int lanzardado();
int main()
{
    srand(time(0));// sirve para que se plante una semilla y no salga el mismo numero en rand(); el srand se planta una sola vez por programa
    for(int x=1;x<=100;x++)
    {
        cout<<lanzardado()<<" ";
    }
    
    return 0;
}

int lanzardado(){
    
    int res=0;
    res=1+rand()%6;
    return res;
}
