#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int j = 0;
	int* a;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		int b;
		cin >> b;
		int d = 0;
		for (int l = 0; l < j; l++)
		{
			if (b == a[l])
			{
				d = 1;
				break;
			}
		}
		if (d == 0)
		{
			a[j] = b;
			j++;
		}
	}
	for (int i = 0; i < j; i++)
	{
		for (int l = i + 1; l < j; l++)
		{
			if (a[i] > a[l])
			{
				int tg = a[i];
				a[i] = a[l];
				a[l] = tg;
			}
		}
	}
	for (int i = 0; i < j; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}