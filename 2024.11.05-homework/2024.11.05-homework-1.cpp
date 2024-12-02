#include <iostream>
using namespace std;

void merge(double arr[], double tempArr[], int left, int mid, int right)
{
    int left_pos = left;
    int right_pos = mid + 1;
    int pos = left;

    while (left_pos <= mid && right_pos <= right)
    {
        if (arr[left_pos] < arr[right_pos])
            tempArr[pos++] = arr[left_pos++];
        else 
            tempArr[pos++] = arr[right_pos++];
    }

    while (left_pos <= mid)
        tempArr[pos++] = arr[left_pos++];

    while (right_pos <= right)
        tempArr[pos++] = arr[right_pos++];

    while (left <= right)
    {
        arr[left] = tempArr[left];
        left++;
    }
}

void msort(double arr[], double tempArr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        msort(arr, tempArr, left, mid);
        msort(arr, tempArr, mid + 1, right);
        merge(arr, tempArr, left, mid, right);
    }
}

void merge_sort(double arr[], int n)
{
    double tempArr[n];
    msort(arr, tempArr, 0, n - 1);
}

int main()
{
    double grade[10];
    for ( int i = 0 ; i < 10 ; i++ )
    {
        cin >> grade[i];
    }

    merge_sort( grade , 10 );

    for ( int i = 0 ; i < 10 ; i++ )
    {
        cout << grade[i] << " ";
    }

    cout << endl;

    double sum_1 = 0 , sum_2 = 0;

    for ( int i = 1 ; i < 9 ; i++ )
    {
        sum_1 += grade[i];
    }

    for ( int i = 2 ; i < 8 ; i++ )
    {
        sum_2 += grade[i];
    }

    cout << sum_1/8 << endl;
    cout << sum_2/6 << endl;

    return 0;
}
