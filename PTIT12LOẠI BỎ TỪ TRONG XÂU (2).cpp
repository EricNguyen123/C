#include<iostream> 
#include<string.h> 
#include<cstdio> 
using namespace std;
void tach(char a[], char b[])
{
	char res[100][100];
	char* p;
	int i = 0;
	for (p = strtok(a, " "); p != NULL; p = strtok(NULL, " "))
	{
		strcpy(res[i++], p);
	}
	for (int j = 0; j < i; j++)
	{
		if (strcmp(res[j], b) != 0) cout << res[j] << " ";
	}
}
int main()
{
	char a[100];
	char b[100];
	cin.getline(a, sizeof(a));
	cin.getline(b, sizeof(b));
	tach(a, b);
}