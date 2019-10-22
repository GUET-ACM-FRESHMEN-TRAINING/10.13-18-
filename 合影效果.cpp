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
int n;
struct xx
{
	char sex[10];
	float height;
}a[10001];
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	 	scanf("%s%f",&a[i].sex,&a[i].height);
	}
	for(int i=1;i<=n-1;i++)
	{
	  	for(int j=i;j<=n;j++)
	  	{
	  	 	if(a[i].height>a[j].height)
	  	 	{
	  	 	 	swap(a[i],a[j]);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
	   	if(a[i].sex[0]=='m')
	   	{
	   	 	printf("%.2f ",a[i].height);
		}
	}
	for(int i=n;i>=1;i--)
	{
	    if(a[i].sex[0]=='f')
	    {
	    	printf("%.2f ",a[i].height); 
		}
	}
	return 0;
}
