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
int n,k;
struct node
{
    int id;
    double score;
};
node a[10000];
bool cmp(node x,node y)
{
    if(x.score!=y.score) return x.score>y.score;
    else return x.id>y.id;
}
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
		scanf("%d%lf",&a[i].id,&a[i].score);
    sort(a+1,a+n+1,cmp);
	printf("%d %.1lf",a[k].id,a[k].score);
    return 0;
}
