#include <stdio.h>
#include <iostream>
using namespace std;
int f(int x);
int main()
{
    for(int i=1;i<=10;i++)
        cout<<i<<"\t"<<f(i)<<endl;
        return 0;
}
int f(int x)
{
    if(x==1)
        return 0;
    else if(x==2)
        return 1;
    else if(x>2)
        return f(x-1)+f(x-2);
        
}
