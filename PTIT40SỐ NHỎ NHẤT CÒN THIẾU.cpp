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
		int min = 100000000;
		for (long i = 0; i < a - 1; i++)
		{
			cin >> n[i];
			if (min > n[i])
			{
				min = n[i];
			}
		}
		while (1)
		{
			int d = 0;
			for (int i = 0; i < a - 1; i++)
			{
				if (min == n[i])
				{
					d = 1;
					min++;
					break;
				}
			}
			if (d == 0)
			{
				cout << min << endl;
				break;
			}
		}
	}
	return 0;
}