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
	char name[20];
	int score;
};
node student[20];
bool cmp(node a,node b)
{
	if(a.score>b.score)
	{
		return 1;
	}
	else
		if(a.score==b.score)
		{
			if(strcmp(a.name,b.name)<0)
				return 1;
			else
				return 0;
		}
	else
		return 0;
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s%d",&student[i].name,&student[i].score);
	}
	sort(student,student+n,cmp);
	for(int i=0;i<n;i++)
	{
		printf("%s %d\n",student[i].name,student[i].score);
	}
	return 0;
} 
