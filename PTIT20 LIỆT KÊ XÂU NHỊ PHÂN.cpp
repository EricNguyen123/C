#include<iostream>
#include<math.h>
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
		for (int i = 0; i < n; i++)
		{
			a[i] = 0;
		}
		int m = pow(2, n);
		while (m--)
		{
			for (int i = 0; i < n; i++)
			{
				cout << a[i];
			}
			cout << " ";
			for (int i = n - 1; i >= 0; i--)
			{
				if (a[i] == 0)
				{
					a[i] = 1;
					break;
				}
				else
				{
					a[i] = 0;
					if (a[i - 1] == 0)
					{
						a[i - 1] = 1;
						break;
					}
					else
					{
						int j = i;
						while (a[j - 1] == 1)
						{
							a[j - 1] = 0;
							j--;
						}
						if (a[j - 1] == 0)
						{
							a[j - 1] = 1;
						}
						break;
					}

				}
			}
		}
		cout << endl;
	}
	return 0;
}