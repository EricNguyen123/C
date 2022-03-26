#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int k;
		cin >> k;
		int max = 0;
		for (int i = 0; i < k; i++)
		{
			int b;
			cin >> b;
			if (max < b)
			{
				max = b;
			}

		}

		cout << max << " ";
		cout << endl;
	}
	return 0;
}