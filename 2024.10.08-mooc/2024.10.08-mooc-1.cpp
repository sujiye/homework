#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int f = 8;

    for (int i = 1 ; i <= x ; i++)
    {
        f = f + 2;
    }

    cout << f << endl;
    
    return 0;
}
