#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		int q;
		cin >> n >> q;
		int* a;
		a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int** b;
		b = new int* [q];
		for (int i = 0; i < q; i++)
		{
			b[i] = new int[2];
		}
		for (int i = 0; i < q; i++)
		{
			cin >> b[i][0] >> b[i][1];
		}
		for (int i = 0; i < q; i++)
		{
			int sum = 0;
			for (int j = b[i][0] - 1; j <= b[i][1] - 1; j++)
			{
				sum += a[j];
			}
			cout << sum << endl;
		}
	}
	return 0;
}