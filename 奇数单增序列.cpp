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
int n,a[1000],x,sum;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
		scanf("%d",&x);
		if(x%2==1)
		{
			a[sum]=x;
			sum++;
		}
	}
	sort(a,a+sum);
	for(int i=0;i<sum-1;i++)
	{
		printf("%d,",a[i]);
	}printf("%d",a[sum-1]);
    return 0;
}
