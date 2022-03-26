#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n, x;
		cin >> n >> x;
		int dem = 0;
		for (int i = 0; i < n; i++)
		{
			long a;
			cin >> a;
			if (a == x)
			{
				dem++;
			}
		}
		if (dem != 0)
		{
			cout << dem << endl;
		}
		else
		{
			cout << -1 << endl;
		}

	}
	return 0;
}