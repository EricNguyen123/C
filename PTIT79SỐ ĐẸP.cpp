#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		char a[1000];
		cin.getline(a, 999);
		int n = strlen(a);
		int m = n / 2;
		int d = 0;
		for (int i = 0; i < m; i++)
		{
			if (a[i] == '0' || a[i] == '2' || a[i] == '4' || a[i] == '6' || a[i] == '8')
			{
				if (a[i] != a[n - 1])
				{
					d = 1;
					break;
				}
				else
				{
					n--;
				}
			}
			else
			{
				d = 1;
				break;
			}
		}
		if (d == 0)
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