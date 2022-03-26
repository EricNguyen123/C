#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[200];
	cin.getline(a, 199);
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == 'A' || a[i] == 'a' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' || a[i] == 'I' || a[i] == 'o' || a[i] == 'O' || a[i] == 'u' || a[i] == 'U' || a[i] == 'y' || a[i] == 'Y')
		{
			continue;
		}
		else
		{
			for (int j = 65; j <= 90; j++)
			{
				if (a[i] == j)
				{
					a[i] += 32;
				}
			}
			cout << "." << a[i];
		}
	}
	return 0;
}