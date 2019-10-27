#include <stdio.h>
#include <stdlib.h>
#define N 100000
int a[N];
int main(void)
{
    int n, m, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &m);
    while(m--) {
        int k, l = 0, r = n - 1, mid;
        scanf("%d", &k);
        if(k <= a[0]) {
             printf("%d\n", a[0]);
             continue;
        }
        if(k >= a[n - 1]) {
             printf("%d\n", a[n - 1]);
             continue;
        }
        while(l + 1 < r) {
            mid = (l + r) / 2;
            if(a[mid] > k) r = mid;
            else if(a[mid] < k) l = mid;
            else {
                 l = r = mid;
                 break;
            }
        }
        printf("%d\n", abs(a[l] - k) <= abs(a[r] - k) ? a[l] : a[r]);
    }
    return 0;
}