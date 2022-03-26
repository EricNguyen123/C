#include<iostream>
#include<cmath>
#include<stdbool.h>
using namespace std;
bool nt(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
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
		int n;
		cin >> n;
		cout << 1 << " ";
		for (int i = 2; i <= n; i++)
		{
			if (i % 2 == 0)
			{
				cout << 2 << " ";
			}
			else
			{
				if (nt(i) == true)
				{
					cout << i << " ";
				}
				else
				{
					int j = 3;
					while (1)
					{
						if (i % j == 0)
						{
							cout << j << " ";
							break;
						}
						else
						{
							j += 2;
							if (nt(j) == false)
							{
								j += 2;
							}
						}
					}
				}
			}
		}
		cout << endl;
	}
	return 0;
}
