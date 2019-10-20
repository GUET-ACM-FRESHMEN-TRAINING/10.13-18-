#include<bits/stdc++.h> 
using namespace std;
 
const int M = 100;
string ID[M];
int Age[M], Old[M];
 
int main()
{
	int n;
	cin >> n;
	for (int i=0; i<n; i++)
		cin >> ID[i] >> Age[i];
	//��ȡ��һ����������� 
	int f = 0;
	while (f < n && Age[f] < 60)
		f++;
	Old[0] = f;
	
	int len = 1, low, high, mid;
	for (int i=f+1; i<n; i++)//�������˲������򣨴洢��ţ� 
	{
		if (Age[i] >= 60)
		{
			low = 0;
			high = len-1;
			while(low <= high) //�۰���Ҳ���λ��
			{
				mid = (low + high)/2;
				if (Age[Old[mid]] < Age[i])
					high = mid - 1;
				else
					low = mid + 1;
			}
			for (int j=len++; j>low; j--)
		    {
				Old[j] = Old[j-1];
		    }
		    Old[low] = i; //�������i 
		}
	}
	
	if (f == n)//ȫ�������� 
	{
		for (int i=0; i<n; i++)//��������� 
			cout << ID[i] << endl;
	}
	else if (len == n)//ȫ�������� 
	{
		for (int i=0; i<len; i++)//��������� 
			cout << ID[Old[i]] << endl;
	}
	else 
	{
		for (int i=0; i<len; i++)//��������� 
			cout << ID[Old[i]] << endl;
		for (int i=0; i<n; i++)//��������� 
		{
			if (Age[i] < 60)
				cout << ID[i] << endl;
		}
	}
	
    return 0;
}
