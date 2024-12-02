#include <iostream>
using namespace std;

double get_average( int arr[] )
{
    double outcome = 0;

    for ( int i = 0 ; i < 5 ; i++ )
    {
        outcome += arr[i];
    }

    outcome = outcome / 5;

    return outcome;
}

double get_average( int arr[][3] )
{
    double outcome = 0;

    for ( int j = 0 ; j < 3 ; j ++ )
    {
        for ( int i = 0 ; i < 2 ; i++ )
        {
            outcome += arr[i][j];
        }
    }

    outcome = outcome / 6;

    return outcome;
}

int main()
{
    int arr1[5] , arr2[2][3];

    for ( int i = 0 ; i < 5 ; i++ )
    {
        cin >> arr1[i];
    }

    for ( int j = 0 ; j < 3 ; j ++ )
    {
        for ( int i = 0 ; i < 2 ; i++ )
        {
            cin >> arr2[i][j];
        }
    }

    double out1 = get_average( arr1 );
    double out2 = get_average( arr2 );

    cout << int(out1) << " " << int(out2) <<endl;

    return 0;
}
