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
		char a[10000];
		cin.getline(a, 9999);
		int s = strlen(a);
		int dem = 0;
		for (int i = 0; i < s; i++)
		{
			for (int j = 0; j < s; j++)
			{
				if (a[i] == a[j])
				{
					if (i <= j)
					{
						dem++;
					}
				}
				
			}
		}
		cout << dem << endl;
	}
	return 0;
}