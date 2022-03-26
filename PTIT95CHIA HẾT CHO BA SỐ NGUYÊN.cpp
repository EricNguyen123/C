#include<iostream>
#include<cmath>
using namespace std;
long long ucln(long long x, long long y)
{
	long long a, b;
	if (x < y)
	{
		a = x;
		b = y;
	}
	else
	{
		a = y;
		b = x;
	}
	while (a != 0)
	{
		long long tg = b % a;
		b = a;
		a = tg;
	}
	return b;
}
long long bcnn(long long x, long long y)
{
	long long s;
	s = x * y / ucln(x, y);
	return s;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long x, y, z, a;
		cin >> x >> y >> z >> a;
		long long b;
		b = bcnn(x, y);
		b = bcnn(b, z);
		long long c, d;
		c = pow(10, a - 1);
		d = pow(10, a);
		long long e;
		e = c / b;
		long long f = e * b;
		if (f < c)
		{
			f = b * (e + 1);
			if (f < d)
			{
				cout << f << endl;
			}
			else
			{
				cout << -1 << endl;
			}
		}
		else
		{
			cout << f << endl;
		}
	}
}