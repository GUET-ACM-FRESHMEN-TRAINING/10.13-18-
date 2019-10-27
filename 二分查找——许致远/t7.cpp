#include<stdio.h>
int a[100010];
int main()
{
int n,k,i,j,v,mid,left,right,target;
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	for(i = 0; i < n - 1; i ++)
    {
        for(j = i+1; j < n; j ++)
        {
            if(a[i] > a[j])
            {
                v = a[i];
                a[i] = a[j];
                a[j] = v;
            }
        }
    }
	for(i=0; i<n-1; i++)
	{
		left=i+1;
		right=n;
		target=k-a[i];
		while(right>left)
		{
			mid=left+(right-left)/2;
			if(a[mid]==target)
			{
				printf("%d %d",a[i],a[mid]);
				return 0;
			}
			else if(a[mid]>target)
				right=mid;
			else
				left=mid+1;
		}
	}
	printf("No");
	return 0;
}

