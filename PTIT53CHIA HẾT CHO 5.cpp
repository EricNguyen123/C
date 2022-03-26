#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		char s[10000];
		cin.getline(s, 9999);
		int n = strlen(s) - 1;
		int dem = 0;
		int sum = 0;
		
		for (int i = n; i >= 0; i--)
		{
			
			if (s[i] == 49)
			{	
				if (dem % 4 == 0)
				{
					sum += 1;
				}
				else if(dem % 4 == 1)
				{
					sum += 2;
				}
				else if (dem % 4 == 2)
				{
					sum += 4;
				}
				else if (dem % 4 == 3)
				{
					sum += 3;
				}
			}
			dem++;
		}
		
		if (sum % 5 == 0)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	return 0;
}