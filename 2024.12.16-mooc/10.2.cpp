#include <iostream>
using namespace std;

class Shape{
    protected:
        double x, y;
    public:
        Shape(double x, double y): x(x), y(y){}
        virtual double area(double x, double y)
        {
            return x * y;
        }

        virtual ~Shape(){
            cout << "~~~shape" << endl;
        }
};

class Circle: public Shape{
    public:
        Circle(double x, double y): Shape(x, y){}
        double area(double x, double y)
        {
            return 3.14 * x * x;
        }
        ~Circle(){
            cout << "~~~circle" << endl;
        }
};

int main(){
    int x;
    cin >> x;
    Shape *s = new Circle(x,x);
    cout << s->area(x, x) << endl;
    delete s;
    return 0;
}
