#include <iostream>
#include <cmath>
#include <string>
#include <climits>
#include <iomanip>
using namespace std;

int main()
{
    int x = 10 , y = 100;
    int arr1[2] , arr2[3];

    while ( x < 100 )
    {
        arr1[0] = x / 10;
        arr1[1] = x % 10;

        if ( arr1[0] * arr1[1] > arr1[0] + arr1[1] )
        {
            cout << x << " ";
        }
        x++;
    }

    while ( y < 999 )
    {
        arr2[0] = y / 100;
        arr2[1] = (y - arr2[0] * 100)/ 10;
        arr2[2] = y % 10;

        if ( arr2[0] * arr2[1] * arr2 [2] > arr2[0] + arr2[1] + arr2 [2] )
        {
            cout << y << " ";
        } 
        y++;

    }

    cout << "999" << endl;
    
    return 0;
}
