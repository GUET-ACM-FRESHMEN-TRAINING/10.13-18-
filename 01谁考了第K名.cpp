#include<bits/stdc++.h>
using namespace std;
int a[11],b[11];
int cmp(int q,int r)
{    return q>r;}
int main()
{ int m,i=0,j=9;
    for(m=0;m<10;m++)
    cin>>a[m];
    for(m=0;m<10;m++)
    {    if(a[m]%2==1)
        {b[i]=a[m];    i++;  }
          else    {b[j]=a[m];    j--;}}
            sort(b,b+i,cmp);
   sort(b+i,b+10);
   for(int k=0;k<10;k++)
   cout<<b[k]<<" ";
   return 0;
}
