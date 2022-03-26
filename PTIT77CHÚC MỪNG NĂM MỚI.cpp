#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char** a;
	a = new char* [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new char[35];
	}
	cin.ignore();
	int l = 0;
	for (int i = 0; i < n; i++)
	{
		char b[35];
		cin.getline(b, 34);
		int d = 0;
		for (int j = 0; j < l; j++)
		{
			if (strcmp(b, a[j]) == 0)
			{
				d = 1;
				break;
			}
		}
		if (d == 0)
		{
			strcpy(a[l], b);
			l++;
		}
	}
	cout << l << endl;
	return 0;
}