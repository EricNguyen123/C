#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if ((a == 1 && b == 1 && c == 0) || (a == 1 && b == 0 && c == 1) || (a == 0 && b == 1 && c == 1) || (a == 1 && b == 1 && c == 1))
		{
			dem++;
		}
	}
	cout << dem;
	return 0;
}