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
		char b[1000][100];
		char* s;
		int i = 0;
		s = strtok(a, " ");
		while (s != NULL)
		{
			strcpy(b[i], s);
			i++;
			s = strtok(NULL, " ");
			
		}
		for (int j = i - 1; j >= 0; j--)
		{
			cout << b[j] << " ";
		}
		cout << endl;
	}
	return 0;
}