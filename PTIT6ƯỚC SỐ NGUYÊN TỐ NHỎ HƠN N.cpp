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
		cout << 2 << " ";
		for (long i = 3; i <= n; i += 2)
		{
			if (nt(i) == true)
			{
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}