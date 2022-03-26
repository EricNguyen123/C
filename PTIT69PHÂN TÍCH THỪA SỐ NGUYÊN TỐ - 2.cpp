#include<iostream>
#include<math.h>

using namespace std;



int main()
{
	
	long n;
	cin >> n;
	int dem = 0;
	while (n % 2 == 0)
	{
		dem++;
		n /= 2;
	}
	if (dem != 0)
	{
		cout << 2 << " " << dem << endl;
	}
	for (long j = 3; j <= sqrt(n); j += 2)
	{

		dem = 0;
		while (n % j == 0)
		{
			dem++;
			n /= j;
		}
		if (dem != 0)
		{
			cout << j << " " << dem << endl;
		}
	}
	if (n > 2)
	{
		cout << n << " " << 1 << endl;
	}
	return 0;
}