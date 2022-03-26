#include<iostream>
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
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long a, x, y;
		cin >> a >> x >> y;
		long long b = ucln(x, y);
		for (int i = 0; i < b; i++)
		{
			cout << a;
		}
		cout << endl;
	}
	return 0;
}