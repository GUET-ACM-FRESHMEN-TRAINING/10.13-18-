#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define max(a,b) ( ((a)>(b)) ? (a):(b) )
int n,m;
double a[10010];
double x,sum=0;
bool che(double x)
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        s+=(int)(a[i]/x);
    }
    return s>=m;
}
int main()
{
    scanf("%d%d",&n,&m);
    m++;
    for(int i=1;i<=n;i++)
    {
        scanf("%lf",&x);
        a[i]=x*x*3.141592653589;
        sum=max(sum,a[i]);
    }
    double l=0,r=sum,mid;
    while(l+0.000001<r)
    {
        mid=(l+r)/2;
        if(che(mid)>0) l=mid;
        else r=mid;
    }
    printf("%.3f",l);
    return 0;
}
