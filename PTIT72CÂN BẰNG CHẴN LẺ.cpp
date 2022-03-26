#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a = pow(10, n - 1);
	int b = pow(10, n);
	int dem = 0;
	for (int i = a; i < b; i++)
	{
		int b = i;
		int dc = 0, dl = 0;
		while (b > 0)
		{
			int c = b % 10;
			b /= 10;
			if (c % 2 == 0)
			{
				dc++;
			}
			else
			{
				dl++;
			}
		}
		if (dc == dl)
		{
			dem++;
			cout << i << " ";
			if (dem == 10)
			{
				cout << endl;
				dem = 0;
			}
		}
	}
	return 0;
}