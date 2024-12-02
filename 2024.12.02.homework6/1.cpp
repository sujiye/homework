#include <iostream>
using namespace std;

double get_average(int *arr, int n){
    double sum = 0;
    if ( n == 1)
    {
        for (int i = 0; i < 5; i++)
        {
            sum += arr[i];
        }
        sum = sum / 5;
    }
    else if ( n == 2)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                sum += *(arr + i * 3 + j);
            }
        }
        sum = sum / 6;
    }
    return sum;
}

int main()
{
    int arr_1[5], arr_2[2][3];
    int *a1 = &arr_1[0];
    int *a2 = &arr_2[0][0];

    for (int i = 0; i < 5; i++)
    {
       cin >> arr_1[i];
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++){
            cin >> arr_2[i][j];
        }
    }

    cout << get_average(a1, 1) << " " << get_average(a2, 2) << endl;

    return 0;
}
