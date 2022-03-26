#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int k, n;
		cin >> k >> n;
		int* b;
		b = new int[k];
		for (int i = 0; i < k; i++)
		{
			cin >> b[i];
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < k; j++)
			{
				if (b[i] > b[j])
				{
					int tg = b[i];
					b[i] = b[j];
					b[j] = tg;
				}
			}
		}

		cout << b[n - 1] << " ";
		cout << endl;
	}
	return 0;
}