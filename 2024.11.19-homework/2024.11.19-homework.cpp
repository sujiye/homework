#include <iostream>
using namespace std;

void fun(int arr[])
{
    int temp = 0;
    temp = arr[9]/2;
    for (int i = 9; i >= 0; i--)
    {
        arr[i] = arr[i] / 2;
    }

    for (int i = 9; i >0; i--)
    {
        arr[i] += arr[i - 1]; 
    }
    arr[0] = arr[0] + temp;

    for (int i = 0; i < 10; i++)
        {
            if(arr[i] % 2 != 0)
            {
                arr[i] += 1;
            }
        }
}

int check(int arr[])
{
    for (int i = 1; i < 10; i++)
    {
        if (arr[0] != arr[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int time = 0;
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    while (check(arr) == false)
    {
        fun(arr);
        time++;
    }
    cout << time << " " << arr[0] << endl;

    return 0;
}
