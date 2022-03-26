#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
void ma101()
{
	float dem = 0;
	string dapan = "ABBADCCABDCCABD";
	for (int i = 0; i < 15; i++)
	{
		char a;
		cin >> a;
		if (a == dapan[i])
		{
			dem++;
		}
	}
	float diem = (dem / 15) * 10;
	cout << fixed << setprecision(2) << diem << endl;
}
void ma102()
{
	float dem = 0;
	string dapan = "ACCABCDDBBCDDBB";
	for (int i = 0; i < 15; i++)
	{
		char a;
		cin >> a;
		if (a == dapan[i])
		{
			dem++;
		}
	}
	float diem = (dem / 15) * 10;
	cout << fixed << setprecision(2) << diem << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int maso;
		cin >> maso;
		if (maso == 101)
		{
			ma101();
		}
		else
		{
			ma102();
		}
	}
	return 0;
}