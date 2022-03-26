#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		char s[100];
		cin.getline(s, 99);
		for (int i = 0; i < strlen(s); i++)
		{
			if (s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4')
			{
				for (int j = 0; j < i; j++)
				{
					cout << s[j];
				}
				for (int j = i + 3; j < strlen(s); j++)
				{
					cout << s[j];
				}
				cout << endl;
				break;
			}
			
		}

	}
	return 0;
}