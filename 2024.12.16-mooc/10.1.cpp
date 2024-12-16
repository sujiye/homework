#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void rank1(T arr[], int x)
{
    for(int i = 0; i < x; i++)
    {
        for(int j = i + 1; j < x; j++)
        {
            if(arr[i] > arr[j])
            {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}



int main()
{
    int arr_1[10];
    double arr_2[10];
    for(int i = 0; i < 10; i++)
    {
        cin >> arr_1[i];
    }
    for(int i = 0; i < 10; i++)
    {
        cin >> arr_2[i];
    }

    rank1(arr_1, 10);
    rank1(arr_2, 10);

    for(int i = 0; i < 10; i++)
    {
        cout << arr_1[i] << ",";
    }
    cout << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << arr_2[i] << ",";
    }
    

    return 0;
}
