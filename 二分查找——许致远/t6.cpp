#include<stdio.h>
#include<string.h>
int n,m;
int a[100200];
int mid,tot=0,l=0,r;
void init() {
	scanf("%d%d", &n, &m);
	for (int i=1;i<=n;i++) {
		scanf("%d",&a[i]);
		tot+=a[i];
	}
	r = tot;
}
int check(int x) {
	int k=0;
	int p=0;
	for (int i=1;i<=n;i++) {
		k+=a[i];
		if (k>=x) {
			p++;
			if (a[i]<x)
			k=a[i]; else {return 1;}
		}
	}
	return p>=m;
}
void go() {
	while (l+1<r) {
		mid = (l+r)/2;
		if (check(mid)) l=mid; else r=mid;
	}
	printf("%d", l);
}
int main() {
	init();
	go();
	return 0;
}