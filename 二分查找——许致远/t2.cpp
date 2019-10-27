#include <stdio.h>
double f(double x);
void ok(double a, double b);
int main()
{
    ok(1.5,2.4);
    return 0;
}
 
double f(double x)
{
    return  x*x*x*x*x - 15*x*x*x*x+ 85*x*x*x- 225*x*x+ 274*x - 121;
}
void ok(double a, double b)
{
    double mid,result;
    mid = (a + b) / 2;
    result = f(mid);
    if(result > 0.000001)
    {
        ok(mid,b);
    }
    else if(result < -0.000001)
    {
        ok(a,mid);
    }
    else
    {
        printf("%.6lf",mid);
    }
}
