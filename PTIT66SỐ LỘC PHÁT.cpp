#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		char a[100];
		cin.getline(a, 99);
		int d = 0;
		for (int i = 0; i < strlen(a); i++)
		{
			if (a[i] == '8' || a[i] == '6' || a[i] == '0')
			{
				
			}
			else
			{
				d = 1;
				cout << "NO" << endl;
				break;
			}
		}
		if (d == 0)
		{
			cout << "YES" << endl;
		}
	}
	return 0;
}