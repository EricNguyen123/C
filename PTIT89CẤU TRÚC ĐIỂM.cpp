#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct Point
{
    double x, y;
};
void input(Point& c)
{
    cin >> c.x >> c.y;
}
double distance(Point& a, Point& b)
{
    double d;
    d = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
        return d;
}
int main()
{
    struct Point A, B;
    int t;
    cin >> t;
    while (t--) {
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A, B) << endl;
    }
    return 0;
}