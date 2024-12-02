#include <iostream>
using namespace std;

void zhuan( int a )
{
    int n = 0;
    for (; a >= 16 ; n++)
    {
        a = a - 16;
    }

    if(n == 10)
    {
        cout << "a";
    }

    else if(n == 11)
    {
        cout << "b";
    }

    else if(n == 12)
    {
        cout << "c";
    }

    else if(n == 13)
    {
        cout << "d";
    }

    else if(n == 14)
    {
        cout << "e";
    }

    else if(n == 15)
    {
        cout << "f";
    }

    else if(n == 0)
    {}

    else 
    {
        cout << n;
    }

    if(a == 10)
    {
        cout << "a";
    }

    else if(a == 11)
    {
        cout << "b";
    }

    else if(a == 12)
    {
        cout << "c";
    }

    else if(a == 13)
    {
        cout << "d";
    }

    else if(a == 14)
    {
        cout << "e";
    }

    else if(a == 15)
    {
        cout << "f";
    }

    else 
    {
        cout << a;
    }

 
}

int main()
{
    int o[4];

    for(int i = 0 ; i < 4 ; i++)
    {
        cin >> o[i];
    }
    
    for(int i = 0 ; i < 4 ; i++)
    {
        zhuan(o[i]);
    }
    

    return 0;

}
