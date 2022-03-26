#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long a, b;
		cin >> a >> b;
		long* n;
		n = new long[a];
		for (long i = 0; i < a; i++)
		{
			cin >> n[i];
		}
		for (long i = 0; i < a; i++)
		{
			if (b == n[i])
			{
				cout << i + 1 << endl;
				break;
			}
		}
	}
	return 0;
}