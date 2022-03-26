#include<iostream>
#include<math.h>
using namespace std;
long long ucln(long long a, long long b)
{
	while (a != 0)
	{
		long long tg = b % a;
		b = a;
		a = tg;
	}
	return b;
}
void program()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		long long bcnn = 1;
		for (int i = 2; i <= n; i++)
		{
			long long b, c;
			if (bcnn < i)
			{
				b = bcnn;
				c = i;
			}
			else
			{
				b = i;
				c = bcnn;
			}
			bcnn = bcnn * i / ucln(b, c);
		}
		cout << bcnn << endl;
	}
}
int main()
{
	program();
	return 0;
}