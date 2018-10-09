#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int lanzardado();
int main()
{
    int vec[6]={0};
    int dado,uno=0,dos=0,tres=0,cuatro=0,cinco=0,seis=0;
    srand(time(0));// sirve para que se plante una semilla y no salga el mismo numero en rand(); el srand se planta una sola vez por programa
    for(int x=1;x<=100;x++)
    {
        dado=lanzardado();
            vec[dado-1]++;

    }
    
    for(int x=0;x<6;x++)
    {
        cout<<"Valores en "<<x+1<<"\t"<<vec[x]<<endl;
    }
    /*cout<<"Valores en 2"<<"\t"<<vec[1]<<endl;
    cout<<"Valores en 3"<<"\t"<<vec[2]<<endl;
    cout<<"Valores en 4"<<"\t"<<vec[3]<<endl;
    cout<<"Valores en 5"<<"\t"<<vec[4]<<endl;
    cout<<"Valores en 6"<<"\t"<<vec[5]<<endl;*/
    return 0;
}

int lanzardado(){
    
    int res=0;
    res=1+rand()%6;
    return res;
}
