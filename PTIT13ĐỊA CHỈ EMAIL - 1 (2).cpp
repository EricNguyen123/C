#include<iostream>
#include<cstdio>
#include<string.h>
#include<cstring>
using namespace std;
int main()
{
	char a[500];
	cin.getline(a, 499);
	char* s;
	char b[10][100];
	int j = 0;
	for (s = strtok(a, " "); s != NULL; s = strtok(NULL, " "))
	{
		int c = strlen(s);
		for (int i = 0; i < c; i++)
		{
			if (s[i] >= 65 && s[i] <= 90)
			{
				s[i] += 32;
			}

		}
		strcpy(b[j], s);
		j++;
	}
	cout << b[j - 1];
	for (int l = 0; l < j - 1; l++)
	{
		cout << b[l][0];
	}
	cout << "@ptit.edu.vn";
	return 0;
}