#include <iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;

    if((int(a) > 64) && (int(a) < 91))
    {
         a = char(a) + 32;

        cout << char(a) << endl;
    }

    else
    {
        cout <<  "输入错误！" << endl;
    }
   
    return 0;
}
