#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int r = 0 ; r < ( x + 1 ) / 2 ; r++)
    {
        for (int c = 0 ; c < ( x - 1 ) / 2 - r ; c++)
        {
            cout << " " ;
        }

        for (int c = 0 ; c <= 2 * r ;  c++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int r = 0 ; r < ( x  - 1 ) / 2 ; r++)
    {
        for (int c = 0 ; c < r + 1 ; c++)
        {
            cout << " " ;
        }

        for (int c = 0 ; c < x - 2 * r - 2 ;  c++)
        {
            cout << "*";
        }
        cout << endl;
    }

    
    return 0;
}
