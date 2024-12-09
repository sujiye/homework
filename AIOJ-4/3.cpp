#include <iostream>
using namespace std;

// 定义Shape基类
class Shape {
public:
    int w, h, r;
    Shape(int r1){
        r = r1;
    }

    Shape(int w1, int h1){
        w = w1;
        h = h1;
    }
};

// 定义Rectangle类，继承自Shape类
class Rectangle : public Shape {
    public:
        int w;
        int h;

        Rectangle(int w, int h) : Shape(w, h) {
            this->w = w;
            this->h = h;
        }

        int GetArea() {
            return w * h;
        }

};

// 定义Circle类，继承自Shape类
class Circle : public Shape {
    public:
        int r;

        Circle(int r) : Shape(r) {
            this->r = r;
        }

        double GetArea() {
            return 3.14 * r * r;
        }
};

int main() {
    Rectangle rect(5, 3);
    Circle circle(2);

    cout <<  rect.GetArea() << endl;
    cout <<  circle.GetArea() << endl;

    return 0;
}
