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
int n,m,k,line,sum;
struct node
{
    int id;
    int score;
};
node a[10000];
bool cmp(node x,node y)
{
    if(x.score!=y.score) return x.score>y.score;
    else return x.id<y.id;
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
		scanf("%d%d",&a[i].id,&a[i].score);
    sort(a+1,a+n+1,cmp);
    k=m*1.5;
    line=a[k].score;
    for(int i=1;a[i].score>=line;i++)
        sum++;
    printf("%d %d\n",line,sum);
    for(int i=1;i<=sum;i++)
        printf("%d %d\n",a[i].id,a[i].score);
    return 0;
}
