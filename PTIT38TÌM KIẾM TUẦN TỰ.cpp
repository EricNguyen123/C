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
		long* n;
		n = new long[a];
		for (long i = 0; i < a; i++)
		{
			cin >> n[i];
		}
		int d = 0;
		for (long i = 0; i < a; i++)
		{
			if (b == n[i])
			{
				d = 1;
				cout << i + 1 << endl;
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