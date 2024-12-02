#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;

    int arr[N];
    for (int i = 0 ; i < N ; i ++)
    {
        cin >> arr[i];
    }

    int temp;
    int i = 0;
    int j = 1;

    for(; i < N - 1 ; i++)
    {
        for(j = 0 ; i + j < N ; j++)
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

    for (int i = 1 ; i < N - 1 ; i ++)
    {
        sum = sum + arr[i];
    }

    double num = sum / ( N - 2 );
    printf("%.2f\n", num);

    return 0;
}
