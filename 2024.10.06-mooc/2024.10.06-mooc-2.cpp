#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[5][2];
    float grade[5][3];

    for ( int a = 0 ; a < 5 ; a ++ )
    {
        cin >> name[a][0] >> name[a][1];
        for ( int b = 0 ; b < 3 ; b ++)
        {
            cin >> grade[a][b];
        }
    }

    float sum[5];

    for ( int i = 0 ; i < 5 ; i++ )
    {
        sum[i] = grade[i][0] + grade[i][1] + grade[i][2];
    }

    for ( int i = 0 ; i < 5 ; i++ )
    {
        cout << name[i][0] << "," << name[i][1] << "," << sum[i] << endl;
    }


    return 0;
}
