#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long a, b;
		cin >> a >> b;
		long long  bcnn;
		long c, d;
		if (a < b)
		{
			c = a;
			d = b;
		}
		else
		{
			c = b;
			d = a;
		}
		while (c != 0)
		{
			long tg;
			tg = d % c;
			d = c;
			c = tg;
		}
		bcnn = a * b / d;
		cout << bcnn << " " << d << endl;
	}
	return 0;
}