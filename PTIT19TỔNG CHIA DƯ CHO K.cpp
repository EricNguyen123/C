#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		long k;
		cin >> n >> k;
		long sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum += i % k;
		}
		if (sum == k)
		{
			cout << 1 << endl;
		}
		else
		{
			cout << 0 << endl;
		}
	}
	return 0;
}