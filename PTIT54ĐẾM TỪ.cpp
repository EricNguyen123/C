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
		char a[10000];
		cin.getline(a, 9999);
		char* s;
		int dem = 0;
		s = strtok(a, " \n\t");
		while (s != NULL)
		{
			dem++;
			s = strtok(NULL, " \n\t");
		}
		cout << dem << endl;
	}
	return 0;
}