#include<iostream>
using namespace std;
int main()
{
	int n, m, p;
	cin >> n >> m >> p;
	int** a;
	a = new int* [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[m];
	}
	int** b;
	b = new int* [m];
	for (int i = 0; i < m; i++)
	{
		b[i] = new int[p];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < p; j++)
		{
			cin >> b[i][j];
		}
	}
	int** c;
	c = new int* [n];
	for (int i = 0; i < n; i++)
	{
		c[i] = new int[p];
	}
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		int y = 0;
		for (int j = 0; j < p; j++)
		{
			c[i][j] = 0;
			for (int l = 0; l < m; l++)
			{
				c[i][j] += a[x][l] * b[l][y];
			}
			y++;
		}
		x++;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < p; j++)
		{
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}