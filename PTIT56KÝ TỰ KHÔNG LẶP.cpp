#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	cin.ignore();
	while (n--)
	{
		char a[100000];
		cin.getline(a, 99999);
		int s = strlen(a);
		
		for (int i = 0; i < s; i++)
		{
			int dem = 0;
			for (int j = 0; j < s; j++)
			{
				if (a[i] == a[j])
				{
					dem++;
				}

			}
			if (dem == 1)
			{
				cout << a[i];
			}
		}
		cout << endl;
	}
	return 0;
}