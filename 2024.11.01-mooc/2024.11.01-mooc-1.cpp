#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main()
{
    long N = 0;
    cin >> N;

    long dot_1[ INT16_MAX ];
    long dot_2[ INT16_MAX ];

    for ( long i = 0 ; i < N ; i++)
    {
        cin >> dot_1[i];
    }
    for ( long i = 0 ; i < N ; i++)
    {
        cin >> dot_2[i];
    }

    long sum = 0 ;

    for ( int i = 0 ; i < N ; i++)
    {
        sum += (dot_1[i] - dot_2[i]) * (dot_1[i] - dot_2[i]);
    }
    
    double outcome = 0;

    outcome = sqrt(sum);

    printf("%.2f\n", outcome);

    cout << endl << sizeof(dot_1);

    return 0;
}
