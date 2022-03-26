#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long a;
		cin >> a;
		long* n;
		n = new long[a];
		long min = 100000000;
		long min1 = 100000000;
		int d = 0;
		int dd = 0;
		for (long i = 0; i < a; i++)
		{
			cin >> n[i];
		}
		for (long i = 0; i < a; i++)
		{
			if (min > n[i])
			{
				d = 1;
				min = n[i];
			}
		}
		for (long i = 0; i < a; i++)
		{
			if (min1 > n[i] && n[i] > min)
			{
				min1 = n[i];
				dd = 1;
			}
		}
		if (d == 1 && dd == 1)
		{
			cout << min << " " << min1 << endl;
		}
		else
		{
			cout << -1 << endl;
		}
	}
	return 0;
}