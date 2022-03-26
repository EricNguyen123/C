#include<iostream>
#include<math.h>
#include<stdbool.h>
using namespace std;
bool nt(long n)
{
	if (n <= 1)
	{
		return false;
	}
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
	int n;
	cin >> n;
	if (nt(n) == true)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}