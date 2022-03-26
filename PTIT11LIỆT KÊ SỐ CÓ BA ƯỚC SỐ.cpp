#include<iostream>
#include<math.h>
#include<stdbool.h>
using namespace std;
bool kt(int m)
{

	if (m % (int)sqrt(m) == 0)
	{
		for (int i = 2; i < sqrt(m); i++)
		{
			if (m % i == 0)
			{
				return false;
			}
		}
		return true;
	}
	return false;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 4; i <= n; i++)
		{

			if (kt(i) == true)
			{
				cout << i << " ";
			}

		}
		cout << endl;
	}
	return 0;
}