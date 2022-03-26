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
		long max = 0;
		long min = 1000000000;
		for (int i = 0; i < a; i++)
		{
			long aa;
			cin >> aa;
			if (aa > max)
			{
				max = aa;
			}
		}
		for (int i = 0; i < b; i++)
		{
			long bb;
			cin >> bb;
			if (bb < min)
			{
				min = bb;
			}
		}
		cout << min * max << endl;
	}
	return 0;
}