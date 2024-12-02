#include <iostream>
using namespace std;

int formular( int n )
{
    if ( n == 1 )
    {
        return 1;
    }
    else if( n == 2 )
    {
        return 1;
    }
    else
    {
        return formular( n - 1 ) + formular( n - 2 );
    }
} 

int main()
{
    int n;
    cin >> n;
    cout << formular( n ) << endl;
    return 0;
}
