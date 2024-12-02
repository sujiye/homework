#include <iostream>
using namespace std;

int sum( int M )
{
    switch(M)
    {
        case 3:
            M = 59;
            break;

        case 4:
            M = 90;
            break;

        case 5: 
            M = 120;
            break;

        case 6: 
            M = 151;
            break;

        case 7:
            M = 181;
            break;

        case 8: 
            M = 212;
            break;

        case 9: 
            M = 243;
            break;

        case 10: 
            M = 273;
            break;

        case 11: 
            M = 304;
            break;

        case 12: 
            M = 334; 
            break;   
    }
    
    return M;
}

int main()
{
    int y , m , d;

    cin >> y >> m >> d;

    if ( m == 1 )
    {
        cout << d;
    }

    else if( m == 2)
    {
        cout << d + 31 << endl;
    }

    else if  ( ( ( y % 4 == 0 ) && ( y % 100 != 0 )) || ( y % 400 == 0 ) )
    {
        int month = sum (m);
        cout << d + month + 1 << endl;
    }

    else 
    {
        int month = sum (m);
        cout << d + month << endl;
    }

    return 0;
}
