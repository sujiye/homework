#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    cin >> i;

    if((i > 99) && ( i < 1000))
    {
        int arr[3];

        arr[2] = i / 100;
        arr[1] = (i - arr[2] * 100) / 10;
        arr[0] = i - arr [2] * 100 - arr[1] * 10;

        cout << arr[0] << arr[1] << arr[2] << endl;

    }

    else
    {
        cout << "输入错误！" << endl;
    }

    return 0;

}
