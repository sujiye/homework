#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int n = 0;
    cin >> n;

    string key;
    cin >> key;
    int i = 0;

    for(char c : key)
    {
        i++;
    }

    char arr[i];

    int x = 0;
    
    for(char c : key)
    {
        arr[x] = c;
        x++;
    }

    for (int z = 0 ; z < x ; z++)
    {
        if ((int(arr[z]) > 64) && (int(arr[z]) < 91 ))
        {
            arr[z] = char(int(arr[z]) + n);
        }

        while(int (arr[z]) > 90 )
        {
            arr[z] = char(int(arr[z]) - 26);
        } 
    }

    for (int a = 0 ; a < x ; a++)
    {
        cout << arr[a];
    }
    cout << endl;
    
    return 0;
}
