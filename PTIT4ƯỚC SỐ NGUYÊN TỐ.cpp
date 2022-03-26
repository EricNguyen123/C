#include<iostream>
#include<stdbool.h>
#include<math.h>
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
		if (nt(n) == true)
		{
			cout << n << endl;
		}
		else
		{

			while (n % 2 == 0)
			{
				n /= 2;
				cout << 2 << " ";
			}

			for (long i = 3; i <= sqrt(n); i += 2)
			{
				while (n % i == 0)
				{
					cout << i << " ";
					n /= i;
				}
			}
			if (n > 2)
			{
				cout << n << " ";
			}
			cout << endl;
		}

	}
	return 0;
}