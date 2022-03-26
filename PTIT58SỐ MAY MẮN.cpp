#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long a;
		cin >> a;
		if (a % 10 == 6)
		{
			a /= 10;
			if (a % 10 == 8)
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 0 << endl;
			}
		}
		else
		{
			cout << 0 << endl;
		}
	}
	return 0;
}