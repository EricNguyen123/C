#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int** a;
		a = new int* [n];
		for (int i = 0; i < n; i++)
		{
			a[i] = new int[m];
		}
		int** b;
		b = new int* [n];
		for (int i = 0; i < n; i++)
		{
			b[i] = new int[m];
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
				b[i][j] = 0;
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (a[i][j] == 1)
				{
					for (int i = 0; i < n; i++)
					{
						b[i][j] = 1;
					}
					for (int j = 0; j < m; j++)
					{
						b[i][j] = 1;
					}
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << b[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}