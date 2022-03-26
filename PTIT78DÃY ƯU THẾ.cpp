#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int dc = 0;
		int dl = 0;
		char k = ' ';
		while (k!='\n')
		{
			int a;
			cin >> a;
			if (a % 2 == 0)
			{
				dc++;
			}
			else
			{
				dl++;
			}
			k = getchar();
		}
		if ((dc + dl) % 2 == 0)
		{
			if (dc > dl)
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}
		}
		else
		{
			if (dc >= dl)
			{
				cout << "NO\n";
			}
			else
			{
				cout << "YES\n";
			}
		}
	}
	return 0;
}