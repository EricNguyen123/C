#include<iostream>
using namespace std;
int main()
{
	int m, s;
	cin >> m >> s;
	if (m == 1 && s == 0)
	{
		cout << 0 << " " << 0;
	}
	else if (9 * m < s || (s == 0 && m > 1))
	{
		cout << -1 << " " << -1;
	}
	
	else
	{
		int a[1000];
		int b[1000];
		for (int i = 0; i < m; i++)
		{
			a[i] = 0;
			b[i] = 0;
		}
		int d = 0;
		int i = 9;
		while (s > 0)
		{
			if (s < i)
			{
				i--;
			}
			else
			{
				a[d] = i;
				b[d] = i;
				d++;
				s -= i;
			}
			
			
		}
		if (b[m - 1] == 0)
		{
			for (int j = m - 1; j >= 0; j--)
			{
				if (b[j] != 0)
				{
					b[j]--;
					break;
				}
			}
			b[m - 1]++;
		}
		for (int j = m - 1; j >= 0; j--)
		{
			cout << b[j];
		}
		cout << " ";
		for (int j = 0; j < m; j++)
		{
			cout << a[j];
		}
	}
	return 0;
}