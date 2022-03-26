#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n;
		cin >> n;
		long* a;
		a = new long[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		long min = 10000000;
		long d;
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				int sum = a[i] + a[j];
				if (sum >= 0)
				{
					if (min > sum)
					{
						d = sum;
						min = sum;
					}
				}
				else
				{
					if (min > 0 - sum)
					{
						min = 0 - sum;
						d = sum;
					}
				}
			}
		}
		cout << d << endl;
	}
	return 0;
}