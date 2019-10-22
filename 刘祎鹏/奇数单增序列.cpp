#include <stdio.h>
int main()
{
    int n,i,j,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int flag=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            int z;
            if(a[j]<a[j+1])
            {
                z=a[j];
            a[j]=a[j+1];
            a[j+1]=z;
            }
        }
        if(a[j]%2!=0)
        {
            if(flag==0)
            {
                printf("%d",a[j]);
                flag=1;
            }
            else
            {
                printf(",%d",a[j]);
            }

        }

    }
    return 0;
}
