#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int vec[10];
    int i,num,suma=0;
    cout<<"Ingresa el numero";
    cin>>num;
    for(i=0;i<10;i++)
    {
        vec[i]=num;
        num++;
    }
      for(i=0;i<10;i++)
    {
        cout<<vec[i]<<endl;
    }
    cout<<endl;
    for(i=0;i<10;i++)
    {
        suma=suma+vec[i];
    }
    cout<<"Lasuma"<<suma;
    cout<<endl;
    for(i=9;i>=0;i--)
    {
        cout<<vec[i]<<endl;
    }
    return 0;
}
