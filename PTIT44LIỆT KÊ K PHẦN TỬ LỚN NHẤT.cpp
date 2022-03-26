#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n, k;
		cin >> n >> k;
		long* a;
		a = new long[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < k; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i] < a[j])
				{
					int tg = a[i];
					a[i] = a[j];
					a[j] = tg;
				}
			}
		}
		for (int i = 0; i < k; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}