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
		int* a;
		a = new int[n];
		int j = 0;
		for (int i = 0; i < n; i++)
		{
			int b;
			cin >> b;
			if (b > 0)
			{
				a[j] = b;
				j++;
			}
		}
		int x = 1;
		while (1)
		{
			int d = 0;
			for (int i = 0; i < j; i++)
			{
				if (a[i] == x)
				{
					d = 1;
					break;
				}
			}
			if (d == 1)
			{
				x++;
			}
			else
			{
				break;
			}
		}
		cout << x << endl;
	}
	return 0;
}