#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

float funcion(float x);
void tabular(int inferiror, int superior);

int main()
{
    //cout<<funcion(2);
    int inferiror, superior,x;
    cout<<"Ingresa el valor minimo";cin>>inferiror;
    cout<<"Ingresa el valor maximo";cin>>superior;
    tabular(inferiror,superior);
    
    return 0;
}

float funcion(float x){

       if(x>0)
       {
           x=((pow(x,3)-(2*x))/(3.0*x))+(6*x);
           return x;
           
       }
       else
       {
           x=sqrt(pow(x,2)-x)/2.0;
           return x;
       }
   
}
void tabular(int inferiror, int superior){
    for(int x=inferiror;x<=superior;x++)
    {
        cout<<x<<"      "<<funcion(x)<<endl;
        
    }
}
