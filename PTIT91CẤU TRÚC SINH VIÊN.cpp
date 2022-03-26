#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
struct SinhVien
{
    char name[100];
    char date[100];
    char lop[100];
    float gpa;
    char datec[100];
};
void nhap(SinhVien& a)
{
    cin.getline(a.name, 99);
    cin.getline(a.lop, 99);
    cin.getline(a.date, 99);
    cin >> a.gpa;
        if (a.date[1] == '/')
        {
            a.datec[0] = '0';
            a.datec[1] = a.date[0];
            a.datec[2] = '/';
            if (a.date[3] == '/')
            {
                a.datec[3] = '0';
                a.datec[4] = a.date[2];
                a.datec[5] = '/';
                a.datec[6] = a.date[4];
                a.datec[7] = a.date[5];
                a.datec[8] = a.date[6];
                a.datec[9] = a.date[7];
            }
            else
            {
                a.datec[3] = a.date[2];
                a.datec[4] = a.date[3];
                a.datec[5] = '/';
                a.datec[6] = a.date[5];
                a.datec[7] = a.date[6];
                a.datec[8] = a.date[7];
                a.datec[9] = a.date[8];
            }
            
        }
        else if (a.date[2] == '/')
        {
            a.datec[0] = a.date[0];
            a.datec[1] = a.date[1];
            a.datec[2] = '/';
            if (a.date[4] == '/')
            {
                a.datec[3] = '0';
                a.datec[4] = a.date[3];
                a.datec[5] = '/';
                a.datec[6] = a.date[5];
                a.datec[7] = a.date[6];
                a.datec[8] = a.date[7];
                a.datec[9] = a.date[8];
            }
            else
            {
                a.datec[3] = a.date[3];
                a.datec[4] = a.date[4];
                a.datec[5] = '/';
                a.datec[6] = a.date[6];
                a.datec[7] = a.date[7];
                a.datec[8] = a.date[8];
                a.datec[9] = a.date[9];
            }
        }
    
}
void in(SinhVien& a)
{
    cout << "B20DCCN001 " << a.name << " " << a.lop << " ";
    for (int i = 0; i < 10; i++)
    {
        cout << a.datec[i];
    }
    cout << " " << fixed << setprecision(2) << a.gpa;
}
int main() {
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}