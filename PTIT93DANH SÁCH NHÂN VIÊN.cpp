#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
struct NhanVien
{
    char name[100];
    char gioitinh[10];
    char date[100];
    char datec[100];
    char diachi[200];
    char mabh[100];
    char date2[100];
    char date2c[100];
    char k;
};
void chuanhoa(NhanVien& a)
{
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
    if (a.date2[1] == '/')
    {
        a.date2c[0] = '0';
        a.date2c[1] = a.date2[0];
        a.date2c[2] = '/';
        if (a.date2[3] == '/')
        {
            a.date2c[3] = '0';
            a.date2c[4] = a.date2[2];
            a.date2c[5] = '/';
            a.date2c[6] = a.date2[4];
            a.date2c[7] = a.date2[5];
            a.date2c[8] = a.date2[6];
            a.date2c[9] = a.date2[7];
        }
        else
        {
            a.date2c[3] = a.date2[2];
            a.date2c[4] = a.date2[3];
            a.date2c[5] = '/';
            a.date2c[6] = a.date2[5];
            a.date2c[7] = a.date2[6];
            a.date2c[8] = a.date2[7];
            a.date2c[9] = a.date2[8];
        }

    }
    else if (a.date2[2] == '/')
    {
        a.date2c[0] = a.date2[0];
        a.date2c[1] = a.date2[1];
        a.date2c[2] = '/';
        if (a.date2[4] == '/')
        {
            a.date2c[3] = '0';
            a.date2c[4] = a.date2[3];
            a.date2c[5] = '/';
            a.date2c[6] = a.date2[5];
            a.date2c[7] = a.date2[6];
            a.date2c[8] = a.date2[7];
            a.date2c[9] = a.date2[8];
        }
        else
        {
            a.date2c[3] = a.date2[3];
            a.date2c[4] = a.date2[4];
            a.date2c[5] = '/';
            a.date2c[6] = a.date2[6];
            a.date2c[7] = a.date2[7];
            a.date2c[8] = a.date2[8];
            a.date2c[9] = a.date2[9];
        }
    }
}
void nhap(NhanVien& a)
{
    
    a.k=getchar();
    cin.getline(a.name, 99);
    cin.getline(a.gioitinh, 9);
    cin.getline(a.date, 99);
    cin.getline(a.diachi, 199);
    cin.getline(a.mabh, 99);
    cin.getline(a.date2, 99);
    chuanhoa(a);
}
void in(NhanVien& a)
{
    if (a.k != '\n')
    {
        cout << a.k;
    }
    cout << a.name << " " << a.gioitinh << " ";
    for (int i = 0; i < 10; i++)
    {
        cout << a.datec[i];
    }
    cout << " " << a.diachi << " " << a.mabh << " ";
    for (int i = 0; i < 10; i++)
    {
        cout << a.date2c[i];
    }
    cout << endl;
}
void inds(NhanVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i < 9)
        {
            cout << "0000" << i + 1 << " ";
        }
        else
        {
            cout << "000" << i + 1 << " ";
        }
        in(ds[i]);
    }
}
int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++) nhap(ds[i]);
    inds(ds, N);
    return 0;
}