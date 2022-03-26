#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, m;
		cin >> a >> m;
		int x = 1;
		int d = 0;
		for (x; x < m; x++)
		{
			if (a * x % m == 1)
			{
				cout << x << endl;
				d = 1;
				break;
			}
		}
		if (d == 0)
		{
			cout << -1 << endl;
		}
	}
	return 0;
}