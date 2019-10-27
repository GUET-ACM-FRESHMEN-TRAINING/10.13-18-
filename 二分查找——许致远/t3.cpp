
#include<stdio.h>
#include <stdlib.h>
long long a[1000001],sa[1000001];
int R,n;
int BSearch(int l,int r){
	int mid;
	while(l<r){
		mid=l+(r-l)/2;
		if(2*sa[mid]>=sa[R])r=mid;
		else l=mid+1;
	}
	return l;
}
int main(){
	scanf("%d",&R);
	scanf("%d",&n);
	int L,T,W,H;
	for(int i=0;i<n;i++){
        scanf("%d%d%d%d",&L,&T,&W,&H);
		for(int j=1;j<=W;j++) a[L+j]+=H;
	}
	for(int i=1;i<=R;i++)
		sa[i]=sa[i-1]+a[i];
	int t=BSearch(1,R);
	while(t<R && sa[t+1]==sa[t])t++;
        printf("%d",t);
	return 0;
}
