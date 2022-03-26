#include<iostream>

using namespace std;
struct PhanSo
{
	long long a, b;
};
void nhap(struct PhanSo &p)
{
	cin >> p.a >> p.b;
}
void rutgon(struct PhanSo &p)
{
	long long c, d;
	if (p.a < p.b)
	{
		c = p.a;
		d = p.b;
	}
	else
	{
		c = p.b;
		d = p.a;
	}
	while (d != 0)
	{
		long long tg = c % d;
		c = d;
		d = tg;
	}
	p.a /= c;
	p.b /= c;
}
void in(struct PhanSo &p)
{
	cout << p.a << "/" << p.b;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}