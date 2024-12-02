#include <iostream>
#include <cmath>
#include <string>
#include <climits>
#include <iomanip>
using namespace std;

int main()
{
    int arr[10];
    for (int i = 0 ; i < 10 ; i ++)
    {
        cin >> arr[i];
    }

    int temp;
    int i = 0;
    int j = 1;

    for(; i < 10 - 1 ; i++)
    {
        for(j = 0 ; i + j < 10 ; j++)
        {
            if(arr[i] > arr[i+j])
            {
                temp = arr[i];
                arr[i] = arr[i+j];
                arr[i+j] = temp;
                temp = 0;
            }
        }
    }

    double sum = 0;

    for (int i = 1 ; i < 10 - 1 ; i ++)
    {
        sum = sum + arr[i];
    }

    double num = sum / ( 10 - 2 );
    printf("%.3f\n", num);
    
    
    return 0;
}
