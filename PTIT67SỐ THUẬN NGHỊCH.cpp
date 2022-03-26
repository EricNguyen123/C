
#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long a;
		cin >> a;
		long long b = a;
		long long c = 0;
		while (b > 0)
		{
			c = c * 10 + b % 10;
			b /= 10;
		}
		if (a == c)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
	return 0;
}