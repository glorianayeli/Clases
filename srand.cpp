#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int lanzardado();
int main()
{
    srand(time(0));
    for(int x=1;x<=100;x++)
    {
        cout<<lanzardado()<<" ";
    }
    
    return 0;
}

int lanzardado(){
    
    int res=0;
    res=rand()%6+1;
    return res;
}
