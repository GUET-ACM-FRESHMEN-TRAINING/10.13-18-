#include <bits/stdc++.h>  
using namespace std;  
  
int jsz[10];
int osz[10]; 
int sz[10];   
  
int k=0,n=0;  
int i,j;  
  
int main()  
{  
    for(i=0; i<10; i++)  
    {  
        cin>>sz[i];  
        if(sz[i]%2==1) //����������Ϊ������������������������� 
        {  
            jsz[k]=sz[i];  
            k++;  
        }  
        if(sz[i]%2==0)  //����������Ϊż�������������ż�������� 
        {  
            osz[n]=sz[i];  
            n++;  
        }  
    }  
  
    for(i=0; iosz[j+1])  
            {  
                int t;  
                t=osz[j];  
                osz[j]=osz[j+1];  
                osz[j+1]=t;  
            }  
        }  
    }  
  
    for(i=0; i
