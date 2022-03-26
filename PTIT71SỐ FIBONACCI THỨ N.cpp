#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		long long f = 1;
		long long ff = 1;
		if (n == 1 || n == 2)
		{
			cout << 1 << endl;
		}
		else
		{
			n -= 2;
			while (n--)
			{
				long long tg = ff;
				ff = ff + f;
				f = tg;
			}
			cout << ff << endl;
		}

	}
	return 0;
}