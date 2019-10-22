#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<cmath> 
#include<cctype>
#include<iomanip>
using namespace std;
int a[100];
bool cmp(int a, int b)
{
    if(a%2==1&&b%2==0)
		return 1;
    else
	{
		if(a%2==0&&b%2==1)
			return 0;
    	else 
		{
        	if(a%2==0&&b%2==0)
				return a<b;
        	else 
				return a>b;
    	}
	}    
}
int main()
{
    for(int i=0;i<10;i++)
		scanf("%d",&a[i]);
    sort(a,a+10,cmp);
    for(int i=0;i<10;i++)
    	printf("%d ",a[i]);
    return 0;
}
