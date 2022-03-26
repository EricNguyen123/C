#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int* a;
		a = new int[n];
		int* b;
		b = new int[n];
		int j = 0;
		for (int i = 0; i < n; i++)
		{
			int e;
			cin >> e;
			int k = 0;
			for (int l = 0; l < j; l++)
			{
				if (e == a[l])
				{
					k = 1;
					b[l]++;
					break;
				}
			}
			if (k == 0)
			{
				a[j] = e;
				b[j] = 1;
				j++;
			}
		}
		int sum = 0;
		for (int i = 0; i < j; i++)
		{
			if (b[i] > 1)
			{
				sum += b[i];
			}
		}
		cout << sum << endl;
	}
	return 0;
}