include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

struct point{
    int x;//编号 
    int y;//分数 
};
point k[5001];

int comp(const point &a,const point &b){
    if(a.y>b.y) return 1;
    if(a.y<b.y) return 0;
    if(a.x<b.x) return 1; //成绩相同时，按照编号排序 
    return 0;
}
 
int main(){
    int n,m,i,tot,cnt=0;
    cin>>n;
    cin>>m;
    for(i=1;i<=n;i++){
        cin>>k[i].x;
        cin>>k[i].y;
    }
    sort(k+1,k+1+n,comp);
    tot=floor(m*1.5);//向下取整 
    
    for(i=tot+1;i<=n;i++){
        if(k[i].y==k[tot].y) cnt++;//找同分的情况 
        else break;
    }
    
    cout<<k[tot].y<<" "<<tot+cnt<<endl;
    for(i=1;i<=tot+cnt;i++){
        cout<<k[i].x<<" "<<k[i].y<<endl;
    }
    return 0;
}