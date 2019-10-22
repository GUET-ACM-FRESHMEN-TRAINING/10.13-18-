#include <stdio.h>
int main()
{
    int i,j,a[1000];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int flag=0;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            int z;
            if(a[j]>a[j+1])
            {
                z=a[j];
            a[j]=a[j+1];
            a[j+1]=z;
            }
        }
        if(a[j]%2!=0)
        {
           printf("%d ",a[j]);
        }
    }
    for(j=0;j<=9;j++)
    {
        if(a[j]%2==0)
            printf("%d ",a[j]);
    }
    return 0;
}
