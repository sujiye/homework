#include <iostream>
#include <vector>
using namespace std;

int main()
{
    double num = 0;
    double temp = 0;
    double sum = 0;
    double average = 0;
    vector <double> arr;

    while ( 0 == 0 )
    {
        cin >> temp;
        if ( temp == 0 )
        {
            break;
        }
        sum += temp;
        arr.push_back(temp);
        num++;
    }
    for ( long i = 0 ; i < num ; i++ )
    {
        cout << i << " " << arr[i] << endl;
    }
    cout << sum << endl;
    average = sum / (num );

    cout << average << endl;

    return 0;
}
