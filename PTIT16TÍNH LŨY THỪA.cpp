#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long a, b;
		long long c;
		cin >> a >> b >> c;
		long long s = 1;
		for (long j = 0; j < b; j++)
		{
			s = (s * a) % c;
		}
		cout << s << endl;
	}

	return 0;
}