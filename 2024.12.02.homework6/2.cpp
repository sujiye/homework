#include <iostream>
#include <vector>
using namespace std;

vector<int> match(vector<int> array, size_t n){
    for (size_t i = 0; i < n; i++){
        for (size_t j = 0; j < n - i - 1; j++){
            if (array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    return array;
}

vector<int> stick( vector<int> arr, vector<int> arr_a, vector<int> arr_b, int n1, int n2){ 
    size_t num1 = 0, num2 = 0;
    for (int step = 0; step < n1 + n2 ; step++ ){
        if (int(num1) == n1){
            for (size_t i = num2; int(i) < n2; i++){
                arr.push_back(arr_b[i]);
            }
            break;
        }

        if (int(num2) == n2){
            for (size_t i = num1; int(i) < n1; i++){
                arr.push_back(arr_a[i]);
            }
            break;
        }

        if (arr_a[num1] <= arr_b[num2]){
            arr.push_back(arr_a[num1]);
            num1++;
        }

        else{
            arr.push_back(arr_b[num2]);
            num2++;
        }
    }
    return arr;
}

int main()
{
    vector<int> arr_a;
    vector<int> arr_b;
    vector<int> arr;
    int n1, n2;

    cin >> n1;
    for (int i = 0 ; i < n1 ; i++){
        int temp;
        cin >> temp;
        arr_a.push_back(temp);
    }
    arr_a = match(arr_a, size_t(n1));

    cin >> n2;
    for (int i = 0 ; i < n2 ; i++)
    {
        int temp;
        cin >> temp;
        arr_b.push_back(temp);
    }
    arr_b = match(arr_b, size_t(n2));

    arr = stick(arr, arr_a, arr_b, n1, n2);

    for (size_t i = 0 ; int(i) < n1 + n2 ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
