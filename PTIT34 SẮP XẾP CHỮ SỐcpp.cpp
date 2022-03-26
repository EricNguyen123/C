#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int m = n * 18 - 1;
		cin.ignore();
		char* a;
		a = new char[m];
		cin.getline(a, m - 1);
		char b[10];
		for (int i = 0; i < 10; i++)
		{
			b[i] = 'b';
		}
		for (int i = 0; i < m; i++)
		{
			switch (a[i])
			{
			case '0':
				b[0] = '0';
				break;
			case '1':
				b[1] = '1';
				break;
			case '2':
				b[2] = '2';
				break;
			case '3':
				b[3] = '3';
				break;
			case '4':
				b[4] = '4';
				break;
			case '5':
				b[5] = '5';
				break;
			case '6':
				b[6] = '6';
				break;
			case '7':
				b[7] = '7';
				break;
			case '8':
				b[8] = '8';
				break;
			case '9':
				b[9] = '9';
				break;
			}
		}
		for (int i = 0; i < 10; i++)
		{
			if (b[i] != 'b')
			{
				cout << b[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}