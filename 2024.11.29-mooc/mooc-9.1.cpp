#include <iostream>
using namespace std;

class Number {
    public:
        int a;
        int b;
        Number() {
            a = 1;
            b = 1;
        }
};

int main(){
    Number num1;
    Number num2;

    cin >> num1.a >> num1.b >> num2.a >> num2.b;
    if (num2.a == -1000){
        Number num2;
        cout << num1.a + num2.a << "+" << num1.b + num2.b << "i" << endl;
    }

    else{
        cout << num1.a + num2.a << "+" << num1.b + num2.b << "i" << endl;
    }

    return 0;
}
