#include <bits/stdc++.h>
using namespace std;
const int maxn=100005,maxm=10005;
int num[maxn];
int m,k,n;
int ans[maxm];




int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    sort(num,num+n);
    cin>>m;
    for(int t=0;t<m;t++){
        cin>>k;
        int i,s=0,e=n-1;
        while(1){
                if(k<num[0]) {ans[t]=num[0];break;}
        if(k>num[n-1]) {ans[t]=num[n-1];break;}

            i=(s+e)/2;
            if(num[i]==k) {ans[t]=k;break;}
            if(num[i]<k) s=i;
            if(num[i]>k) e=i;
            if((e-s)==1||s==e){
                if(k-num[s]<num[e]-k||k-num[s]==num[e]-k)
                ans[t]=num[s];
                if(k-num[s]>num[e]-k)
                ans[t]=num[e];

                break;
            }
        }


    }
    for(int i=0;i<m;i++){
        if(i!=m-1)
        cout<<ans[i]<<endl;
        else cout<<ans[m-1];
    }
    return 0;
}
