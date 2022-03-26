#include<iostream>
#include<stdbool.h>
#include<math.h>
using namespace std;
bool nt(long n)
{
	for (long i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n;
		cin >> n;
		int k;
		cin >> k;
		int dem = 0;
		int d = 0;
		if (nt(n) == true)
		{
			if (k == 1)
			{
				cout << n << endl;
				d = 1;
			}
		}
		else
		{

			while (n % 2 == 0)
			{
				n /= 2;
				dem++;
			}
			if (k <= dem)
			{
				cout << 2 << endl;
				d = 1;
				continue;
			}

			for (long i = 3; i <= sqrt(n); i += 2)
			{
				while (n % i == 0)
				{
					dem++;
					n /= i;
				}
				if (k <= dem)
				{
					cout << i << endl;
					d = 1;
					break;
				}
			}
			if (d == 1)
			{
				continue;
			}
			if (n > 2)
			{
				dem++;
				if (k <= dem)
				{
					cout << n << endl;
					d = 1;
					continue;
				}

			}
		}
		if (d == 0)
		{
			cout << -1 << endl;
		}
	}
	return 0;
}