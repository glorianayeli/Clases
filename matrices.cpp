#include <iostream>
#include <stdio.h>
using namespace std;
void llenar(int matriz[] [5],int renglones);
void mostrar(int matriz[] [5], int renglones);
void llenarinverso(int matriz[] [5], int renglones);
void dprimaria(int matriz [][5],int renglones);
void dsecundaria(int matriz[][5],int renglones);
int main()
{
    int matriz[5][5];
    llenar(matriz,5);
    mostrar(matriz,5);
    cout<<endl;
    llenarinverso(matriz,5);
    mostrar(matriz,5);
    cout<<endl;
    dprimaria(matriz,5);cout<<endl;
    dsecundaria(matriz,5);
   
    return 0;
}
void llenar(int matriz[] [5],int renglones)
{
    int num=1;
    for(int r=0;r<5;r++)
    {
        for(int c=0;c<5;c++)
        {
            matriz[r][c]=num++;
        }
    }
}

void mostrar(int matriz [] [5], int renglones)
{
    for(int r=0;r<5;r++)
    {
        for(int c=0;c<5;c++)
        {
            cout<<matriz[r][c]<<"\t";
        }
    cout<<endl;
    }
}

void llenarinverso(int matriz[] [5], int renglones)
{
    int num=1;
    for(int c=4;c>=0;c--)
    {
        for(int r=4;r>=0;r--)
        {
            matriz[r][c]=num++;
        }
    }
}
void dprimaria(int matriz [][5],int renglones)
{
    for(int r=0;r<=4;r++)
    {
        cout<<matriz[r][r]<<"\t";
    }
}
void dsecundaria(int matriz[][5],int renglones)
{
     for(int c=4;c>=0;c--)
    {
            cout<<matriz[c][4-c]<<"\t";
    }
}
