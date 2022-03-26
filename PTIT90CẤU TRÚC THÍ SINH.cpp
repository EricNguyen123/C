#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
struct ThiSinh
{
    char name[200];
    char date[100];
    float diem1, diem2, diem3, tong;
};
void nhap(ThiSinh& a)
{
    cin.getline(a.name, 199);
    cin.getline(a.date, 99);
    cin>> a.diem1 >> a.diem2 >> a.diem3;
    a.tong = a.diem1 + a.diem2 + a.diem3;
}
void in(ThiSinh& a)
{
    cout << a.name << " " << a.date << " " << fixed << setprecision(1) << a.tong;
}
int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}