#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n;
		cin >> n;
		long dem = 0;
		long long* a;
		a = new long long[n];
		long j = 0;
		for (long i = 0; i < n; i++)
		{
			long long b;
			cin >> b;
			if (b != 0)
			{
				a[j] = b;
				j++;
			}
			else
			{
				dem++;
			}
		}
		for (int i = 0; i < j; i++)
		{
			cout << a[i] << " ";
		}
		for (int i = 0; i < dem; i++)
		{
			cout << 0 << " ";
		}
		cout << endl;
	}
	return 0;
}