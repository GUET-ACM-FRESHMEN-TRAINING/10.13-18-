#include<cstdio>
using namespace std;
int main()
{
    int a[101];
    int b[1010]={0};
    int n,s=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=1;i<=n;i++)
    {
        b[a[i]]=1;
    }
    for (int i=1;i<=1000;i++)
    {
        if (b[i]==1)s++;
    }
    printf("%d\n",s);
    for (int i=1;i<=1000;i++)
        if (b[i]==1)
            printf("%d ",i);
    return 0;
} 
