#include <iostream>
using namespace std;

int trans_bit( int self )
{
    int output = 0;
    int ten = 1;
    while ( self >= 1 )
    {
        if ( self%2 == 1 )
        {
            self = (self -1) / 2;
            output += ten;
        }
        else
        {
            self = self / 2;
        }

        ten *= 10;
    }
    return output;
}

int main()
{
    int num = 1;
    int arr[100];

    for ( int i = 0 ; i < 100 ; i++ )
    {
        arr[i] = trans_bit(num);
        cout << arr[i] << endl;
        num++;
    }
    return 0;
}
