#include<stdio.h>
int main()
{
	int n,k,i,j,a[100];
	double b[100];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d%lf",&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(b[j]>b[j+1])
			{
				int z;
				double c;
				z=b[j];
				b[j]=b[j+1];
				b[j+1]=z;
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
		}
	}
	printf("%d %g",a[k-1],b[k-1]);
	return 0;
 }
