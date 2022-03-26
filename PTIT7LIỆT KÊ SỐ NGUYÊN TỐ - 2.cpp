#include<iostream>
#include<math.h>
#include<stdbool.h>
using namespace std;
bool nt(long n)
{
	for (long i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n, m;
		cin >> n >> m;
		if (n <= 2)
		{
			cout << 2 << " ";
			for (long i = 3; i <= m; i += 2)
			{
				if (nt(i) == true)
				{
					cout << i << " ";
				}
			}
		}
		else
		{
			if (n % 2 == 0)
			{
				n++;
				for (long i = n; i <= m; i += 2)
				{
					if (nt(i) == true)
					{
						cout << i << " ";
					}
				}

			}
			else
			{
				for (long i = n; i <= m; i += 2)
				{
					if (nt(i) == true)
					{
						cout << i << " ";
					}
				}
			}
		}

		cout << endl;
	}
	return 0;
}