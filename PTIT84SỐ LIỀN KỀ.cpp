#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		int x = n % 10;
		n /= 10;
		int d = 0;
		while (n > 0)
		{
			if (n % 10 == x + 1 || n % 10 == x - 1)
			{
				x = n % 10;
				n /= 10;
			}
			else
			{
				d = 1;
				cout << "NO" << endl;
				break;
			}
		}
		if (d == 0)
		{
			cout << "YES" << endl;
		}
	}
	return 0;
}