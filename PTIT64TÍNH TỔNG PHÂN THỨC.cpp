#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double n;
	cin >> n;
	double sum = 0;
	for (double i = 1; i <= n; i++)
	{
		sum += 1 / i;
	}
	cout << fixed << setprecision(4) << sum;
	return 0;
}