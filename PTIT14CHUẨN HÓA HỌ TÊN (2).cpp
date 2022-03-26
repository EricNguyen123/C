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
		s[0] -= 32;
		strcpy(b[j], s);
		j++;
	}
	for (int l = 0; l < j; l++)
	{
		if (l == j - 2)
		{
			cout << b[l];
			cout << ", ";
		}
		else if (l == j - 1)
		{
			int c = strlen(b[l]);
			for (int i = 0; i < c; i++)
			{
				if (b[l][i] >= 97 && b[l][i] <= 122)
				{
					b[l][i] -= 32;
				}

			}
			cout << b[l];
		}
		else
		{

			cout << b[l];
			cout << " ";
		}
	}
	return 0;
}