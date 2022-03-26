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
		long n;
		cin >> n;


		if (nt(n - 2) == true)
		{
			cout << 2 << " " << n - 2;
		}
		else
		{
			for (long i = 3; i < n; i += 2)
			{
				if (nt(i) == true)
				{
					if (nt(n - i) == true)
					{
						cout << i << " " << n - i;
						break;
					}
				}
			}
		}
		cout << endl;
	}
	return 0;
}