#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int* a;
		a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int min;
		if (a[0] < a[1])
		{
			min = a[1] - a[0];
		}
		else
		{
			min = a[0] - a[1];
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i != j && a[i] - a[j] < min && a[i] - a[j] >= 0)
				{
					min = a[i] - a[j];
				}
			}
		}
		cout << min << endl;
	}
	return 0;
}