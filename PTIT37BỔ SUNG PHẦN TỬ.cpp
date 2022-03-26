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
		int max = 0;
		int min = 10000;
		int dem = 0;
		for (int i = 0; i < n; i++)
		{
			int aa;
			cin >> aa;
			int d = 0;
			for (int j = 0; j < dem; j++)
			{
				if (a[j] == aa)
				{
					d = 1;
					break;
				}
			}
			if (d == 0)
			{
				a[dem] = aa;
				dem++;
			}
			if (aa > max)
			{
				max = aa;
			}
			if (aa < min)
			{
				min = aa;
			}
		}
		int s;
		s = (max - min) + 1;
		cout << s - dem << endl;
	}
	return 0;
}
