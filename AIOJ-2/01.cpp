#include <iostream>
using namespace std;

int main()
{
    int num , n = 0;
    cin >> num;

    for ( int i = 0 ; num != 0 ; i++ )
    {
        if ( num % 2 == 1)
        {
            int x = 1;

            for (int j = 0 ; j < i ; j ++ )
            {
                x = x * 10;
            }
            
            n = n + x;
        }

        num = num / 2;
    }

    cout << n << endl;

    return 0;
}
