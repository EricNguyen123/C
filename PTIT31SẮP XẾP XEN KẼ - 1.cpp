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
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0)
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
			else
			{
				for (int j = i + 1; j < n; j++)
				{
					if (a[i] > a[j])
					{
						int tg = a[i];
						a[i] = a[j];
						a[j] = tg;
					}
				}
			}
		}
		for (int j = 0; j < n; j++)
		{
			cout << a[j] << " ";
		}
		cout << endl;
	}
	return 0;
}