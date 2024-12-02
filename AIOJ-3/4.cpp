#include <iostream>
using namespace std;

void myAdjust (int arr[], int N, int M)
{
    int temp;
    for (int i = 0; i < M; i++)
    {
        temp = arr[N-1];
        for (int j = N-1; j >= 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}

int main ()
{
    int N , M;
    
    cin >> N >> M;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    myAdjust(arr, N, M);

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
