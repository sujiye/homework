#include <iostream>
using namespace std;

int main ()
{
    double arr[5][3];

    for ( int i = 0 ; i < 5 ; i++)
    {
        for (int j = 0 ; j < 3 ;j++)
        {
            cin >> arr[i][j];
        }
    }

    for ( int i = 0 ; i < 5 ; i++)
    {
        cout << arr[i][0] + arr[i][1] + arr[i][2] << endl;
    }

    for (int j = 0 ; j < 3 ;j++)
    {
        cout << (arr[0][j] + arr[1][j] + arr[2][j] + arr[3][j] + arr[4][j])/5 << endl;
    }

    return 0;
}
