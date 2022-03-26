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
		int s = k * n;
		int* b;
		b = new int[s];
		for (int i = 0; i < s; i++)
		{
			cin >> b[i];
		}
		for (int i = 0; i < s; i++)
		{
			for (int j = i + 1; j < s; j++)
			{
				if (b[i] > b[j])
				{
					int tg = b[i];
					b[i] = b[j];
					b[j] = tg;
				}
			}
		}
		for (int i = 0; i < s; i++)
		{
			cout << b[i] << " ";
		}
		cout << endl;
	}
	return 0;
}