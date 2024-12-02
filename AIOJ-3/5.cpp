#include <iostream>
using namespace std;

void mySum (int arr[], int N, int &sumOdd, int &sumEven)
{
    for (int i = 0; i < N; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sumEven += arr[i];
        }
        else
        {
            sumOdd += arr[i];
        }
    }
}

int main()
{
    int len;
    cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    int sumOdd = 0, sumEven = 0;
    mySum(arr, len, sumOdd, sumEven);
    cout << sumOdd << " " << sumEven << endl;
    return 0;
}
