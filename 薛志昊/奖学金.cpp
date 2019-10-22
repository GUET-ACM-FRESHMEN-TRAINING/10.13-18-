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
int n;
struct node
{
    int num,yuwen,shuxue,yingyu,score;
};
node student[500];
bool cmp(node a, node b)
{
    if (a.score!=b.score)
        return a.score>b.score;
    else
	{
        if(a.yuwen!=b.yuwen)
        	return a.yuwen>b.yuwen;
        else
		{
            return a.num<b.num;
        }
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
	{
        scanf("%d%d%d",&student[i].yuwen,&student[i].shuxue,&student[i].yingyu);
        student[i].num=i+1;
        student[i].score=student[i].yuwen+student[i].shuxue+student[i].yingyu;
    }
    sort(student,student+n,cmp);
    for(int i=0;i<5;i++)
        printf("%d %d\n",student[i].num,student[i].score);
    return 0;
}
