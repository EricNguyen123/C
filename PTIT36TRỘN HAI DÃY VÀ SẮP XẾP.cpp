#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		int c = a + b;
		long* d;
		d = new long[c];
		for (int i = 0; i < c; i++)
		{
			cin >> d[i];
		}
		for (int i = 0; i < c; i++)
		{
			for (int j = i + 1; j < c; j++)
			{
				if (d[i] > d[j])
				{
					int tg = d[i];
					d[i] = d[j];
					d[j] = tg;
				}
			}
		}
		for (int i = 0; i < c; i++)
		{
			cout << d[i] << " ";
		}
		cout << endl;
	}
	return 0;
}