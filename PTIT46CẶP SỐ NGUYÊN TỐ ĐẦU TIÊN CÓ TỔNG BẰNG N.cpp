#include<iostream>
#include<math.h>
#include<stdbool.h>
using namespace std;
bool nt(long x)
{

	for (long i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}
void xl(long n)
{
	int d = 0;
	for (long i = 3; i < n; i += 2)
	{
		if (nt(i) == true)
		{
			long m = n - i;
			if (m % 2 != 0)
			{
				if (nt(m) == true)
				{
					d = 1;
					cout << i << " " << m << endl;
					break;
				}
			}

		}
	}
	if (d == 0)
	{
		cout << -1 << endl;
	}
}
void xuly()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n;
		cin >> n;
		if (n % 2 == 0)
		{
			if (n == 4)
			{
				cout << 2 << " " << 2 << endl;
			}
			else
			{
				xl(n);
			}

		}
		else
		{
			long m = n - 2;
			if (nt(m) == true)
			{
				cout << 2 << " " << m << endl;
			}
			else
			{
				cout << -1 << endl;
			}

		}

	}
}
int main()
{
	xuly();

	return 0;
}