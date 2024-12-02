#include <iostream>
#include <cmath>
#include <string>
#include <climits>
#include <iomanip>
using namespace std;

int main()
{
    long double pai = 4;

    for ( long double i = 3 ; i < 1000000 ; i  = i + 4 )
    {
        pai = pai - 4 / i;
        //cout << setprecision(25) << pai << endl;
        
        if ( i >= 999999 )
        {
            break;
        }

        pai = pai + ( 4 / ( i + 2 ) );
        //cout << setprecision(25) << pai << endl;
    }

    cout << setprecision(9) << pai << endl;

    return 0;
}
