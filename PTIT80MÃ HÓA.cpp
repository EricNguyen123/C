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
		char s[200];
		cin.getline(s, 199);
		int dem = 1;
		int n = strlen(s);
		for (int i = 0; i < n; i++)
		{
			if (s[i] == s[i + 1])
			{
				dem++;
			}
			else
			{
				cout << s[i] << dem;
				dem = 1;
			}
		}
		cout << endl;
	}
	return 0;
}