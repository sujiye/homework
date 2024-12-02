#include <iostream>
#include <string>
using namespace std;

int strcheck( string word )
{
    int b = 2;
    for ( char c : word)
    {
        if (( c >= 'a' and c <= 'z') or ( c >= 'A' and c <= 'Z' ))
        {
            b = 1;
        }
        else
        {
            b = 0;
            break;
        }
    }
    
    return b;
}

int main()
{
    string word;
    int N;
    cin >> N >> word;
    cout << strcheck( word ) << endl;
    return 0;
}
