#include<stdio.h>
int n,k; 
int a[10200];
int l=0, mid, r=0;
void init() {
	scanf("%d%d", &n, &k);
	for (int i=1;i<=n;i++) {
		double t;
		scanf("%lf", &t);
		a[i] = (float)(t*100.0);
		if (a[i]>r) r=a[i];
	} 
	r++;
}
int check(int x) {
	int ans=0;
	for (int i=1;i<=n;i++) {
		ans += a[i] / x;
	}
	if (ans>=k) 
             return 1;
        else return 0; 
}
void go() {
	while (l+1<r) {
		mid = (l+r)/2;
		if (check(mid)) l=mid; else r=mid;
	}
	printf("%.2lf", l / 100.0); 
}
int main() {	
	init();
	go();
	return 0;
}