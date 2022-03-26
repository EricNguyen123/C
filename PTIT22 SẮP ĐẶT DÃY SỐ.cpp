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
		long long* a;
		a = new long long[n];
		long long* b;
		b = new long long[n];
		for (int i = 0; i < n; i++)
		{
			b[i] = -1;
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[j] == i)
				{
					b[i] = i;
					break;
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << b[i] << " ";
		}
		cout << endl;
	}
	return 0;
}