#include<iostream>
using namespace std;

void sum()
{
	long long n;
	cin >> n;
	long long s = 0;
	for (long long i = 1; i <= n; i++)
	{
		long long a = 1;
		for (long long j = 1; j <= i; j++)
		{
			a *= j;
		}
		s += a;
	}
	cout << s;
}
int main()
{
	sum();
	return 0;
}