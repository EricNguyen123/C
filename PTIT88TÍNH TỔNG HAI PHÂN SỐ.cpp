#include<iostream>
using namespace std;
struct PhanSo
{
	long long a, b;
};
void nhap(struct PhanSo& p)
{
	cin >> p.a >> p.b;
}

void rutgon(struct PhanSo& t)
{
	long long c, d;
	if (t.a < t.b)
	{
		c = t.a;
		d = t.b;
	}
	else
	{
		c = t.b;
		d = t.a;
	}
	while (d != 0)
	{
		long long tg = c % d;
		c = d;
		d = tg;
	}
	t.a /= c;
	t.b /= c;
}
PhanSo tong(struct PhanSo& p, struct PhanSo& q)
{
	struct PhanSo t;
	t.a = p.a * q.b + p.b * q.a;
	t.b = p.b * q.b;
	rutgon(t);
	return t;
}
void in(struct PhanSo& t)
{
	cout << t.a << "/" << t.b; 
}
int main()
{
	struct PhanSo p, q;
	nhap(p); 
	nhap(q);
	PhanSo t = tong(p, q);
	in(t);
    return 0;
}