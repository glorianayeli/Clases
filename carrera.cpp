#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int lanzardado();
int caminar();
int main()
{
    int corredor1=0,corredor2=0;
    srand(time(0));
    while(corredor2<100&&corredor1<100)
    {
        corredor1=caminar()+corredor1;
        corredor2=caminar()+corredor2;
        
        cout<<"Lugar corredor2"<<" "<<corredor2<<" "<<"\t"<<"Lugar corredor1"<<" "<<corredor1<<endl;
    }
   
    
    return 0;
}

int lanzardado(){
    
    int res=0;
    res=1+rand()%6;
    return res;
}

int caminar(){
    
    int cara=lanzardado();
    if(cara==3)
    return 1;
    if(cara==1||cara==2)
    return 2;
    else
    return 3;
    
}
