#include <iostream>

using namespace std;
void recorrer(int vector[], int tam, int pos);
int main()
{
    int tam=25,i,pos;
    int vector[25]={1,2,2,2,2,3,1,1,1,2,4,4,4,2,5,5,2,2,3,3,3,4,4,4,5};
    for(i=0;i<25 && vector[i]!=-1;i++)
    {
        pos=i+1;
        while(pos<25 && vector[i]==vector[pos])
        {
            //12312415261-1 -1 -1 -1 -1 -1-1-1
            recorrer(vector, tam, pos);
            
        }
    }
    for(int i=0;i<24;i++)
    {
        cout<<vector[i];
    }
    return 0;
}
void recorrer(int vector[], int tam, int pos){
    for(int i=pos;i<tam-1;i++){
        vector[i]=vector[i+1];
        
    }
    vector[tam-1]=-1;

}
