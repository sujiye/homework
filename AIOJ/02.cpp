#include <iostream>
#include <iomanip>
using namespace std;

void lue(double a)
{
    a = int (a * 100);
    if(int(a) % 10 < 5)
    {
        a = double(a) / 100;
    }

    

    else
    {
        a = a = double(a) / 100 + 0.01;
    }
    
    cout << a << endl;
}

int main()
{
    double pi = 3.1415926535;

    int r = 0;
    cin >> r;

    double c = 0.00;
    double v = 0.00;

    c = r * r * pi;
    v = r * r * r * pi * 4 / 3;

    cout << fixed << setprecision(2) << c << endl;
    cout << fixed << setprecision(2) << v << endl;

    return 0;
}
