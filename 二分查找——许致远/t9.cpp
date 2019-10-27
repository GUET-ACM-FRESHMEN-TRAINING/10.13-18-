#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
int main()
{
    double l, ll, rig, lef, mid, n, c;
    scanf("%lf%lf%lf", &l, &n, &c);
    if(l<1e-14)
    {
        printf("0.000\n");
        return 0;
    }
    ll=l*(1+n*c);
    lef=0.0;
	rig=asin(1.0);
    while(rig-lef>1e-14)
    {
        mid=(rig+lef)/2;
        if(ll*sin(mid)/mid<=l)
            rig=mid;
        else
            lef=mid;
    }
    printf("%.3lf\n", l/2*tan(lef/2));
    return 0;
}