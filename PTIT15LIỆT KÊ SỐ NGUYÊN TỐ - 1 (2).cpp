#include<iostream>
#include<math.h>
#include<stdbool.h>
using namespace std;
bool nt(long m)
{
	if (m == 1)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(m); i++)
	{
		if (m % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	long a, b;
	cin >> a >> b;
	if (a > b)
	{
		long tg = a;
		a = b;
		b = tg;
	}
	for (long i = a; i <= b; i++)
	{
		if (nt(i) == true)
		{
			cout << i << " ";
		}
	}
	return 0;
}
