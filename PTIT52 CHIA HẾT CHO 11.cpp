#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{

		char a[10000];
		cin.getline(a, 9999);
		int n = strlen(a);
		int sumc = 0;
		int suml = 0;

		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0)
			{
				sumc += a[i] - '0';
			}
			else
			{
				suml += a[i] - '0';
			}

		}

		if ((sumc - suml) % 11 == 0 || (suml - sumc) % 11 == 0)
		{
			cout << 1 << endl;
		}
		else
		{
			cout << 0 << endl;
		}
	}
	return 0;
}