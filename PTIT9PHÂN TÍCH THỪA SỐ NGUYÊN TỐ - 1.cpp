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
			cout << n << " " << 1 << endl;
		}
		else
		{
			int dem = 0;
			while (n % 2 == 0)
			{
				n /= 2;
				dem++;
			}
			if (dem != 0)
			{
				cout << 2 << " " << dem << " ";
			}
			for (long i = 3; i <= sqrt(n); i += 2)
			{
				dem = 0;
				while (n % i == 0)
				{
					dem++;
					n /= i;
				}
				if (dem != 0)
				{
					cout << i << " " << dem << " ";
				}
			}
			if (n > 2)
			{
				cout << n << " " << 1;
			}
			cout << endl;
		}

	}
	return 0;
}