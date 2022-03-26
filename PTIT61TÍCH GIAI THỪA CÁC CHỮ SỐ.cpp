#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int dem[10] ;
		for (int i = 0; i < 10; i++)
		{
			dem[i] = 0;
		}
		int n;
		cin >> n;
		cin.ignore();
		char a[1000];
		cin.getline(a, 999);
		for (int i = 0; i < n; i++)
		{
			if (a[i] == '2')
			{
				dem[2]++;
			}
			else if (a[i] == '3')
			{
				dem[3]++;
			}
			else if (a[i] == '4')
			{
				dem[3]++;
				dem[2] += 2;
			}
			else if (a[i] == '5')
			{
				dem[5]++;
			}
			else if (a[i] == '6')
			{
				dem[5]++;
				dem[3]++;
			}
			else if (a[i] == '7')
			{
				dem[7]++;
			}
			else if (a[i] == '8')
			{
				dem[7]++;
				dem[2] += 3;
			}
			else if (a[i] == '9')
			{
				dem[7]++;
				dem[2]++;
				dem[3] += 2;
			}
		}
		for (int i = 9; i >= 0; i--)
		{
			if (dem[i] != 0)
			{
				while (dem[i] > 0)
				{
					cout << i;
					dem[i]--;
				}
			}
			
		}
		cout << endl;
	}
	return 0;
}