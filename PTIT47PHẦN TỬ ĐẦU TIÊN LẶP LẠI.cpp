#include<iostream>
#include<math.h>
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
		for (long i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int g = 0;
		for (long i = 0; i < n; i++)
		{
			for (long j = i + 1; j < n; j++)
			{
				if (a[i] == a[j])
				{
					int d = 0;
					for (int l = i; l < j; l++)
					{
						for (int p = l + 1; p < j; p++)
						{
							if (a[l] == a[p])
							{
								d = 1;
								break;
							}
						}
						if (d == 1)
						{
							break;
						}
					}
					if (d == 0)
					{
						g = 1;
						cout << a[i] << endl;
						break;
					}
				}
			}
			if (g == 1)
			{
				break;
			}
		}
		if (g == 0)
		{
			cout << -1 << endl;
		}
	}
	return 0;
}